#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 98
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 83
#define ALIAS_COUNT 0
#define TOKEN_COUNT 41
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 5

enum {
  sym_identifier = 1,
  anon_sym_datasource = 2,
  anon_sym_generator = 3,
  anon_sym_LBRACE = 4,
  anon_sym_RBRACE = 5,
  anon_sym_EQ = 6,
  anon_sym_model = 7,
  anon_sym_enum = 8,
  anon_sym_AT = 9,
  anon_sym_AT_AT = 10,
  anon_sym_LPAREN = 11,
  anon_sym_RPAREN = 12,
  anon_sym_DOT = 13,
  anon_sym_COMMA = 14,
  anon_sym_COLON = 15,
  anon_sym_QMARK = 16,
  anon_sym_LBRACK = 17,
  anon_sym_RBRACK = 18,
  anon_sym_String = 19,
  anon_sym_Boolean = 20,
  anon_sym_Int = 21,
  anon_sym_DateTime = 22,
  anon_sym_BigInt = 23,
  anon_sym_Decimal = 24,
  anon_sym_Float = 25,
  anon_sym_Json = 26,
  anon_sym_Bytes = 27,
  sym_document_comment = 28,
  sym_comment = 29,
  anon_sym_DQUOTE = 30,
  aux_sym_string_token1 = 31,
  anon_sym_DASH = 32,
  aux_sym_integer_token1 = 33,
  anon_sym_true = 34,
  anon_sym_false = 35,
  anon_sym_BSLASH_DQUOTE = 36,
  anon_sym_BSLASH_BSLASH = 37,
  anon_sym_BSLASHn = 38,
  anon_sym_BSLASHr = 39,
  sym_special_constant = 40,
  sym_source_file = 41,
  sym__block = 42,
  sym_key_value_block = 43,
  aux_sym__key_value_block_content = 44,
  sym_key_value = 45,
  sym_key = 46,
  sym_value = 47,
  sym_model_block = 48,
  aux_sym__model_block_content = 49,
  sym_model_field = 50,
  sym_enum_block = 51,
  aux_sym__enum_block_content = 52,
  sym_model_single_attribute = 53,
  sym_model_multi_attribute = 54,
  sym__model_attribute_args = 55,
  sym_attribute_specifier = 56,
  sym__model_attribute_arg_separated = 57,
  sym__model_attribute_arg = 58,
  sym__model_attribute_arg_labeled = 59,
  sym__model_attribute_arg_no_label = 60,
  sym__identifier_separated = 61,
  sym_field_type = 62,
  sym_nullable_type = 63,
  sym_array_type = 64,
  sym_non_null_type = 65,
  sym_prisma_type = 66,
  sym__field_array = 67,
  sym__expression = 68,
  sym_string = 69,
  sym_integer = 70,
  sym_boolean = 71,
  sym_string_char_escape = 72,
  sym_apply_function = 73,
  sym__expression_separated = 74,
  sym__array = 75,
  aux_sym_source_file_repeat1 = 76,
  aux_sym_model_field_repeat1 = 77,
  aux_sym_attribute_specifier_repeat1 = 78,
  aux_sym__model_attribute_arg_separated_repeat1 = 79,
  aux_sym__identifier_separated_repeat1 = 80,
  aux_sym_string_repeat1 = 81,
  aux_sym__expression_separated_repeat1 = 82,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_datasource] = "datasource",
  [anon_sym_generator] = "generator",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_EQ] = "=",
  [anon_sym_model] = "model",
  [anon_sym_enum] = "enum",
  [anon_sym_AT] = "@",
  [anon_sym_AT_AT] = "@@",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DOT] = ".",
  [anon_sym_COMMA] = ",",
  [anon_sym_COLON] = ":",
  [anon_sym_QMARK] = "\?",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_String] = "String",
  [anon_sym_Boolean] = "Boolean",
  [anon_sym_Int] = "Int",
  [anon_sym_DateTime] = "DateTime",
  [anon_sym_BigInt] = "BigInt",
  [anon_sym_Decimal] = "Decimal",
  [anon_sym_Float] = "Float",
  [anon_sym_Json] = "Json",
  [anon_sym_Bytes] = "Bytes",
  [sym_document_comment] = "document_comment",
  [sym_comment] = "comment",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_DASH] = "-",
  [aux_sym_integer_token1] = "integer_token1",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_BSLASH_DQUOTE] = "\\\"",
  [anon_sym_BSLASH_BSLASH] = "\\\\",
  [anon_sym_BSLASHn] = "\\n",
  [anon_sym_BSLASHr] = "\\r",
  [sym_special_constant] = "special_constant",
  [sym_source_file] = "source_file",
  [sym__block] = "_block",
  [sym_key_value_block] = "key_value_block",
  [aux_sym__key_value_block_content] = "_key_value_block_content",
  [sym_key_value] = "key_value",
  [sym_key] = "key",
  [sym_value] = "value",
  [sym_model_block] = "model_block",
  [aux_sym__model_block_content] = "_model_block_content",
  [sym_model_field] = "model_field",
  [sym_enum_block] = "enum_block",
  [aux_sym__enum_block_content] = "_enum_block_content",
  [sym_model_single_attribute] = "model_single_attribute",
  [sym_model_multi_attribute] = "model_multi_attribute",
  [sym__model_attribute_args] = "_model_attribute_args",
  [sym_attribute_specifier] = "attribute_specifier",
  [sym__model_attribute_arg_separated] = "_model_attribute_arg_separated",
  [sym__model_attribute_arg] = "_model_attribute_arg",
  [sym__model_attribute_arg_labeled] = "_model_attribute_arg_labeled",
  [sym__model_attribute_arg_no_label] = "_model_attribute_arg_no_label",
  [sym__identifier_separated] = "_identifier_separated",
  [sym_field_type] = "field_type",
  [sym_nullable_type] = "nullable_type",
  [sym_array_type] = "array_type",
  [sym_non_null_type] = "non_null_type",
  [sym_prisma_type] = "prisma_type",
  [sym__field_array] = "_field_array",
  [sym__expression] = "_expression",
  [sym_string] = "string",
  [sym_integer] = "integer",
  [sym_boolean] = "boolean",
  [sym_string_char_escape] = "string_char_escape",
  [sym_apply_function] = "apply_function",
  [sym__expression_separated] = "_expression_separated",
  [sym__array] = "_array",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_model_field_repeat1] = "model_field_repeat1",
  [aux_sym_attribute_specifier_repeat1] = "attribute_specifier_repeat1",
  [aux_sym__model_attribute_arg_separated_repeat1] = "_model_attribute_arg_separated_repeat1",
  [aux_sym__identifier_separated_repeat1] = "_identifier_separated_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym__expression_separated_repeat1] = "_expression_separated_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_datasource] = anon_sym_datasource,
  [anon_sym_generator] = anon_sym_generator,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_model] = anon_sym_model,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_AT_AT] = anon_sym_AT_AT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_String] = anon_sym_String,
  [anon_sym_Boolean] = anon_sym_Boolean,
  [anon_sym_Int] = anon_sym_Int,
  [anon_sym_DateTime] = anon_sym_DateTime,
  [anon_sym_BigInt] = anon_sym_BigInt,
  [anon_sym_Decimal] = anon_sym_Decimal,
  [anon_sym_Float] = anon_sym_Float,
  [anon_sym_Json] = anon_sym_Json,
  [anon_sym_Bytes] = anon_sym_Bytes,
  [sym_document_comment] = sym_document_comment,
  [sym_comment] = sym_comment,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_DASH] = anon_sym_DASH,
  [aux_sym_integer_token1] = aux_sym_integer_token1,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_BSLASH_DQUOTE] = anon_sym_BSLASH_DQUOTE,
  [anon_sym_BSLASH_BSLASH] = anon_sym_BSLASH_BSLASH,
  [anon_sym_BSLASHn] = anon_sym_BSLASHn,
  [anon_sym_BSLASHr] = anon_sym_BSLASHr,
  [sym_special_constant] = sym_special_constant,
  [sym_source_file] = sym_source_file,
  [sym__block] = sym__block,
  [sym_key_value_block] = sym_key_value_block,
  [aux_sym__key_value_block_content] = aux_sym__key_value_block_content,
  [sym_key_value] = sym_key_value,
  [sym_key] = sym_key,
  [sym_value] = sym_value,
  [sym_model_block] = sym_model_block,
  [aux_sym__model_block_content] = aux_sym__model_block_content,
  [sym_model_field] = sym_model_field,
  [sym_enum_block] = sym_enum_block,
  [aux_sym__enum_block_content] = aux_sym__enum_block_content,
  [sym_model_single_attribute] = sym_model_single_attribute,
  [sym_model_multi_attribute] = sym_model_multi_attribute,
  [sym__model_attribute_args] = sym__model_attribute_args,
  [sym_attribute_specifier] = sym_attribute_specifier,
  [sym__model_attribute_arg_separated] = sym__model_attribute_arg_separated,
  [sym__model_attribute_arg] = sym__model_attribute_arg,
  [sym__model_attribute_arg_labeled] = sym__model_attribute_arg_labeled,
  [sym__model_attribute_arg_no_label] = sym__model_attribute_arg_no_label,
  [sym__identifier_separated] = sym__identifier_separated,
  [sym_field_type] = sym_field_type,
  [sym_nullable_type] = sym_nullable_type,
  [sym_array_type] = sym_array_type,
  [sym_non_null_type] = sym_non_null_type,
  [sym_prisma_type] = sym_prisma_type,
  [sym__field_array] = sym__field_array,
  [sym__expression] = sym__expression,
  [sym_string] = sym_string,
  [sym_integer] = sym_integer,
  [sym_boolean] = sym_boolean,
  [sym_string_char_escape] = sym_string_char_escape,
  [sym_apply_function] = sym_apply_function,
  [sym__expression_separated] = sym__expression_separated,
  [sym__array] = sym__array,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_model_field_repeat1] = aux_sym_model_field_repeat1,
  [aux_sym_attribute_specifier_repeat1] = aux_sym_attribute_specifier_repeat1,
  [aux_sym__model_attribute_arg_separated_repeat1] = aux_sym__model_attribute_arg_separated_repeat1,
  [aux_sym__identifier_separated_repeat1] = aux_sym__identifier_separated_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym__expression_separated_repeat1] = aux_sym__expression_separated_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_datasource] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_generator] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_model] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_String] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Boolean] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DateTime] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BigInt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Decimal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Json] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Bytes] = {
    .visible = true,
    .named = false,
  },
  [sym_document_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_integer_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHr] = {
    .visible = true,
    .named = false,
  },
  [sym_special_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__block] = {
    .visible = false,
    .named = true,
  },
  [sym_key_value_block] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__key_value_block_content] = {
    .visible = false,
    .named = false,
  },
  [sym_key_value] = {
    .visible = true,
    .named = true,
  },
  [sym_key] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_model_block] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__model_block_content] = {
    .visible = false,
    .named = false,
  },
  [sym_model_field] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_block] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__enum_block_content] = {
    .visible = false,
    .named = false,
  },
  [sym_model_single_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_model_multi_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym__model_attribute_args] = {
    .visible = false,
    .named = true,
  },
  [sym_attribute_specifier] = {
    .visible = true,
    .named = true,
  },
  [sym__model_attribute_arg_separated] = {
    .visible = false,
    .named = true,
  },
  [sym__model_attribute_arg] = {
    .visible = false,
    .named = true,
  },
  [sym__model_attribute_arg_labeled] = {
    .visible = false,
    .named = true,
  },
  [sym__model_attribute_arg_no_label] = {
    .visible = false,
    .named = true,
  },
  [sym__identifier_separated] = {
    .visible = false,
    .named = true,
  },
  [sym_field_type] = {
    .visible = true,
    .named = true,
  },
  [sym_nullable_type] = {
    .visible = true,
    .named = true,
  },
  [sym_array_type] = {
    .visible = true,
    .named = true,
  },
  [sym_non_null_type] = {
    .visible = true,
    .named = true,
  },
  [sym_prisma_type] = {
    .visible = true,
    .named = true,
  },
  [sym__field_array] = {
    .visible = false,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_string_char_escape] = {
    .visible = true,
    .named = true,
  },
  [sym_apply_function] = {
    .visible = true,
    .named = true,
  },
  [sym__expression_separated] = {
    .visible = false,
    .named = true,
  },
  [sym__array] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_model_field_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attribute_specifier_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__model_attribute_arg_separated_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__identifier_separated_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__expression_separated_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_argument = 1,
  field_enum_value = 2,
  field_field_name = 3,
  field_fields = 4,
  field_label = 5,
  field_name = 6,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_argument] = "argument",
  [field_enum_value] = "enum_value",
  [field_field_name] = "field_name",
  [field_fields] = "fields",
  [field_label] = "label",
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[18] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 4},
  [5] = {.index = 8, .length = 3},
  [6] = {.index = 11, .length = 4},
  [7] = {.index = 15, .length = 1},
  [8] = {.index = 16, .length = 5},
  [9] = {.index = 21, .length = 2},
  [10] = {.index = 23, .length = 1},
  [11] = {.index = 24, .length = 4},
  [12] = {.index = 28, .length = 8},
  [13] = {.index = 36, .length = 3},
  [14] = {.index = 39, .length = 4},
  [15] = {.index = 43, .length = 3},
  [16] = {.index = 46, .length = 1},
  [17] = {.index = 47, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_field_name, 0},
  [1] =
    {field_enum_value, 0},
  [2] =
    {field_argument, 0, .inherited = true},
    {field_enum_value, 0, .inherited = true},
  [4] =
    {field_argument, 2, .inherited = true},
    {field_enum_value, 2, .inherited = true},
    {field_fields, 2, .inherited = true},
    {field_label, 2, .inherited = true},
  [8] =
    {field_argument, 0},
    {field_argument, 0, .inherited = true},
    {field_enum_value, 0, .inherited = true},
  [11] =
    {field_argument, 0, .inherited = true},
    {field_enum_value, 0, .inherited = true},
    {field_fields, 0, .inherited = true},
    {field_label, 0, .inherited = true},
  [15] =
    {field_fields, 0, .inherited = true},
  [16] =
    {field_argument, 0},
    {field_argument, 0, .inherited = true},
    {field_argument, 1, .inherited = true},
    {field_enum_value, 0, .inherited = true},
    {field_enum_value, 1, .inherited = true},
  [21] =
    {field_argument, 1, .inherited = true},
    {field_enum_value, 1, .inherited = true},
  [23] =
    {field_name, 0},
  [24] =
    {field_argument, 1, .inherited = true},
    {field_enum_value, 1, .inherited = true},
    {field_fields, 1, .inherited = true},
    {field_label, 1, .inherited = true},
  [28] =
    {field_argument, 0, .inherited = true},
    {field_argument, 1, .inherited = true},
    {field_enum_value, 0, .inherited = true},
    {field_enum_value, 1, .inherited = true},
    {field_fields, 0, .inherited = true},
    {field_fields, 1, .inherited = true},
    {field_label, 0, .inherited = true},
    {field_label, 1, .inherited = true},
  [36] =
    {field_argument, 1},
    {field_argument, 1, .inherited = true},
    {field_enum_value, 1, .inherited = true},
  [39] =
    {field_argument, 0, .inherited = true},
    {field_argument, 1, .inherited = true},
    {field_enum_value, 0, .inherited = true},
    {field_enum_value, 1, .inherited = true},
  [43] =
    {field_argument, 2, .inherited = true},
    {field_enum_value, 2, .inherited = true},
    {field_name, 0},
  [46] =
    {field_fields, 1},
  [47] =
    {field_argument, 2, .inherited = true},
    {field_enum_value, 2, .inherited = true},
    {field_fields, 2, .inherited = true},
    {field_label, 0},
};

