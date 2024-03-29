// @ts-check

// Reference: https://www.prisma.io/docs/reference/api-reference/prisma-schema-reference
// Reference: https://github.com/prisma/specs/tree/master/schema
// Reference Implementation: https://github.com/prisma/language-tools/tree/master/packages/vscode/syntaxes
// Reference Implementation: https://github.com/pantharshit00/vim-prisma

module.exports = grammar({
  name: 'prisma',
  word: ($) => $.identifier,
  extras: ($) => [/\s/, $.comment, $.document_comment],
  conflicts: ($) => [
    [$._field_array, $._array],
    [$._model_attribute_arg_no_label, $._expression],
    [$._identifier_separated, $._expression],
  ],

  rules: {
    source_file: ($) => repeat1($._block),
    _block: ($) => choice($.key_value_block, $.model_block, $.enum_block),

    key_value_block: ($) => seq(choice('datasource', 'generator'), $.identifier, '{', $._key_value_block_content, '}'),
    _key_value_block_content: ($) => repeat1($.key_value),

    key_value: ($) => seq($.key, '=', $.value),
    key: ($) => seq($.identifier),
    value: ($) => seq($._expression),

    model_block: ($) => seq('model', $.identifier, '{', $._model_block_content, '}'),
    _model_block_content: ($) => repeat1(choice($.model_field, $.model_multi_attribute)),
    model_field: ($) => seq(field('field_name', $.identifier), $.field_type, repeat($.model_single_attribute)),

    enum_block: ($) => seq('enum', $.identifier, '{', $._enum_block_content, '}'),
    _enum_block_content: ($) => repeat1($.identifier),

    model_single_attribute: ($) => seq('@', $.attribute_specifier, optional($._model_attribute_args)),
    model_multi_attribute: ($) => seq('@@', $.attribute_specifier, optional($._model_attribute_args)),
    _model_attribute_args: ($) => seq('(', optional($._model_attribute_arg_separated), ')'),

    attribute_specifier: ($) => seq($.identifier, repeat(seq('.', $.identifier))),

    _model_attribute_arg_separated: ($) => seq($._model_attribute_arg, repeat(seq(',', $._model_attribute_arg))),
    _model_attribute_arg: ($) => choice($._model_attribute_arg_labeled, $._model_attribute_arg_no_label),
    _model_attribute_arg_labeled: ($) => seq(field('label', $.identifier), ':', $._model_attribute_arg_no_label),
    _model_attribute_arg_no_label: ($) => choice($._expression, $._field_array, $.identifier),

    _identifier_separated: ($) => seq($.identifier, repeat(seq(',', $.identifier))),

    field_type: ($) => choice($.nullable_type, $.non_null_type, $.array_type),
    nullable_type: ($) => seq($.non_null_type, '?'),
    array_type: ($) => seq($.non_null_type, '[', ']'),
    non_null_type: ($) => choice($.prisma_type, $.identifier),
    prisma_type: ($) => choice('String', 'Boolean', 'Int', 'DateTime', 'BigInt', 'Decimal', 'Float', 'Json', 'Bytes'),

    _field_array: ($) => seq('[', optional(field('fields', $._identifier_separated)), ']'),

    document_comment: ($) => token(seq('///', /.*/)),
    comment: ($) => token(seq('//', /(?:[^/].*)?/)),

    _expression: ($) =>
      choice(
        $.string,
        $._array,
        $.integer,
        $.boolean,
        $.apply_function,
        field('enum_value', $.identifier),
        $.special_constant,
      ),
    string: ($) => seq('"', repeat(choice(/[^"\\\n]/, $.string_char_escape)), '"'),
    integer: ($) => seq(optional('-'), /[1-9]\d*|0/),
    boolean: ($) => choice('true', 'false'),
    string_char_escape: ($) => choice('\\"', '\\\\', '\\n', '\\r'),
    apply_function: ($) => seq(field('name', $.identifier), '(', optional($._expression_separated), ')'),
    _expression_separated: ($) =>
      seq(field('argument', $._expression), repeat(seq(',', field('argument', $._expression)))),
    _array: ($) => choice(seq('[', optional($._expression_separated), ']')),
    special_constant: ($) => 'Max',

    identifier: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,
  },
});
