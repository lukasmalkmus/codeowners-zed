/**
 * @file Tree-sitter grammar for GitHub CODEOWNERS files
 * @author Lukas Malkmus
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: 'codeowners',

  extras: $ => [
    /\s/
  ],

  rules: {
    document: $ => repeat(
      choice(
        $.comment,
        $.section,
        $.entry,
        $.blank_line
      )
    ),

    blank_line: $ => /\n/,

    comment: $ => seq(
      '#',
      optional($.comment_text),
      /\n/
    ),

    comment_text: $ => /[^\n]+/,

    section: $ => seq(
      '[',
      field('name', $.section_name),
      ']',
      optional($.section_approvers),
      /\n/
    ),

    section_name: $ => /[^\]]+/,

    section_approvers: $ => seq(
      optional(/\s+/),
      repeat1($.owner)
    ),

    entry: $ => seq(
      field('pattern', $.pattern),
      field('owners', repeat1($.owner)),
      /\n/
    ),

    pattern: $ => choice(
      $.wildcard_pattern,
      $.directory_pattern,
      $.file_pattern,
      $.glob_pattern
    ),

    wildcard_pattern: $ => /\*+/,

    directory_pattern: $ => token(seq(
      optional('/'),
      repeat1(seq(
        /[^\s#@]+/,
        optional('/')
      )),
      '/'
    )),

    file_pattern: $ => token(seq(
      optional('/'),
      /[^\s#@*]+/
    )),

    glob_pattern: $ => token(seq(
      optional('/'),
      repeat1(choice(
        /[^\s#@*]+/,
        '*',
        '**'
      )),
      repeat(seq(
        '/',
        repeat1(choice(
          /[^\s#@*]+/,
          '*',
          '**'
        ))
      ))
    )),

    owner: $ => choice(
      $.username,
      $.team,
      $.email
    ),

    username: $ => seq(
      '@',
      field('name', $.identifier)
    ),

    team: $ => seq(
      '@',
      field('org', $.identifier),
      '/',
      field('name', $.identifier)
    ),

    email: $ => token(seq(
      /[a-zA-Z0-9._%+-]+/,
      '@',
      /[a-zA-Z0-9.-]+/,
      '.',
      /[a-zA-Z]{2,}/
    )),

    identifier: $ => /[a-zA-Z0-9_-]+/
  }
});
