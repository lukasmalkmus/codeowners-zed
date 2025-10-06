#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 29
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 28
#define ALIAS_COUNT 0
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 4

enum ts_symbol_identifiers {
  aux_sym_blank_line_token1 = 1,
  anon_sym_POUND = 2,
  sym_comment_text = 3,
  anon_sym_LBRACK = 4,
  anon_sym_RBRACK = 5,
  sym_section_name = 6,
  aux_sym_section_approvers_token1 = 7,
  sym_wildcard_pattern = 8,
  sym_directory_pattern = 9,
  sym_file_pattern = 10,
  sym_glob_pattern = 11,
  anon_sym_AT = 12,
  anon_sym_SLASH = 13,
  sym_email = 14,
  sym_identifier = 15,
  sym_document = 16,
  sym_blank_line = 17,
  sym_comment = 18,
  sym_section = 19,
  sym_section_approvers = 20,
  sym_entry = 21,
  sym_pattern = 22,
  sym_owner = 23,
  sym_username = 24,
  sym_team = 25,
  aux_sym_document_repeat1 = 26,
  aux_sym_section_approvers_repeat1 = 27,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_blank_line_token1] = "blank_line_token1",
  [anon_sym_POUND] = "#",
  [sym_comment_text] = "comment_text",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_section_name] = "section_name",
  [aux_sym_section_approvers_token1] = "section_approvers_token1",
  [sym_wildcard_pattern] = "wildcard_pattern",
  [sym_directory_pattern] = "directory_pattern",
  [sym_file_pattern] = "file_pattern",
  [sym_glob_pattern] = "glob_pattern",
  [anon_sym_AT] = "@",
  [anon_sym_SLASH] = "/",
  [sym_email] = "email",
  [sym_identifier] = "identifier",
  [sym_document] = "document",
  [sym_blank_line] = "blank_line",
  [sym_comment] = "comment",
  [sym_section] = "section",
  [sym_section_approvers] = "section_approvers",
  [sym_entry] = "entry",
  [sym_pattern] = "pattern",
  [sym_owner] = "owner",
  [sym_username] = "username",
  [sym_team] = "team",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_section_approvers_repeat1] = "section_approvers_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_blank_line_token1] = aux_sym_blank_line_token1,
  [anon_sym_POUND] = anon_sym_POUND,
  [sym_comment_text] = sym_comment_text,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_section_name] = sym_section_name,
  [aux_sym_section_approvers_token1] = aux_sym_section_approvers_token1,
  [sym_wildcard_pattern] = sym_wildcard_pattern,
  [sym_directory_pattern] = sym_directory_pattern,
  [sym_file_pattern] = sym_file_pattern,
  [sym_glob_pattern] = sym_glob_pattern,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym_email] = sym_email,
  [sym_identifier] = sym_identifier,
  [sym_document] = sym_document,
  [sym_blank_line] = sym_blank_line,
  [sym_comment] = sym_comment,
  [sym_section] = sym_section,
  [sym_section_approvers] = sym_section_approvers,
  [sym_entry] = sym_entry,
  [sym_pattern] = sym_pattern,
  [sym_owner] = sym_owner,
  [sym_username] = sym_username,
  [sym_team] = sym_team,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_section_approvers_repeat1] = aux_sym_section_approvers_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_blank_line_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [sym_comment_text] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_section_name] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_section_approvers_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_wildcard_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_directory_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_file_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_glob_pattern] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_email] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_blank_line] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_section] = {
    .visible = true,
    .named = true,
  },
  [sym_section_approvers] = {
    .visible = true,
    .named = true,
  },
  [sym_entry] = {
    .visible = true,
    .named = true,
  },
  [sym_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_owner] = {
    .visible = true,
    .named = true,
  },
  [sym_username] = {
    .visible = true,
    .named = true,
  },
  [sym_team] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_section_approvers_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_name = 1,
  field_org = 2,
  field_owners = 3,
  field_pattern = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
  [field_org] = "org",
  [field_owners] = "owners",
  [field_pattern] = "pattern",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_owners, 1},
    {field_pattern, 0},
  [3] =
    {field_name, 3},
    {field_org, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(12);
      if (lookahead == '#') ADVANCE(16);
      if (lookahead == '*') ADVANCE(25);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '@') ADVANCE(31);
      if (lookahead == '[') ADVANCE(19);
      if (lookahead == ']') ADVANCE(21);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(13);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '@') ADVANCE(31);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (lookahead == '%' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '@') ADVANCE(31);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '@') ADVANCE(31);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '@') ADVANCE(10);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 9:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(23);
      END_STATE();
    case 10:
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 11:
      if (eof) ADVANCE(12);
      if (lookahead == '\n') ADVANCE(13);
      if (lookahead == '#') ADVANCE(16);
      if (lookahead == '*') ADVANCE(26);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == '[') ADVANCE(20);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(29);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_blank_line_token1);
      if (lookahead == '\n') ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_blank_line_token1);
      if (lookahead == '\n') ADVANCE(14);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(24);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_blank_line_token1);
      if (lookahead == '\n') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(17);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead == '\n') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '@') ADVANCE(29);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_section_name);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_section_approvers_token1);
      if (lookahead == '\n') ADVANCE(14);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_wildcard_pattern);
      if (lookahead == '*') ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_wildcard_pattern);
      if (lookahead == '*') ADVANCE(26);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '@') ADVANCE(30);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_directory_pattern);
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '@') ADVANCE(30);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_directory_pattern);
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '@') ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_file_pattern);
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '@') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_glob_pattern);
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '@') ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_email);
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 11},
  [2] = {.lex_state = 11},
  [3] = {.lex_state = 11},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 11},
  [6] = {.lex_state = 11},
  [7] = {.lex_state = 11},
  [8] = {.lex_state = 11},
  [9] = {.lex_state = 11},
  [10] = {.lex_state = 11},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 7},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 11},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 11},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 9},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_wildcard_pattern] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(25),
    [sym_blank_line] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_section] = STATE(2),
    [sym_entry] = STATE(2),
    [sym_pattern] = STATE(15),
    [aux_sym_document_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_blank_line_token1] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_wildcard_pattern] = ACTIONS(11),
    [sym_directory_pattern] = ACTIONS(11),
    [sym_file_pattern] = ACTIONS(11),
    [sym_glob_pattern] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(5), 1,
      aux_sym_blank_line_token1,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    STATE(15), 1,
      sym_pattern,
    ACTIONS(11), 4,
      sym_wildcard_pattern,
      sym_directory_pattern,
      sym_file_pattern,
      sym_glob_pattern,
    STATE(3), 5,
      sym_blank_line,
      sym_comment,
      sym_section,
      sym_entry,
      aux_sym_document_repeat1,
  [29] = 7,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      aux_sym_blank_line_token1,
    ACTIONS(20), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    STATE(15), 1,
      sym_pattern,
    ACTIONS(26), 4,
      sym_wildcard_pattern,
      sym_directory_pattern,
      sym_file_pattern,
      sym_glob_pattern,
    STATE(3), 5,
      sym_blank_line,
      sym_comment,
      sym_section,
      sym_entry,
      aux_sym_document_repeat1,
  [58] = 7,
    ACTIONS(29), 1,
      aux_sym_blank_line_token1,
    ACTIONS(31), 1,
      aux_sym_section_approvers_token1,
    ACTIONS(33), 1,
      anon_sym_AT,
    ACTIONS(35), 1,
      sym_email,
    STATE(26), 1,
      sym_section_approvers,
    STATE(13), 2,
      sym_owner,
      aux_sym_section_approvers_repeat1,
    STATE(18), 2,
      sym_username,
      sym_team,
  [82] = 2,
    ACTIONS(37), 2,
      ts_builtin_sym_end,
      aux_sym_blank_line_token1,
    ACTIONS(39), 6,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_wildcard_pattern,
      sym_directory_pattern,
      sym_file_pattern,
      sym_glob_pattern,
  [95] = 2,
    ACTIONS(41), 2,
      ts_builtin_sym_end,
      aux_sym_blank_line_token1,
    ACTIONS(43), 6,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_wildcard_pattern,
      sym_directory_pattern,
      sym_file_pattern,
      sym_glob_pattern,
  [108] = 2,
    ACTIONS(45), 2,
      ts_builtin_sym_end,
      aux_sym_blank_line_token1,
    ACTIONS(47), 6,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_wildcard_pattern,
      sym_directory_pattern,
      sym_file_pattern,
      sym_glob_pattern,
  [121] = 2,
    ACTIONS(49), 2,
      ts_builtin_sym_end,
      aux_sym_blank_line_token1,
    ACTIONS(51), 6,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_wildcard_pattern,
      sym_directory_pattern,
      sym_file_pattern,
      sym_glob_pattern,
  [134] = 2,
    ACTIONS(53), 2,
      ts_builtin_sym_end,
      aux_sym_blank_line_token1,
    ACTIONS(55), 6,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_wildcard_pattern,
      sym_directory_pattern,
      sym_file_pattern,
      sym_glob_pattern,
  [147] = 2,
    ACTIONS(57), 2,
      ts_builtin_sym_end,
      aux_sym_blank_line_token1,
    ACTIONS(59), 6,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_wildcard_pattern,
      sym_directory_pattern,
      sym_file_pattern,
      sym_glob_pattern,
  [160] = 5,
    ACTIONS(33), 1,
      anon_sym_AT,
    ACTIONS(35), 1,
      sym_email,
    ACTIONS(61), 1,
      aux_sym_blank_line_token1,
    STATE(12), 2,
      sym_owner,
      aux_sym_section_approvers_repeat1,
    STATE(18), 2,
      sym_username,
      sym_team,
  [178] = 5,
    ACTIONS(63), 1,
      aux_sym_blank_line_token1,
    ACTIONS(65), 1,
      anon_sym_AT,
    ACTIONS(68), 1,
      sym_email,
    STATE(12), 2,
      sym_owner,
      aux_sym_section_approvers_repeat1,
    STATE(18), 2,
      sym_username,
      sym_team,
  [196] = 5,
    ACTIONS(33), 1,
      anon_sym_AT,
    ACTIONS(35), 1,
      sym_email,
    ACTIONS(71), 1,
      aux_sym_blank_line_token1,
    STATE(12), 2,
      sym_owner,
      aux_sym_section_approvers_repeat1,
    STATE(18), 2,
      sym_username,
      sym_team,
  [214] = 5,
    ACTIONS(33), 1,
      anon_sym_AT,
    ACTIONS(35), 1,
      sym_email,
    ACTIONS(73), 1,
      aux_sym_blank_line_token1,
    STATE(12), 2,
      sym_owner,
      aux_sym_section_approvers_repeat1,
    STATE(18), 2,
      sym_username,
      sym_team,
  [232] = 4,
    ACTIONS(75), 1,
      anon_sym_AT,
    ACTIONS(77), 1,
      sym_email,
    STATE(11), 2,
      sym_owner,
      aux_sym_section_approvers_repeat1,
    STATE(18), 2,
      sym_username,
      sym_team,
  [247] = 4,
    ACTIONS(75), 1,
      anon_sym_AT,
    ACTIONS(77), 1,
      sym_email,
    STATE(14), 2,
      sym_owner,
      aux_sym_section_approvers_repeat1,
    STATE(18), 2,
      sym_username,
      sym_team,
  [262] = 3,
    ACTIONS(79), 1,
      aux_sym_blank_line_token1,
    ACTIONS(83), 1,
      anon_sym_SLASH,
    ACTIONS(81), 2,
      anon_sym_AT,
      sym_email,
  [273] = 2,
    ACTIONS(85), 1,
      aux_sym_blank_line_token1,
    ACTIONS(87), 2,
      anon_sym_AT,
      sym_email,
  [281] = 2,
    ACTIONS(89), 1,
      aux_sym_blank_line_token1,
    ACTIONS(91), 2,
      anon_sym_AT,
      sym_email,
  [289] = 2,
    ACTIONS(93), 1,
      aux_sym_blank_line_token1,
    ACTIONS(95), 1,
      sym_comment_text,
  [296] = 1,
    ACTIONS(97), 2,
      anon_sym_AT,
      sym_email,
  [301] = 1,
    ACTIONS(99), 1,
      anon_sym_RBRACK,
  [305] = 1,
    ACTIONS(101), 1,
      sym_identifier,
  [309] = 1,
    ACTIONS(103), 1,
      aux_sym_blank_line_token1,
  [313] = 1,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
  [317] = 1,
    ACTIONS(107), 1,
      aux_sym_blank_line_token1,
  [321] = 1,
    ACTIONS(109), 1,
      sym_identifier,
  [325] = 1,
    ACTIONS(111), 1,
      sym_section_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 29,
  [SMALL_STATE(4)] = 58,
  [SMALL_STATE(5)] = 82,
  [SMALL_STATE(6)] = 95,
  [SMALL_STATE(7)] = 108,
  [SMALL_STATE(8)] = 121,
  [SMALL_STATE(9)] = 134,
  [SMALL_STATE(10)] = 147,
  [SMALL_STATE(11)] = 160,
  [SMALL_STATE(12)] = 178,
  [SMALL_STATE(13)] = 196,
  [SMALL_STATE(14)] = 214,
  [SMALL_STATE(15)] = 232,
  [SMALL_STATE(16)] = 247,
  [SMALL_STATE(17)] = 262,
  [SMALL_STATE(18)] = 273,
  [SMALL_STATE(19)] = 281,
  [SMALL_STATE(20)] = 289,
  [SMALL_STATE(21)] = 296,
  [SMALL_STATE(22)] = 301,
  [SMALL_STATE(23)] = 305,
  [SMALL_STATE(24)] = 309,
  [SMALL_STATE(25)] = 313,
  [SMALL_STATE(26)] = 317,
  [SMALL_STATE(27)] = 321,
  [SMALL_STATE(28)] = 325,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blank_line, 1, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blank_line, 1, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 5, 0, 1),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 5, 0, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 4, 0, 1),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 4, 0, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 3, 0, 2),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry, 3, 0, 2),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_approvers_repeat1, 2, 0, 0),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_approvers_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_approvers_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_approvers, 1, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_approvers, 2, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_username, 2, 0, 1),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_username, 2, 0, 1),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_owner, 1, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_owner, 1, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_team, 4, 0, 3),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_team, 4, 0, 3),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [105] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_codeowners(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