static TSSymbol ts_alias_sequences[18][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(4);
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == '(') ADVANCE(10);
      if (lookahead == ')') ADVANCE(11);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '0') ADVANCE(26);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == '=') ADVANCE(7);
      if (lookahead == '?') ADVANCE(15);
      if (lookahead == '@') ADVANCE(8);
      if (lookahead == '[') ADVANCE(16);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ']') ADVANCE(17);
      if (lookahead == '{') ADVANCE(5);
      if (lookahead == '}') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead == 'n') ADVANCE(30);
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(19);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '@') ADVANCE(9);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_document_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(19);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(22);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_BSLASHn);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_BSLASHr);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'B') ADVANCE(1);
      if (lookahead == 'D') ADVANCE(2);
      if (lookahead == 'F') ADVANCE(3);
      if (lookahead == 'I') ADVANCE(4);
      if (lookahead == 'J') ADVANCE(5);
      if (lookahead == 'M') ADVANCE(6);
      if (lookahead == 'S') ADVANCE(7);
      if (lookahead == 'd') ADVANCE(8);
      if (lookahead == 'e') ADVANCE(9);
      if (lookahead == 'f') ADVANCE(10);
      if (lookahead == 'g') ADVANCE(11);
      if (lookahead == 'm') ADVANCE(12);
      if (lookahead == 't') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'i') ADVANCE(14);
      if (lookahead == 'o') ADVANCE(15);
      if (lookahead == 'y') ADVANCE(16);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(17);
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 3:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 4:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 5:
      if (lookahead == 's') ADVANCE(21);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 7:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(24);
      END_STATE();
    case 9:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 12:
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 13:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 14:
      if (lookahead == 'g') ADVANCE(30);
      END_STATE();
    case 15:
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 16:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 17:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(34);
      END_STATE();
    case 19:
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 20:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 21:
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 22:
      if (lookahead == 'x') ADVANCE(38);
      END_STATE();
    case 23:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 24:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 25:
      if (lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(44);
      END_STATE();
    case 29:
      if (lookahead == 'u') ADVANCE(45);
      END_STATE();
    case 30:
      if (lookahead == 'I') ADVANCE(46);
      END_STATE();
    case 31:
      if (lookahead == 'l') ADVANCE(47);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_Int);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_special_constant);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(54);
      END_STATE();
    case 41:
      if (lookahead == 'm') ADVANCE(55);
      END_STATE();
    case 42:
      if (lookahead == 's') ADVANCE(56);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 48:
      if (lookahead == 's') ADVANCE(62);
      END_STATE();
    case 49:
      if (lookahead == 'T') ADVANCE(63);
      END_STATE();
    case 50:
      if (lookahead == 'm') ADVANCE(64);
      END_STATE();
    case 51:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_Json);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 54:
      if (lookahead == 's') ADVANCE(67);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 57:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 58:
      if (lookahead == 'l') ADVANCE(70);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_Bytes);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(73);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_Float);
      END_STATE();
    case 66:
      if (lookahead == 'g') ADVANCE(75);
      END_STATE();
    case 67:
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(77);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_model);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_BigInt);
      END_STATE();
    case 72:
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 73:
      if (lookahead == 'm') ADVANCE(79);
      END_STATE();
    case 74:
      if (lookahead == 'l') ADVANCE(80);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_String);
      END_STATE();
    case 76:
      if (lookahead == 'u') ADVANCE(81);
      END_STATE();
    case 77:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_Boolean);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_Decimal);
      END_STATE();
    case 81:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 82:
      if (lookahead == 'o') ADVANCE(85);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_DateTime);
      END_STATE();
    case 84:
      if (lookahead == 'c') ADVANCE(86);
      END_STATE();
    case 85:
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_generator);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_datasource);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_datasource] = ACTIONS(1),
    [anon_sym_generator] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_model] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_AT_AT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_String] = ACTIONS(1),
    [anon_sym_Boolean] = ACTIONS(1),
    [anon_sym_Int] = ACTIONS(1),
    [anon_sym_DateTime] = ACTIONS(1),
    [anon_sym_BigInt] = ACTIONS(1),
    [anon_sym_Decimal] = ACTIONS(1),
    [anon_sym_Float] = ACTIONS(1),
    [anon_sym_Json] = ACTIONS(1),
    [anon_sym_Bytes] = ACTIONS(1),
    [sym_document_comment] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [aux_sym_integer_token1] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(1),
    [anon_sym_BSLASHn] = ACTIONS(1),
    [anon_sym_BSLASHr] = ACTIONS(1),
    [sym_special_constant] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(93),
    [sym__block] = STATE(12),
    [sym_key_value_block] = STATE(12),
    [sym_model_block] = STATE(12),
    [sym_enum_block] = STATE(12),
    [aux_sym_source_file_repeat1] = STATE(12),
    [anon_sym_datasource] = ACTIONS(7),
    [anon_sym_generator] = ACTIONS(7),
    [anon_sym_model] = ACTIONS(9),
    [anon_sym_enum] = ACTIONS(11),
    [sym_document_comment] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(3), 1,
      sym_document_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      aux_sym_integer_token1,
    ACTIONS(27), 1,
      sym_special_constant,
    STATE(59), 1,
      sym__model_attribute_arg,
    STATE(95), 1,
      sym__model_attribute_arg_separated,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(79), 2,
      sym__model_attribute_arg_labeled,
      sym__model_attribute_arg_no_label,
    STATE(80), 7,
      sym__field_array,
      sym__expression,
      sym_string,
      sym_integer,
      sym_boolean,
      sym_apply_function,
      sym__array,
  [51] = 12,
    ACTIONS(3), 1,
      sym_document_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      aux_sym_integer_token1,
    ACTIONS(27), 1,
      sym_special_constant,
    STATE(73), 1,
      sym__model_attribute_arg,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(79), 2,
      sym__model_attribute_arg_labeled,
      sym__model_attribute_arg_no_label,
    STATE(80), 7,
      sym__field_array,
      sym__expression,
      sym_string,
      sym_integer,
      sym_boolean,
      sym_apply_function,
      sym__array,
  [96] = 13,
    ACTIONS(3), 1,
      sym_document_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      aux_sym_integer_token1,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_RBRACK,
    ACTIONS(35), 1,
      sym_special_constant,
    STATE(90), 1,
      sym__identifier_separated,
    STATE(92), 1,
      sym__expression_separated,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(52), 6,
      sym__expression,
      sym_string,
      sym_integer,
      sym_boolean,
      sym_apply_function,
      sym__array,
  [142] = 11,
    ACTIONS(3), 1,
      sym_document_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      aux_sym_integer_token1,
    ACTIONS(27), 1,
      sym_special_constant,
    ACTIONS(37), 1,
      sym_identifier,
    STATE(74), 1,
      sym__model_attribute_arg_no_label,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(80), 7,
      sym__field_array,
      sym__expression,
      sym_string,
      sym_integer,
      sym_boolean,
      sym_apply_function,
      sym__array,
  [183] = 12,
    ACTIONS(3), 1,
      sym_document_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      aux_sym_integer_token1,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_special_constant,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_RBRACK,
    STATE(92), 1,
      sym__expression_separated,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(52), 6,
      sym__expression,
      sym_string,
      sym_integer,
      sym_boolean,
      sym_apply_function,
      sym__array,
  [226] = 12,
    ACTIONS(3), 1,
      sym_document_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      aux_sym_integer_token1,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_special_constant,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_RPAREN,
    STATE(81), 1,
      sym__expression_separated,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(52), 6,
      sym__expression,
      sym_string,
      sym_integer,
      sym_boolean,
      sym_apply_function,
      sym__array,
  [269] = 11,
    ACTIONS(3), 1,
      sym_document_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      aux_sym_integer_token1,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(45), 1,
      sym_special_constant,
    STATE(69), 1,
      sym_value,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(70), 6,
      sym__expression,
      sym_string,
      sym_integer,
      sym_boolean,
      sym_apply_function,
      sym__array,
  [309] = 8,
    ACTIONS(3), 1,
      sym_document_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(47), 1,
      sym_identifier,
    STATE(27), 1,
      sym_prisma_type,
    STATE(28), 1,
      sym_field_type,
    STATE(30), 1,
      sym_non_null_type,
    STATE(53), 2,
      sym_nullable_type,
      sym_array_type,
    ACTIONS(49), 9,
      anon_sym_String,
      anon_sym_Boolean,
      anon_sym_Int,
      anon_sym_DateTime,
      anon_sym_BigInt,
      anon_sym_Decimal,
      anon_sym_Float,
      anon_sym_Json,
      anon_sym_Bytes,
  [343] = 10,
    ACTIONS(3), 1,
      sym_document_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      aux_sym_integer_token1,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(51), 1,
      sym_special_constant,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(66), 6,
      sym__expression,
      sym_string,
      sym_integer,
      sym_boolean,
      sym_apply_function,
      sym__array,
  [380] = 7,
    ACTIONS(3), 1,
      sym_document_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    ACTIONS(58), 1,
      anon_sym_model,
    ACTIONS(61), 1,
      anon_sym_enum,
    ACTIONS(55), 2,
      anon_sym_datasource,
      anon_sym_generator,
    STATE(11), 5,
      sym__block,
      sym_key_value_block,
      sym_model_block,
      sym_enum_block,
      aux_sym_source_file_repeat1,
  [407] = 7,
    ACTIONS(3), 1,
      sym_document_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_model,
    ACTIONS(11), 1,
      anon_sym_enum,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
    ACTIONS(7), 2,
      anon_sym_datasource,
      anon_sym_generator,
    STATE(11), 5,
      sym__block,
      sym_key_value_block,
      sym_model_block,
      sym_enum_block,
      aux_sym_source_file_repeat1,
  [434] = 5,
    ACTIONS(66), 1,
      anon_sym_DQUOTE,
    ACTIONS(68), 1,
      aux_sym_string_token1,
    ACTIONS(5), 2,
      sym_document_comment,
      sym_comment,
    STATE(13), 2,
      sym_string_char_escape,
      aux_sym_string_repeat1,
    ACTIONS(71), 4,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
  [455] = 5,
    ACTIONS(74), 1,
      anon_sym_DQUOTE,
    ACTIONS(76), 1,
      aux_sym_string_token1,
    ACTIONS(5), 2,
      sym_document_comment,
      sym_comment,
    STATE(13), 2,
      sym_string_char_escape,
      aux_sym_string_repeat1,
    ACTIONS(78), 4,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
  [476] = 5,
    ACTIONS(80), 1,
      anon_sym_DQUOTE,
    ACTIONS(82), 1,
      aux_sym_string_token1,
    ACTIONS(5), 2,
      sym_document_comment,
      sym_comment,
    STATE(14), 2,
      sym_string_char_escape,
      aux_sym_string_repeat1,
    ACTIONS(78), 4,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
  [497] = 6,
    ACTIONS(3), 1,
      sym_document_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(86), 1,
      anon_sym_AT,
    ACTIONS(88), 1,
      anon_sym_DOT,
    STATE(16), 1,
      aux_sym_attribute_specifier_repeat1,
    ACTIONS(84), 4,
      anon_sym_RBRACE,
      anon_sym_AT_AT,
      anon_sym_LPAREN,
      sym_identifier,
  [519] = 6,
    ACTIONS(3), 1,
      sym_document_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_AT,
    ACTIONS(95), 1,
      anon_sym_DOT,
    STATE(16), 1,
      aux_sym_attribute_specifier_repeat1,
    ACTIONS(91), 4,
      anon_sym_RBRACE,
      anon_sym_AT_AT,
      anon_sym_LPAREN,
      sym_identifier,
  [541] = 6,
    ACTIONS(3), 1,
      sym_document_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_DOT,
    ACTIONS(99), 1,
      anon_sym_AT,
    STATE(17), 1,
      aux_sym_attribute_specifier_repeat1,
    ACTIONS(97), 4,
      anon_sym_RBRACE,
      anon_sym_AT_AT,
      anon_sym_LPAREN,
      sym_identifier,
  [563] = 4,
    ACTIONS(3), 1,
      sym_document_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(86), 1,
      anon_sym_AT,
    ACTIONS(84), 5,
      anon_sym_RBRACE,
      anon_sym_AT_AT,
      anon_sym_LPAREN,
      anon_sym_DOT,
      sym_identifier,
  [580] = 2,
    ACTIONS(5), 2,
      sym_document_comment,
      sym_comment,
    ACTIONS(101), 6,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
  [593] = 5,
    ACTIONS(3), 1,
      sym_document_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_AT,
    STATE(24), 2,
      sym_model_single_attribute,
      aux_sym_model_field_repeat1,
    ACTIONS(103), 3,
      anon_sym_RBRACE,
      anon_sym_AT_AT,
      sym_identifier,
  [612] = 6,
    ACTIONS(3), 1,
      sym_document_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_AT,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    STATE(57), 1,
      sym__model_attribute_args,
    ACTIONS(107), 3,
      anon_sym_RBRACE,
      anon_sym_AT_AT,
      sym_identifier,
  [633] = 6,
    ACTIONS(3), 1,
      sym_document_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym_identifier,
    ACTIONS(115), 1,
      anon_sym_RBRACE,
    ACTIONS(117), 1,
      anon_sym_AT_AT,
    STATE(25), 3,
      aux_sym__model_block_content,
      sym_model_field,
      sym_model_multi_attribute,
  [654] = 5,
    ACTIONS(3), 1,
      sym_document_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_AT,
    STATE(24), 2,
      sym_model_single_attribute,
      aux_sym_model_field_repeat1,
    ACTIONS(119), 3,
      anon_sym_RBRACE,
      anon_sym_AT_AT,
      sym_identifier,
  [673] = 6,
    ACTIONS(3), 1,
      sym_document_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(124), 1,
      sym_identifier,
    ACTIONS(127), 1,
      anon_sym_RBRACE,
    ACTIONS(129), 1,
      anon_sym_AT_AT,
    STATE(25), 3,
      aux_sym__model_block_content,
      sym_model_field,
      sym_model_multi_attribute,
  [694] = 4,
    ACTIONS(3), 1,
      sym_document_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(134), 1,
      anon_sym_AT,
    ACTIONS(132), 5,
      anon_sym_RBRACE,
      anon_sym_AT_AT,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      sym_identifier,
  [711] = 4,
    ACTIONS(3), 1,
      sym_document_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(138), 1,
      anon_sym_AT,
    ACTIONS(136), 5,
      anon_sym_RBRACE,
      anon_sym_AT_AT,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      sym_identifier,
  [728] = 5,
    ACTIONS(3), 1,
      sym_document_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_AT,
    STATE(21), 2,
      sym_model_single_attribute,
      aux_sym_model_field_repeat1,
    ACTIONS(140), 3,
      anon_sym_RBRACE,
      anon_sym_AT_AT,
      sym_identifier,
  [747] = 4,
    ACTIONS(3), 1,
      sym_document_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(144), 1,
      anon_sym_LPAREN,
    ACTIONS(142), 5,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [764] = 6,
    ACTIONS(3), 1,
      sym_document_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(148), 1,
      anon_sym_AT,
    ACTIONS(150), 1,
      anon_sym_QMARK,
    ACTIONS(152), 1,
      anon_sym_LBRACK,
    ACTIONS(146), 3,
      anon_sym_RBRACE,
      anon_sym_AT_AT,
      sym_identifier,
  [785] = 3,
    ACTIONS(3), 1,
      sym_document_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(154), 5,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [799] = 3,
    ACTIONS(3), 1,
      sym_document_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(156), 5,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [813] = 5,
    ACTIONS(3), 1,
      sym_document_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    STATE(60), 1,
      sym__model_attribute_args,
    ACTIONS(158), 3,
      anon_sym_RBRACE,
      anon_sym_AT_AT,
      sym_identifier,
  [831] = 6,
    ACTIONS(3), 1,
      sym_document_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(160), 1,
      sym_identifier,
    ACTIONS(162), 1,
      anon_sym_RBRACE,
    STATE(87), 1,
      sym_key,
    STATE(43), 2,
      aux_sym__key_value_block_content,
      sym_key_value,
  [851] = 3,
    ACTIONS(3), 1,
      sym_document_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(164), 5,
      ts_builtin_sym_end,
      anon_sym_datasource,
      anon_sym_generator,
      anon_sym_model,
      anon_sym_enum,
  [865] = 3,
    ACTIONS(3), 1,
      sym_document_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(166), 5,
      ts_builtin_sym_end,
      anon_sym_datasource,
      anon_sym_generator,
      anon_sym_model,
      anon_sym_enum,
  [879] = 3,
    ACTIONS(3), 1,
      sym_document_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(168), 5,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [893] = 3,
    ACTIONS(3), 1,
      sym_document_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(170), 5,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [907] = 3,
    ACTIONS(3), 1,
      sym_document_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(172), 5,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [921] = 3,
    ACTIONS(3), 1,
      sym_document_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(174), 5,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [935] = 5,
    ACTIONS(3), 1,
      sym_document_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym_identifier,
    ACTIONS(117), 1,
      anon_sym_AT_AT,
    STATE(23), 3,
      aux_sym__model_block_content,
      sym_model_field,
      sym_model_multi_attribute,
  [953] = 3,
    ACTIONS(3), 1,
      sym_document_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(176), 5,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [967] = 6,
    ACTIONS(3), 1,
      sym_document_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(178), 1,
      sym_identifier,
    ACTIONS(181), 1,
      anon_sym_RBRACE,
    STATE(87), 1,
      sym_key,
    STATE(43), 2,
      aux_sym__key_value_block_content,
      sym_key_value,
  [987] = 3,
    ACTIONS(3), 1,
      sym_document_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(183), 5,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [1001] = 3,
    ACTIONS(3), 1,
      sym_document_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(185), 5,
      ts_builtin_sym_end,
      anon_sym_datasource,
      anon_sym_generator,
      anon_sym_model,
      anon_sym_enum,
  [1015] = 3,
    ACTIONS(3), 1,
      sym_document_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(187), 5,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [1029] = 5,
    ACTIONS(3), 1,
      sym_document_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_COMMA,
    STATE(47), 1,
      aux_sym__expression_separated_repeat1,
    ACTIONS(189), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1046] = 4,
    ACTIONS(3), 1,
      sym_document_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_AT,
    ACTIONS(194), 3,
      anon_sym_RBRACE,
      anon_sym_AT_AT,
      sym_identifier,
  [1061] = 4,
    ACTIONS(3), 1,
      sym_document_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_AT,
    ACTIONS(198), 3,
      anon_sym_RBRACE,
      anon_sym_AT_AT,
      sym_identifier,
  [1076] = 5,
    ACTIONS(3), 1,
      sym_document_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(160), 1,
      sym_identifier,
    STATE(87), 1,
      sym_key,
    STATE(34), 2,
      aux_sym__key_value_block_content,
      sym_key_value,
  [1093] = 5,
    ACTIONS(3), 1,
      sym_document_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_COMMA,
    STATE(47), 1,
      aux_sym__expression_separated_repeat1,
    ACTIONS(202), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1110] = 5,
    ACTIONS(3), 1,
      sym_document_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_COMMA,
    STATE(51), 1,
      aux_sym__expression_separated_repeat1,
    ACTIONS(206), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1127] = 4,
    ACTIONS(3), 1,
      sym_document_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(148), 1,
      anon_sym_AT,
    ACTIONS(146), 3,
      anon_sym_RBRACE,
      anon_sym_AT_AT,
      sym_identifier,
  [1142] = 6,
    ACTIONS(3), 1,
      sym_document_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(144), 1,
      anon_sym_LPAREN,
    ACTIONS(208), 1,
      anon_sym_COMMA,
    ACTIONS(211), 1,
      anon_sym_RBRACK,
    STATE(65), 1,
      aux_sym__identifier_separated_repeat1,
  [1161] = 5,
    ACTIONS(3), 1,
      sym_document_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(144), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_COLON,
    ACTIONS(214), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1178] = 4,
    ACTIONS(3), 1,
      sym_document_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_AT,
    ACTIONS(219), 3,
      anon_sym_RBRACE,
      anon_sym_AT_AT,
      sym_identifier,
  [1193] = 4,
    ACTIONS(3), 1,
      sym_document_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_AT,
    ACTIONS(223), 3,
      anon_sym_RBRACE,
      anon_sym_AT_AT,
      sym_identifier,
  [1208] = 4,
    ACTIONS(3), 1,
      sym_document_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_AT,
    ACTIONS(227), 3,
      anon_sym_RBRACE,
      anon_sym_AT_AT,
      sym_identifier,
  [1223] = 5,
    ACTIONS(3), 1,
      sym_document_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_RPAREN,
    ACTIONS(233), 1,
      anon_sym_COMMA,
    STATE(67), 1,
      aux_sym__model_attribute_arg_separated_repeat1,
  [1239] = 3,
    ACTIONS(3), 1,
      sym_document_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(235), 3,
      anon_sym_RBRACE,
      anon_sym_AT_AT,
      sym_identifier,
  [1251] = 5,
    ACTIONS(3), 1,
      sym_document_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(237), 1,
      anon_sym_COMMA,
    ACTIONS(240), 1,
      anon_sym_RBRACK,
    STATE(61), 1,
      aux_sym__identifier_separated_repeat1,
  [1267] = 5,
    ACTIONS(3), 1,
      sym_document_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_RPAREN,
    ACTIONS(244), 1,
      anon_sym_COMMA,
    STATE(62), 1,
      aux_sym__model_attribute_arg_separated_repeat1,
  [1283] = 5,
    ACTIONS(3), 1,
      sym_document_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(247), 1,
      sym_identifier,
    ACTIONS(250), 1,
      anon_sym_RBRACE,
    STATE(63), 1,
      aux_sym__enum_block_content,
  [1299] = 4,
    ACTIONS(3), 1,
      sym_document_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(144), 1,
      anon_sym_LPAREN,
    ACTIONS(214), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1313] = 5,
    ACTIONS(3), 1,
      sym_document_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_COMMA,
    ACTIONS(254), 1,
      anon_sym_RBRACK,
    STATE(61), 1,
      aux_sym__identifier_separated_repeat1,
  [1329] = 3,
    ACTIONS(3), 1,
      sym_document_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(256), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1341] = 5,
    ACTIONS(3), 1,
      sym_document_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_COMMA,
    ACTIONS(258), 1,
      anon_sym_RPAREN,
    STATE(62), 1,
      aux_sym__model_attribute_arg_separated_repeat1,
  [1357] = 5,
    ACTIONS(3), 1,
      sym_document_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(260), 1,
      sym_identifier,
    ACTIONS(262), 1,
      anon_sym_RBRACE,
    STATE(63), 1,
      aux_sym__enum_block_content,
  [1373] = 3,
    ACTIONS(3), 1,
      sym_document_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(264), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [1384] = 3,
    ACTIONS(3), 1,
      sym_document_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(266), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [1395] = 4,
    ACTIONS(3), 1,
      sym_document_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(268), 1,
      sym_identifier,
    STATE(68), 1,
      aux_sym__enum_block_content,
  [1408] = 3,
    ACTIONS(3), 1,
      sym_document_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(240), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1419] = 3,
    ACTIONS(3), 1,
      sym_document_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(270), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1430] = 3,
    ACTIONS(3), 1,
      sym_document_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(272), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1441] = 4,
    ACTIONS(3), 1,
      sym_document_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(274), 1,
      sym_identifier,
    STATE(22), 1,
      sym_attribute_specifier,
  [1454] = 4,
    ACTIONS(3), 1,
      sym_document_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(274), 1,
      sym_identifier,
    STATE(33), 1,
      sym_attribute_specifier,
  [1467] = 3,
    ACTIONS(3), 1,
      sym_document_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(276), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1478] = 3,
    ACTIONS(3), 1,
      sym_document_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(278), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1489] = 3,
    ACTIONS(3), 1,
      sym_document_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(281), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1500] = 3,
    ACTIONS(3), 1,
      sym_document_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(283), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1511] = 3,
    ACTIONS(3), 1,
      sym_document_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_RPAREN,
  [1521] = 3,
    ACTIONS(3), 1,
      sym_document_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(287), 1,
      sym_identifier,
  [1531] = 3,
    ACTIONS(3), 1,
      sym_document_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(289), 1,
      sym_identifier,
  [1541] = 3,
    ACTIONS(3), 1,
      sym_document_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(291), 1,
      anon_sym_EQ,
  [1551] = 3,
    ACTIONS(3), 1,
      sym_document_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_LBRACE,
  [1561] = 3,
    ACTIONS(3), 1,
      sym_document_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(295), 1,
      sym_identifier,
  [1571] = 3,
    ACTIONS(3), 1,
      sym_document_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(297), 1,
      anon_sym_EQ,
  [1581] = 3,
    ACTIONS(3), 1,
      sym_document_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(299), 1,
      aux_sym_integer_token1,
  [1591] = 3,
    ACTIONS(3), 1,
      sym_document_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(301), 1,
      sym_identifier,
  [1601] = 3,
    ACTIONS(3), 1,
      sym_document_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(303), 1,
      anon_sym_RBRACK,
  [1611] = 3,
    ACTIONS(3), 1,
      sym_document_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(305), 1,
      sym_identifier,
  [1621] = 3,
    ACTIONS(3), 1,
      sym_document_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(307), 1,
      anon_sym_RBRACK,
  [1631] = 3,
    ACTIONS(3), 1,
      sym_document_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(309), 1,
      ts_builtin_sym_end,
  [1641] = 3,
    ACTIONS(3), 1,
      sym_document_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(311), 1,
      anon_sym_LBRACE,
  [1651] = 3,
    ACTIONS(3), 1,
      sym_document_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(313), 1,
      anon_sym_RPAREN,
  [1661] = 3,
    ACTIONS(3), 1,
      sym_document_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(315), 1,
      anon_sym_LBRACE,
  [1671] = 3,
    ACTIONS(3), 1,
      sym_document_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_RBRACK,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 51,
  [SMALL_STATE(4)] = 96,
  [SMALL_STATE(5)] = 142,
  [SMALL_STATE(6)] = 183,
  [SMALL_STATE(7)] = 226,
  [SMALL_STATE(8)] = 269,
  [SMALL_STATE(9)] = 309,
  [SMALL_STATE(10)] = 343,
  [SMALL_STATE(11)] = 380,
  [SMALL_STATE(12)] = 407,
  [SMALL_STATE(13)] = 434,
  [SMALL_STATE(14)] = 455,
  [SMALL_STATE(15)] = 476,
  [SMALL_STATE(16)] = 497,
  [SMALL_STATE(17)] = 519,
  [SMALL_STATE(18)] = 541,
  [SMALL_STATE(19)] = 563,
  [SMALL_STATE(20)] = 580,
  [SMALL_STATE(21)] = 593,
  [SMALL_STATE(22)] = 612,
  [SMALL_STATE(23)] = 633,
  [SMALL_STATE(24)] = 654,
  [SMALL_STATE(25)] = 673,
  [SMALL_STATE(26)] = 694,
  [SMALL_STATE(27)] = 711,
  [SMALL_STATE(28)] = 728,
  [SMALL_STATE(29)] = 747,
  [SMALL_STATE(30)] = 764,
  [SMALL_STATE(31)] = 785,
  [SMALL_STATE(32)] = 799,
  [SMALL_STATE(33)] = 813,
  [SMALL_STATE(34)] = 831,
  [SMALL_STATE(35)] = 851,
  [SMALL_STATE(36)] = 865,
  [SMALL_STATE(37)] = 879,
  [SMALL_STATE(38)] = 893,
  [SMALL_STATE(39)] = 907,
  [SMALL_STATE(40)] = 921,
  [SMALL_STATE(41)] = 935,
  [SMALL_STATE(42)] = 953,
  [SMALL_STATE(43)] = 967,
  [SMALL_STATE(44)] = 987,
  [SMALL_STATE(45)] = 1001,
  [SMALL_STATE(46)] = 1015,
  [SMALL_STATE(47)] = 1029,
  [SMALL_STATE(48)] = 1046,
  [SMALL_STATE(49)] = 1061,
  [SMALL_STATE(50)] = 1076,
  [SMALL_STATE(51)] = 1093,
  [SMALL_STATE(52)] = 1110,
  [SMALL_STATE(53)] = 1127,
  [SMALL_STATE(54)] = 1142,
  [SMALL_STATE(55)] = 1161,
  [SMALL_STATE(56)] = 1178,
  [SMALL_STATE(57)] = 1193,
  [SMALL_STATE(58)] = 1208,
  [SMALL_STATE(59)] = 1223,
  [SMALL_STATE(60)] = 1239,
  [SMALL_STATE(61)] = 1251,
  [SMALL_STATE(62)] = 1267,
  [SMALL_STATE(63)] = 1283,
  [SMALL_STATE(64)] = 1299,
  [SMALL_STATE(65)] = 1313,
  [SMALL_STATE(66)] = 1329,
  [SMALL_STATE(67)] = 1341,
  [SMALL_STATE(68)] = 1357,
  [SMALL_STATE(69)] = 1373,
  [SMALL_STATE(70)] = 1384,
  [SMALL_STATE(71)] = 1395,
  [SMALL_STATE(72)] = 1408,
  [SMALL_STATE(73)] = 1419,
  [SMALL_STATE(74)] = 1430,
  [SMALL_STATE(75)] = 1441,
  [SMALL_STATE(76)] = 1454,
  [SMALL_STATE(77)] = 1467,
  [SMALL_STATE(78)] = 1478,
  [SMALL_STATE(79)] = 1489,
  [SMALL_STATE(80)] = 1500,
  [SMALL_STATE(81)] = 1511,
  [SMALL_STATE(82)] = 1521,
  [SMALL_STATE(83)] = 1531,
  [SMALL_STATE(84)] = 1541,
  [SMALL_STATE(85)] = 1551,
  [SMALL_STATE(86)] = 1561,
  [SMALL_STATE(87)] = 1571,
  [SMALL_STATE(88)] = 1581,
  [SMALL_STATE(89)] = 1591,
  [SMALL_STATE(90)] = 1601,
  [SMALL_STATE(91)] = 1611,
  [SMALL_STATE(92)] = 1621,
  [SMALL_STATE(93)] = 1631,
  [SMALL_STATE(94)] = 1641,
  [SMALL_STATE(95)] = 1651,
  [SMALL_STATE(96)] = 1661,
  [SMALL_STATE(97)] = 1671,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(91),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(83),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(86),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(13),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(20),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_specifier_repeat1, 2),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attribute_specifier_repeat1, 2),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_specifier_repeat1, 2), SHIFT_REPEAT(82),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_specifier, 2),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_specifier, 2),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_specifier, 1),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_specifier, 1),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_char_escape, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_field, 3, .production_id = 1),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_single_attribute, 2),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_model_single_attribute, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_model_field_repeat1, 2),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_model_field_repeat1, 2), SHIFT_REPEAT(75),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__model_block_content, 2), SHIFT_REPEAT(9),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__model_block_content, 2),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__model_block_content, 2), SHIFT_REPEAT(76),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prisma_type, 1),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prisma_type, 1),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_non_null_type, 1),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_non_null_type, 1),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_field, 2, .production_id = 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, .production_id = 2),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_type, 1),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_type, 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__array, 3, .production_id = 9),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__array, 2),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_multi_attribute, 2),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_block, 5),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_block, 5),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_function, 4, .production_id = 15),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 2),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__key_value_block_content, 2), SHIFT_REPEAT(84),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__key_value_block_content, 2),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_function, 3, .production_id = 10),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_block, 5),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expression_separated_repeat1, 2, .production_id = 14),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_separated_repeat1, 2, .production_id = 14), SHIFT_REPEAT(10),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 3),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nullable_type, 2),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nullable_type, 2),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_separated, 2, .production_id = 8),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_separated, 1, .production_id = 5),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression, 1, .production_id = 2), SHIFT(89),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__identifier_separated, 1), REDUCE(sym__expression, 1, .production_id = 2),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__model_attribute_arg_no_label, 1), REDUCE(sym__expression, 1, .production_id = 2),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__model_attribute_args, 3, .production_id = 11),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__model_attribute_args, 3, .production_id = 11),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_single_attribute, 3, .production_id = 4),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_model_single_attribute, 3, .production_id = 4),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__model_attribute_args, 2),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__model_attribute_args, 2),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__model_attribute_arg_separated, 1, .production_id = 6),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_multi_attribute, 3, .production_id = 4),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__identifier_separated_repeat1, 2), SHIFT_REPEAT(89),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__identifier_separated_repeat1, 2),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__model_attribute_arg_separated_repeat1, 2, .production_id = 12),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__model_attribute_arg_separated_repeat1, 2, .production_id = 12), SHIFT_REPEAT(3),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__enum_block_content, 2), SHIFT_REPEAT(63),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__enum_block_content, 2),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier_separated, 2),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expression_separated_repeat1, 2, .production_id = 13),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__model_attribute_arg_separated, 2, .production_id = 12),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 3),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, .production_id = 3),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__model_attribute_arg_separated_repeat1, 2, .production_id = 11),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__model_attribute_arg_labeled, 3, .production_id = 17),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_array, 3, .production_id = 16),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__field_array, 2), REDUCE(sym__array, 2),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__model_attribute_arg, 1, .production_id = 6),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__model_attribute_arg_no_label, 1, .production_id = 7),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 1),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [309] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_prisma(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const uint16_t *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .field_count = FIELD_COUNT,
    .field_map_slices = (const TSFieldMapSlice *)ts_field_map_slices,
    .field_map_entries = (const TSFieldMapEntry *)ts_field_map_entries,
    .field_names = ts_field_names,
    .large_state_count = LARGE_STATE_COUNT,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .state_count = STATE_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
