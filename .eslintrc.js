module.exports = {
  ignorePatterns: ['index.js', 'grammar.js', 'src', 'package-lock.json'],

  overrides: [
    {
      files: '*.json',
      plugins: ['json-format'],

      settings: {
        'json/json-with-comments-files': [],
      },
    },
    {
      files: '*.js',

      extends: [
        'airbnb-base',
      ],

      env: {
        commonjs: true,
      },
    },
    {
      files: '*.ts',

      parserOptions: { project: './tsconfig.json' },

      extends: [
        'airbnb-typescript-prettier',
        'typestrict',
      ],

      rules: {
        '@typescript-eslint/no-unused-vars': ['error', {
          argsIgnorePattern: '^_|^\\$$',
        }],
        'no-underscore-dangle': 'off',
      },

      env: {
        commonjs: true,
      },
    },
  ],
};
