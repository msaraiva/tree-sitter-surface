#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 163
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 68
#define ALIAS_COUNT 1
#define TOKEN_COUNT 34
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 3

enum {
  anon_sym_LT = 1,
  anon_sym_GT = 2,
  anon_sym_LT_SLASH = 3,
  anon_sym_SLASH_GT = 4,
  anon_sym_LBRACE = 5,
  anon_sym_RBRACE = 6,
  aux_sym__expression_value_token1 = 7,
  anon_sym_LT_BANG_DASH_DASH = 8,
  aux_sym__public_comment_token1 = 9,
  anon_sym_DASH_DASH_GT = 10,
  anon_sym_LBRACE_BANG_DASH_DASH = 11,
  anon_sym_DASH_DASH_RBRACE = 12,
  anon_sym_LBRACE_POUND = 13,
  anon_sym_if = 14,
  anon_sym_unless = 15,
  anon_sym_for = 16,
  anon_sym_case = 17,
  anon_sym_LBRACE_SLASH = 18,
  anon_sym_else = 19,
  anon_sym_elseif = 20,
  anon_sym_match = 21,
  anon_sym_EQ = 22,
  anon_sym_SQUOTE = 23,
  aux_sym_quoted_attribute_value_token1 = 24,
  anon_sym_DQUOTE = 25,
  aux_sym_quoted_attribute_value_token2 = 26,
  sym_attribute_value = 27,
  sym_tag_name = 28,
  sym_slot_name = 29,
  sym_component_name = 30,
  sym_attribute_name = 31,
  sym_directive_name = 32,
  sym_text = 33,
  sym_fragment = 34,
  sym__node = 35,
  sym_tag = 36,
  sym_component = 37,
  sym_slot = 38,
  sym_block = 39,
  sym_start_tag = 40,
  sym_start_component = 41,
  sym_start_slot = 42,
  sym_end_tag = 43,
  sym_end_component = 44,
  sym_end_slot = 45,
  sym_self_closing_tag = 46,
  sym_self_closing_component = 47,
  sym_expression = 48,
  sym__expression_value = 49,
  sym_expression_value = 50,
  sym_comment = 51,
  sym__public_comment = 52,
  sym__private_comment = 53,
  sym_start_block = 54,
  sym_block_name = 55,
  sym_end_block = 56,
  sym_subblock = 57,
  sym_subblock_name = 58,
  sym_attribute = 59,
  sym_directive = 60,
  sym_quoted_attribute_value = 61,
  sym__tag_or_component_name = 62,
  aux_sym_fragment_repeat1 = 63,
  aux_sym_block_repeat1 = 64,
  aux_sym_start_tag_repeat1 = 65,
  aux_sym_expression_repeat1 = 66,
  aux_sym__public_comment_repeat1 = 67,
  anon_alias_sym_comment = 68,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LT_SLASH] = "</",
  [anon_sym_SLASH_GT] = "/>",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [aux_sym__expression_value_token1] = "_expression_value_token1",
  [anon_sym_LT_BANG_DASH_DASH] = "<!--",
  [aux_sym__public_comment_token1] = "_public_comment_token1",
  [anon_sym_DASH_DASH_GT] = "-->",
  [anon_sym_LBRACE_BANG_DASH_DASH] = "{!--",
  [anon_sym_DASH_DASH_RBRACE] = "--}",
  [anon_sym_LBRACE_POUND] = "{#",
  [anon_sym_if] = "if",
  [anon_sym_unless] = "unless",
  [anon_sym_for] = "for",
  [anon_sym_case] = "case",
  [anon_sym_LBRACE_SLASH] = "{/",
  [anon_sym_else] = "else",
  [anon_sym_elseif] = "elseif",
  [anon_sym_match] = "match",
  [anon_sym_EQ] = "=",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_quoted_attribute_value_token1] = "attribute_value",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_quoted_attribute_value_token2] = "attribute_value",
  [sym_attribute_value] = "attribute_value",
  [sym_tag_name] = "tag_name",
  [sym_slot_name] = "slot_name",
  [sym_component_name] = "component_name",
  [sym_attribute_name] = "attribute_name",
  [sym_directive_name] = "directive_name",
  [sym_text] = "text",
  [sym_fragment] = "fragment",
  [sym__node] = "_node",
  [sym_tag] = "tag",
  [sym_component] = "component",
  [sym_slot] = "slot",
  [sym_block] = "block",
  [sym_start_tag] = "start_tag",
  [sym_start_component] = "start_component",
  [sym_start_slot] = "start_slot",
  [sym_end_tag] = "end_tag",
  [sym_end_component] = "end_component",
  [sym_end_slot] = "end_slot",
  [sym_self_closing_tag] = "self_closing_tag",
  [sym_self_closing_component] = "self_closing_component",
  [sym_expression] = "expression",
  [sym__expression_value] = "_expression_value",
  [sym_expression_value] = "expression_value",
  [sym_comment] = "comment",
  [sym__public_comment] = "_public_comment",
  [sym__private_comment] = "_private_comment",
  [sym_start_block] = "start_block",
  [sym_block_name] = "block_name",
  [sym_end_block] = "end_block",
  [sym_subblock] = "subblock",
  [sym_subblock_name] = "subblock_name",
  [sym_attribute] = "attribute",
  [sym_directive] = "directive",
  [sym_quoted_attribute_value] = "quoted_attribute_value",
  [sym__tag_or_component_name] = "_tag_or_component_name",
  [aux_sym_fragment_repeat1] = "fragment_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_start_tag_repeat1] = "start_tag_repeat1",
  [aux_sym_expression_repeat1] = "expression_repeat1",
  [aux_sym__public_comment_repeat1] = "_public_comment_repeat1",
  [anon_alias_sym_comment] = "comment",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_SLASH] = anon_sym_LT_SLASH,
  [anon_sym_SLASH_GT] = anon_sym_SLASH_GT,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [aux_sym__expression_value_token1] = aux_sym__expression_value_token1,
  [anon_sym_LT_BANG_DASH_DASH] = anon_sym_LT_BANG_DASH_DASH,
  [aux_sym__public_comment_token1] = aux_sym__public_comment_token1,
  [anon_sym_DASH_DASH_GT] = anon_sym_DASH_DASH_GT,
  [anon_sym_LBRACE_BANG_DASH_DASH] = anon_sym_LBRACE_BANG_DASH_DASH,
  [anon_sym_DASH_DASH_RBRACE] = anon_sym_DASH_DASH_RBRACE,
  [anon_sym_LBRACE_POUND] = anon_sym_LBRACE_POUND,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_unless] = anon_sym_unless,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_case] = anon_sym_case,
  [anon_sym_LBRACE_SLASH] = anon_sym_LBRACE_SLASH,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_elseif] = anon_sym_elseif,
  [anon_sym_match] = anon_sym_match,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_quoted_attribute_value_token1] = sym_attribute_value,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_quoted_attribute_value_token2] = sym_attribute_value,
  [sym_attribute_value] = sym_attribute_value,
  [sym_tag_name] = sym_tag_name,
  [sym_slot_name] = sym_slot_name,
  [sym_component_name] = sym_component_name,
  [sym_attribute_name] = sym_attribute_name,
  [sym_directive_name] = sym_directive_name,
  [sym_text] = sym_text,
  [sym_fragment] = sym_fragment,
  [sym__node] = sym__node,
  [sym_tag] = sym_tag,
  [sym_component] = sym_component,
  [sym_slot] = sym_slot,
  [sym_block] = sym_block,
  [sym_start_tag] = sym_start_tag,
  [sym_start_component] = sym_start_component,
  [sym_start_slot] = sym_start_slot,
  [sym_end_tag] = sym_end_tag,
  [sym_end_component] = sym_end_component,
  [sym_end_slot] = sym_end_slot,
  [sym_self_closing_tag] = sym_self_closing_tag,
  [sym_self_closing_component] = sym_self_closing_component,
  [sym_expression] = sym_expression,
  [sym__expression_value] = sym__expression_value,
  [sym_expression_value] = sym_expression_value,
  [sym_comment] = sym_comment,
  [sym__public_comment] = sym__public_comment,
  [sym__private_comment] = sym__private_comment,
  [sym_start_block] = sym_start_block,
  [sym_block_name] = sym_block_name,
  [sym_end_block] = sym_end_block,
  [sym_subblock] = sym_subblock,
  [sym_subblock_name] = sym_subblock_name,
  [sym_attribute] = sym_attribute,
  [sym_directive] = sym_directive,
  [sym_quoted_attribute_value] = sym_quoted_attribute_value,
  [sym__tag_or_component_name] = sym__tag_or_component_name,
  [aux_sym_fragment_repeat1] = aux_sym_fragment_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_start_tag_repeat1] = aux_sym_start_tag_repeat1,
  [aux_sym_expression_repeat1] = aux_sym_expression_repeat1,
  [aux_sym__public_comment_repeat1] = aux_sym__public_comment_repeat1,
  [anon_alias_sym_comment] = anon_alias_sym_comment,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_GT] = {
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
  [aux_sym__expression_value_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LT_BANG_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__public_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DASH_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_BANG_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unless] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_case] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_elseif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_match] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_attribute_value_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_attribute_value_token2] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [sym_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym_slot_name] = {
    .visible = true,
    .named = true,
  },
  [sym_component_name] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_name] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_name] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym__node] = {
    .visible = false,
    .named = true,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_component] = {
    .visible = true,
    .named = true,
  },
  [sym_slot] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_start_component] = {
    .visible = true,
    .named = true,
  },
  [sym_start_slot] = {
    .visible = true,
    .named = true,
  },
  [sym_end_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_end_component] = {
    .visible = true,
    .named = true,
  },
  [sym_end_slot] = {
    .visible = true,
    .named = true,
  },
  [sym_self_closing_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_self_closing_component] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__expression_value] = {
    .visible = false,
    .named = true,
  },
  [sym_expression_value] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__public_comment] = {
    .visible = false,
    .named = true,
  },
  [sym__private_comment] = {
    .visible = false,
    .named = true,
  },
  [sym_start_block] = {
    .visible = true,
    .named = true,
  },
  [sym_block_name] = {
    .visible = true,
    .named = true,
  },
  [sym_end_block] = {
    .visible = true,
    .named = true,
  },
  [sym_subblock] = {
    .visible = true,
    .named = true,
  },
  [sym_subblock_name] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [sym__tag_or_component_name] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_fragment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_start_tag_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__public_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [anon_alias_sym_comment] = {
    .visible = true,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = sym_expression_value,
  },
  [2] = {
    [1] = anon_alias_sym_comment,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__public_comment, 2,
    sym__public_comment,
    anon_alias_sym_comment,
  sym__private_comment, 2,
    sym__private_comment,
    anon_alias_sym_comment,
  aux_sym_expression_repeat1, 2,
    aux_sym_expression_repeat1,
    sym_expression_value,
  aux_sym__public_comment_repeat1, 2,
    aux_sym__public_comment_repeat1,
    anon_alias_sym_comment,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 2,
  [4] = 4,
  [5] = 4,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 6,
  [14] = 14,
  [15] = 9,
  [16] = 10,
  [17] = 11,
  [18] = 12,
  [19] = 14,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 22,
  [24] = 24,
  [25] = 21,
  [26] = 26,
  [27] = 27,
  [28] = 26,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 24,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 49,
  [60] = 60,
  [61] = 61,
  [62] = 54,
  [63] = 47,
  [64] = 27,
  [65] = 29,
  [66] = 66,
  [67] = 36,
  [68] = 52,
  [69] = 45,
  [70] = 41,
  [71] = 33,
  [72] = 35,
  [73] = 34,
  [74] = 44,
  [75] = 51,
  [76] = 53,
  [77] = 77,
  [78] = 55,
  [79] = 40,
  [80] = 39,
  [81] = 81,
  [82] = 82,
  [83] = 38,
  [84] = 48,
  [85] = 42,
  [86] = 43,
  [87] = 46,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 39,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 36,
  [101] = 101,
  [102] = 94,
  [103] = 103,
  [104] = 104,
  [105] = 98,
  [106] = 103,
  [107] = 107,
  [108] = 108,
  [109] = 103,
  [110] = 94,
  [111] = 111,
  [112] = 111,
  [113] = 113,
  [114] = 113,
  [115] = 115,
  [116] = 115,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 117,
  [122] = 122,
  [123] = 119,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 124,
  [129] = 118,
  [130] = 125,
  [131] = 122,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 134,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 127,
  [143] = 140,
  [144] = 144,
  [145] = 145,
  [146] = 141,
  [147] = 147,
  [148] = 139,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 147,
  [153] = 145,
  [154] = 150,
  [155] = 155,
  [156] = 120,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 133,
  [161] = 151,
  [162] = 149,
};

static inline bool sym_attribute_value_character_set_1(int32_t c) {
  return (c < '"'
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || c == ' '))
    : (c <= '"' || (c < '{'
      ? (c < '<'
        ? c == '\''
        : c <= '>')
      : (c <= '{' || c == '}'))));
}

static inline bool sym_tag_name_character_set_1(int32_t c) {
  return (c < '-'
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c < '\''
        ? (c >= ' ' && c <= '"')
        : c <= '\'')))
    : (c <= '-' || (c < '{'
      ? (c < '<'
        ? c == '/'
        : c <= '>')
      : (c <= '{' || c == '}'))));
}

static inline bool sym_attribute_name_character_set_1(int32_t c) {
  return (c < '"'
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || c == ' '))
    : (c <= '"' || (c < '<'
      ? (c < '/'
        ? c == '\''
        : c <= '/')
      : (c <= '>' || c == '{'))));
}

static inline bool sym_directive_name_character_set_1(int32_t c) {
  return (c < '\''
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c < '"'
        ? c == ' '
        : c <= '"')))
    : (c <= '\'' || (c < '{'
      ? (c < '<'
        ? c == '/'
        : c <= '>')
      : (c <= '{' || c == '}'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(48);
      if (lookahead == '"') ADVANCE(90);
      if (lookahead == '\'') ADVANCE(87);
      if (lookahead == '-') ADVANCE(99);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == '<') ADVANCE(50);
      if (lookahead == '=') ADVANCE(86);
      if (lookahead == '>') ADVANCE(51);
      if (lookahead == 'c') ADVANCE(100);
      if (lookahead == 'e') ADVANCE(110);
      if (lookahead == 'f') ADVANCE(112);
      if (lookahead == 'i') ADVANCE(106);
      if (lookahead == 'm') ADVANCE(101);
      if (lookahead == 'u') ADVANCE(111);
      if (lookahead == '{') ADVANCE(56);
      if (lookahead == '}') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '#' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(98);
      if (lookahead != 0) ADVANCE(120);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(90);
      if (lookahead == '\'') ADVANCE(87);
      if (lookahead == '{') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead != 0 &&
          (lookahead < '<' || '>' < lookahead) &&
          lookahead != '}') ADVANCE(93);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(91);
      if (lookahead != 0) ADVANCE(92);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(88);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(60);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(74);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(19);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == '<') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead != 0) ADVANCE(72);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == '{') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead != 0) ADVANCE(72);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(66);
      if (lookahead != 0) ADVANCE(72);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(4);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(70);
      if (lookahead != 0) ADVANCE(72);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(5);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == ':') ADVANCE(42);
      if (lookahead == 'c') ADVANCE(20);
      if (lookahead == 'e') ADVANCE(30);
      if (lookahead == 'f') ADVANCE(32);
      if (lookahead == 'i') ADVANCE(26);
      if (lookahead == 'm') ADVANCE(21);
      if (lookahead == 'u') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == ':') ADVANCE(44);
      if (lookahead == '=') ADVANCE(86);
      if (lookahead == '>') ADVANCE(51);
      if (lookahead == '{') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '<' &&
          lookahead != '}') ADVANCE(120);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      if (lookahead == '#' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(98);
      END_STATE();
    case 16:
      if (lookahead == '<') ADVANCE(49);
      if (lookahead == '{') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (lookahead != 0 &&
          lookahead != '>' &&
          lookahead != '}') ADVANCE(126);
      END_STATE();
    case 17:
      if (lookahead == '>') ADVANCE(53);
      END_STATE();
    case 18:
      if (lookahead == '>') ADVANCE(73);
      END_STATE();
    case 19:
      if (lookahead == '>') ADVANCE(73);
      if (lookahead == '}') ADVANCE(75);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(35);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(28);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 26:
      if (lookahead == 'f') ADVANCE(77);
      END_STATE();
    case 27:
      if (lookahead == 'f') ADVANCE(84);
      END_STATE();
    case 28:
      if (lookahead == 'h') ADVANCE(85);
      END_STATE();
    case 29:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 31:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 32:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 34:
      if (lookahead == 's') ADVANCE(78);
      END_STATE();
    case 35:
      if (lookahead == 's') ADVANCE(23);
      END_STATE();
    case 36:
      if (lookahead == 's') ADVANCE(24);
      END_STATE();
    case 37:
      if (lookahead == 's') ADVANCE(34);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 39:
      if (lookahead == '{') ADVANCE(54);
      if (lookahead == '}') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(58);
      if (lookahead != 0) ADVANCE(59);
      END_STATE();
    case 40:
      if (lookahead == '}') ADVANCE(75);
      END_STATE();
    case 41:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(126);
      END_STATE();
    case 42:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 43:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      if (!sym_directive_name_character_set_1(lookahead)) ADVANCE(121);
      END_STATE();
    case 44:
      if (!sym_directive_name_character_set_1(lookahead)) ADVANCE(121);
      END_STATE();
    case 45:
      if (eof) ADVANCE(48);
      if (lookahead == '-') ADVANCE(122);
      if (lookahead == '<') ADVANCE(50);
      if (lookahead == '{') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(45)
      if (lookahead != 0 &&
          lookahead != '>' &&
          lookahead != '}') ADVANCE(126);
      END_STATE();
    case 46:
      if (eof) ADVANCE(48);
      if (lookahead == '-') ADVANCE(123);
      if (lookahead == '<') ADVANCE(50);
      if (lookahead == '{') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(46)
      if (lookahead != 0 &&
          lookahead != '>' &&
          lookahead != '}') ADVANCE(126);
      END_STATE();
    case 47:
      if (eof) ADVANCE(48);
      if (lookahead == '<') ADVANCE(50);
      if (lookahead == '{') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(47)
      if (lookahead != 0 &&
          lookahead != '>' &&
          lookahead != '}') ADVANCE(126);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(10);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(10);
      if (lookahead == '/') ADVANCE(52);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '!') ADVANCE(12);
      if (lookahead == '#') ADVANCE(76);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '!') ADVANCE(12);
      if (lookahead == '#') ADVANCE(76);
      if (lookahead == '/') ADVANCE(81);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym__expression_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym__expression_value_token1);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LT_BANG_DASH_DASH);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym__public_comment_token1);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym__public_comment_token1);
      if (lookahead == '!') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(72);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym__public_comment_token1);
      if (lookahead == '!') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(72);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym__public_comment_token1);
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == '<') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead != 0) ADVANCE(72);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym__public_comment_token1);
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == '{') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead != 0) ADVANCE(72);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym__public_comment_token1);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(66);
      if (lookahead != 0) ADVANCE(72);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym__public_comment_token1);
      if (lookahead == '-') ADVANCE(40);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym__public_comment_token1);
      if (lookahead == '-') ADVANCE(18);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym__public_comment_token1);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead != 0) ADVANCE(72);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym__public_comment_token1);
      if (lookahead == '-') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(70);
      if (lookahead != 0) ADVANCE(72);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym__public_comment_token1);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead != 0) ADVANCE(72);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym__public_comment_token1);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_GT);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_LBRACE_BANG_DASH_DASH);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_RBRACE);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_LBRACE_POUND);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_unless);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_LBRACE_SLASH);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_elseif);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_match);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(89);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(92);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_attribute_value);
      if (!sym_attribute_value_character_set_1(lookahead)) ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_tag_name);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      if (!sym_tag_name_character_set_1(lookahead)) ADVANCE(95);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_tag_name);
      if (!sym_tag_name_character_set_1(lookahead)) ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_slot_name);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      if (!sym_tag_name_character_set_1(lookahead)) ADVANCE(97);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_slot_name);
      if (!sym_tag_name_character_set_1(lookahead)) ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_component_name);
      if (!sym_tag_name_character_set_1(lookahead)) ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == '-') ADVANCE(119);
      if (!sym_directive_name_character_set_1(lookahead)) ADVANCE(120);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'a') ADVANCE(114);
      if (!sym_directive_name_character_set_1(lookahead)) ADVANCE(120);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'a') ADVANCE(118);
      if (!sym_directive_name_character_set_1(lookahead)) ADVANCE(120);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'c') ADVANCE(108);
      if (!sym_directive_name_character_set_1(lookahead)) ADVANCE(120);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'e') ADVANCE(80);
      if (!sym_directive_name_character_set_1(lookahead)) ADVANCE(120);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'e') ADVANCE(82);
      if (!sym_directive_name_character_set_1(lookahead)) ADVANCE(120);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'e') ADVANCE(117);
      if (!sym_directive_name_character_set_1(lookahead)) ADVANCE(120);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'f') ADVANCE(77);
      if (!sym_directive_name_character_set_1(lookahead)) ADVANCE(120);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'f') ADVANCE(84);
      if (!sym_directive_name_character_set_1(lookahead)) ADVANCE(120);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'h') ADVANCE(85);
      if (!sym_directive_name_character_set_1(lookahead)) ADVANCE(120);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'l') ADVANCE(105);
      if (!sym_directive_name_character_set_1(lookahead)) ADVANCE(120);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'l') ADVANCE(116);
      if (!sym_directive_name_character_set_1(lookahead)) ADVANCE(120);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'n') ADVANCE(109);
      if (!sym_directive_name_character_set_1(lookahead)) ADVANCE(120);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'o') ADVANCE(113);
      if (!sym_directive_name_character_set_1(lookahead)) ADVANCE(120);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'r') ADVANCE(79);
      if (!sym_directive_name_character_set_1(lookahead)) ADVANCE(120);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 's') ADVANCE(103);
      if (!sym_directive_name_character_set_1(lookahead)) ADVANCE(120);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 's') ADVANCE(78);
      if (!sym_directive_name_character_set_1(lookahead)) ADVANCE(120);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 's') ADVANCE(104);
      if (!sym_directive_name_character_set_1(lookahead)) ADVANCE(120);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 's') ADVANCE(115);
      if (!sym_directive_name_character_set_1(lookahead)) ADVANCE(120);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 't') ADVANCE(102);
      if (!sym_directive_name_character_set_1(lookahead)) ADVANCE(120);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == '}') ADVANCE(75);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(120);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_attribute_name);
      if (!sym_directive_name_character_set_1(lookahead)) ADVANCE(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_directive_name);
      if (!sym_directive_name_character_set_1(lookahead)) ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(126);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(126);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '>') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(126);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '}') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{') ADVANCE(126);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(126);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 47},
  [2] = {.lex_state = 16},
  [3] = {.lex_state = 16},
  [4] = {.lex_state = 16},
  [5] = {.lex_state = 16},
  [6] = {.lex_state = 47},
  [7] = {.lex_state = 16},
  [8] = {.lex_state = 47},
  [9] = {.lex_state = 47},
  [10] = {.lex_state = 47},
  [11] = {.lex_state = 47},
  [12] = {.lex_state = 47},
  [13] = {.lex_state = 47},
  [14] = {.lex_state = 47},
  [15] = {.lex_state = 47},
  [16] = {.lex_state = 47},
  [17] = {.lex_state = 47},
  [18] = {.lex_state = 47},
  [19] = {.lex_state = 47},
  [20] = {.lex_state = 47},
  [21] = {.lex_state = 14},
  [22] = {.lex_state = 14},
  [23] = {.lex_state = 14},
  [24] = {.lex_state = 14},
  [25] = {.lex_state = 14},
  [26] = {.lex_state = 14},
  [27] = {.lex_state = 45},
  [28] = {.lex_state = 14},
  [29] = {.lex_state = 46},
  [30] = {.lex_state = 13},
  [31] = {.lex_state = 14},
  [32] = {.lex_state = 14},
  [33] = {.lex_state = 47},
  [34] = {.lex_state = 47},
  [35] = {.lex_state = 47},
  [36] = {.lex_state = 47},
  [37] = {.lex_state = 14},
  [38] = {.lex_state = 47},
  [39] = {.lex_state = 47},
  [40] = {.lex_state = 47},
  [41] = {.lex_state = 47},
  [42] = {.lex_state = 47},
  [43] = {.lex_state = 47},
  [44] = {.lex_state = 47},
  [45] = {.lex_state = 47},
  [46] = {.lex_state = 47},
  [47] = {.lex_state = 47},
  [48] = {.lex_state = 47},
  [49] = {.lex_state = 47},
  [50] = {.lex_state = 14},
  [51] = {.lex_state = 47},
  [52] = {.lex_state = 47},
  [53] = {.lex_state = 47},
  [54] = {.lex_state = 47},
  [55] = {.lex_state = 47},
  [56] = {.lex_state = 47},
  [57] = {.lex_state = 16},
  [58] = {.lex_state = 16},
  [59] = {.lex_state = 16},
  [60] = {.lex_state = 47},
  [61] = {.lex_state = 47},
  [62] = {.lex_state = 16},
  [63] = {.lex_state = 16},
  [64] = {.lex_state = 16},
  [65] = {.lex_state = 16},
  [66] = {.lex_state = 16},
  [67] = {.lex_state = 16},
  [68] = {.lex_state = 16},
  [69] = {.lex_state = 16},
  [70] = {.lex_state = 16},
  [71] = {.lex_state = 16},
  [72] = {.lex_state = 16},
  [73] = {.lex_state = 16},
  [74] = {.lex_state = 16},
  [75] = {.lex_state = 16},
  [76] = {.lex_state = 16},
  [77] = {.lex_state = 47},
  [78] = {.lex_state = 16},
  [79] = {.lex_state = 16},
  [80] = {.lex_state = 16},
  [81] = {.lex_state = 47},
  [82] = {.lex_state = 47},
  [83] = {.lex_state = 16},
  [84] = {.lex_state = 16},
  [85] = {.lex_state = 16},
  [86] = {.lex_state = 16},
  [87] = {.lex_state = 16},
  [88] = {.lex_state = 16},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 14},
  [92] = {.lex_state = 14},
  [93] = {.lex_state = 39},
  [94] = {.lex_state = 39},
  [95] = {.lex_state = 14},
  [96] = {.lex_state = 14},
  [97] = {.lex_state = 14},
  [98] = {.lex_state = 13},
  [99] = {.lex_state = 14},
  [100] = {.lex_state = 14},
  [101] = {.lex_state = 39},
  [102] = {.lex_state = 39},
  [103] = {.lex_state = 39},
  [104] = {.lex_state = 14},
  [105] = {.lex_state = 13},
  [106] = {.lex_state = 39},
  [107] = {.lex_state = 39},
  [108] = {.lex_state = 13},
  [109] = {.lex_state = 39},
  [110] = {.lex_state = 39},
  [111] = {.lex_state = 39},
  [112] = {.lex_state = 39},
  [113] = {.lex_state = 7},
  [114] = {.lex_state = 7},
  [115] = {.lex_state = 8},
  [116] = {.lex_state = 8},
  [117] = {.lex_state = 15},
  [118] = {.lex_state = 9},
  [119] = {.lex_state = 11},
  [120] = {.lex_state = 39},
  [121] = {.lex_state = 15},
  [122] = {.lex_state = 15},
  [123] = {.lex_state = 9},
  [124] = {.lex_state = 15},
  [125] = {.lex_state = 11},
  [126] = {.lex_state = 39},
  [127] = {.lex_state = 39},
  [128] = {.lex_state = 15},
  [129] = {.lex_state = 9},
  [130] = {.lex_state = 11},
  [131] = {.lex_state = 15},
  [132] = {.lex_state = 39},
  [133] = {.lex_state = 39},
  [134] = {.lex_state = 11},
  [135] = {.lex_state = 2},
  [136] = {.lex_state = 3},
  [137] = {.lex_state = 9},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 13},
  [141] = {.lex_state = 13},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 13},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 13},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 13},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 13},
  [162] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_SLASH] = ACTIONS(1),
    [anon_sym_SLASH_GT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(1),
    [anon_sym_LBRACE_BANG_DASH_DASH] = ACTIONS(1),
    [anon_sym_DASH_DASH_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_POUND] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_unless] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_case] = ACTIONS(1),
    [anon_sym_LBRACE_SLASH] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_elseif] = ACTIONS(1),
    [anon_sym_match] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_slot_name] = ACTIONS(1),
    [sym_component_name] = ACTIONS(1),
    [sym_attribute_name] = ACTIONS(1),
    [sym_directive_name] = ACTIONS(1),
  },
  [1] = {
    [sym_fragment] = STATE(144),
    [sym__node] = STATE(20),
    [sym_tag] = STATE(20),
    [sym_component] = STATE(20),
    [sym_slot] = STATE(20),
    [sym_block] = STATE(20),
    [sym_start_tag] = STATE(12),
    [sym_start_component] = STATE(13),
    [sym_start_slot] = STATE(14),
    [sym_self_closing_tag] = STATE(43),
    [sym_self_closing_component] = STATE(42),
    [sym_expression] = STATE(20),
    [sym_comment] = STATE(20),
    [sym__public_comment] = STATE(38),
    [sym__private_comment] = STATE(38),
    [sym_start_block] = STATE(4),
    [aux_sym_fragment_repeat1] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LT] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(9),
    [anon_sym_LBRACE_BANG_DASH_DASH] = ACTIONS(11),
    [anon_sym_LBRACE_POUND] = ACTIONS(13),
    [sym_text] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(23), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    ACTIONS(25), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(27), 1,
      anon_sym_LBRACE_SLASH,
    ACTIONS(29), 1,
      sym_text,
    STATE(5), 1,
      sym_start_block,
    STATE(6), 1,
      sym_start_component,
    STATE(18), 1,
      sym_start_tag,
    STATE(19), 1,
      sym_start_slot,
    STATE(78), 1,
      sym_end_block,
    STATE(85), 1,
      sym_self_closing_component,
    STATE(86), 1,
      sym_self_closing_tag,
    STATE(83), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(7), 9,
      sym__node,
      sym_tag,
      sym_component,
      sym_slot,
      sym_block,
      sym_expression,
      sym_comment,
      sym_subblock,
      aux_sym_block_repeat1,
  [58] = 16,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(23), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    ACTIONS(25), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(29), 1,
      sym_text,
    ACTIONS(31), 1,
      anon_sym_LBRACE_SLASH,
    STATE(5), 1,
      sym_start_block,
    STATE(6), 1,
      sym_start_component,
    STATE(18), 1,
      sym_start_tag,
    STATE(19), 1,
      sym_start_slot,
    STATE(55), 1,
      sym_end_block,
    STATE(85), 1,
      sym_self_closing_component,
    STATE(86), 1,
      sym_self_closing_tag,
    STATE(83), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(7), 9,
      sym__node,
      sym_tag,
      sym_component,
      sym_slot,
      sym_block,
      sym_expression,
      sym_comment,
      sym_subblock,
      aux_sym_block_repeat1,
  [116] = 16,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(23), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    ACTIONS(25), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACE_SLASH,
    ACTIONS(33), 1,
      sym_text,
    STATE(5), 1,
      sym_start_block,
    STATE(6), 1,
      sym_start_component,
    STATE(18), 1,
      sym_start_tag,
    STATE(19), 1,
      sym_start_slot,
    STATE(41), 1,
      sym_end_block,
    STATE(85), 1,
      sym_self_closing_component,
    STATE(86), 1,
      sym_self_closing_tag,
    STATE(83), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(3), 9,
      sym__node,
      sym_tag,
      sym_component,
      sym_slot,
      sym_block,
      sym_expression,
      sym_comment,
      sym_subblock,
      aux_sym_block_repeat1,
  [174] = 16,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(23), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    ACTIONS(25), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(27), 1,
      anon_sym_LBRACE_SLASH,
    ACTIONS(35), 1,
      sym_text,
    STATE(5), 1,
      sym_start_block,
    STATE(6), 1,
      sym_start_component,
    STATE(18), 1,
      sym_start_tag,
    STATE(19), 1,
      sym_start_slot,
    STATE(70), 1,
      sym_end_block,
    STATE(85), 1,
      sym_self_closing_component,
    STATE(86), 1,
      sym_self_closing_tag,
    STATE(83), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(2), 9,
      sym__node,
      sym_tag,
      sym_component,
      sym_slot,
      sym_block,
      sym_expression,
      sym_comment,
      sym_subblock,
      aux_sym_block_repeat1,
  [232] = 16,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(37), 1,
      anon_sym_LT_SLASH,
    ACTIONS(39), 1,
      sym_text,
    STATE(4), 1,
      sym_start_block,
    STATE(12), 1,
      sym_start_tag,
    STATE(13), 1,
      sym_start_component,
    STATE(14), 1,
      sym_start_slot,
    STATE(42), 1,
      sym_self_closing_component,
    STATE(43), 1,
      sym_self_closing_tag,
    STATE(72), 1,
      sym_end_component,
    STATE(38), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(10), 8,
      sym__node,
      sym_tag,
      sym_component,
      sym_slot,
      sym_block,
      sym_expression,
      sym_comment,
      aux_sym_fragment_repeat1,
  [289] = 15,
    ACTIONS(41), 1,
      anon_sym_LT,
    ACTIONS(44), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(50), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    ACTIONS(53), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(56), 1,
      anon_sym_LBRACE_SLASH,
    ACTIONS(58), 1,
      sym_text,
    STATE(5), 1,
      sym_start_block,
    STATE(6), 1,
      sym_start_component,
    STATE(18), 1,
      sym_start_tag,
    STATE(19), 1,
      sym_start_slot,
    STATE(85), 1,
      sym_self_closing_component,
    STATE(86), 1,
      sym_self_closing_tag,
    STATE(83), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(7), 9,
      sym__node,
      sym_tag,
      sym_component,
      sym_slot,
      sym_block,
      sym_expression,
      sym_comment,
      sym_subblock,
      aux_sym_block_repeat1,
  [344] = 15,
    ACTIONS(63), 1,
      anon_sym_LT,
    ACTIONS(66), 1,
      anon_sym_LBRACE,
    ACTIONS(69), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(72), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    ACTIONS(75), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(78), 1,
      sym_text,
    STATE(4), 1,
      sym_start_block,
    STATE(12), 1,
      sym_start_tag,
    STATE(13), 1,
      sym_start_component,
    STATE(14), 1,
      sym_start_slot,
    STATE(42), 1,
      sym_self_closing_component,
    STATE(43), 1,
      sym_self_closing_tag,
    ACTIONS(61), 2,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
    STATE(38), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(8), 8,
      sym__node,
      sym_tag,
      sym_component,
      sym_slot,
      sym_block,
      sym_expression,
      sym_comment,
      aux_sym_fragment_repeat1,
  [399] = 16,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(81), 1,
      anon_sym_LT_SLASH,
    ACTIONS(83), 1,
      sym_text,
    STATE(4), 1,
      sym_start_block,
    STATE(12), 1,
      sym_start_tag,
    STATE(13), 1,
      sym_start_component,
    STATE(14), 1,
      sym_start_slot,
    STATE(42), 1,
      sym_self_closing_component,
    STATE(43), 1,
      sym_self_closing_tag,
    STATE(73), 1,
      sym_end_slot,
    STATE(38), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(8), 8,
      sym__node,
      sym_tag,
      sym_component,
      sym_slot,
      sym_block,
      sym_expression,
      sym_comment,
      aux_sym_fragment_repeat1,
  [456] = 16,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(37), 1,
      anon_sym_LT_SLASH,
    ACTIONS(83), 1,
      sym_text,
    STATE(4), 1,
      sym_start_block,
    STATE(12), 1,
      sym_start_tag,
    STATE(13), 1,
      sym_start_component,
    STATE(14), 1,
      sym_start_slot,
    STATE(42), 1,
      sym_self_closing_component,
    STATE(43), 1,
      sym_self_closing_tag,
    STATE(62), 1,
      sym_end_component,
    STATE(38), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(8), 8,
      sym__node,
      sym_tag,
      sym_component,
      sym_slot,
      sym_block,
      sym_expression,
      sym_comment,
      aux_sym_fragment_repeat1,
  [513] = 16,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(83), 1,
      sym_text,
    ACTIONS(85), 1,
      anon_sym_LT_SLASH,
    STATE(4), 1,
      sym_start_block,
    STATE(12), 1,
      sym_start_tag,
    STATE(13), 1,
      sym_start_component,
    STATE(14), 1,
      sym_start_slot,
    STATE(42), 1,
      sym_self_closing_component,
    STATE(43), 1,
      sym_self_closing_tag,
    STATE(63), 1,
      sym_end_tag,
    STATE(38), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(8), 8,
      sym__node,
      sym_tag,
      sym_component,
      sym_slot,
      sym_block,
      sym_expression,
      sym_comment,
      aux_sym_fragment_repeat1,
  [570] = 16,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(87), 1,
      anon_sym_LT_SLASH,
    ACTIONS(89), 1,
      sym_text,
    STATE(4), 1,
      sym_start_block,
    STATE(12), 1,
      sym_start_tag,
    STATE(13), 1,
      sym_start_component,
    STATE(14), 1,
      sym_start_slot,
    STATE(42), 1,
      sym_self_closing_component,
    STATE(43), 1,
      sym_self_closing_tag,
    STATE(44), 1,
      sym_end_tag,
    STATE(38), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(17), 8,
      sym__node,
      sym_tag,
      sym_component,
      sym_slot,
      sym_block,
      sym_expression,
      sym_comment,
      aux_sym_fragment_repeat1,
  [627] = 16,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(91), 1,
      anon_sym_LT_SLASH,
    ACTIONS(93), 1,
      sym_text,
    STATE(4), 1,
      sym_start_block,
    STATE(12), 1,
      sym_start_tag,
    STATE(13), 1,
      sym_start_component,
    STATE(14), 1,
      sym_start_slot,
    STATE(35), 1,
      sym_end_component,
    STATE(42), 1,
      sym_self_closing_component,
    STATE(43), 1,
      sym_self_closing_tag,
    STATE(38), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(16), 8,
      sym__node,
      sym_tag,
      sym_component,
      sym_slot,
      sym_block,
      sym_expression,
      sym_comment,
      aux_sym_fragment_repeat1,
  [684] = 16,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(95), 1,
      anon_sym_LT_SLASH,
    ACTIONS(97), 1,
      sym_text,
    STATE(4), 1,
      sym_start_block,
    STATE(12), 1,
      sym_start_tag,
    STATE(13), 1,
      sym_start_component,
    STATE(14), 1,
      sym_start_slot,
    STATE(33), 1,
      sym_end_slot,
    STATE(42), 1,
      sym_self_closing_component,
    STATE(43), 1,
      sym_self_closing_tag,
    STATE(38), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(15), 8,
      sym__node,
      sym_tag,
      sym_component,
      sym_slot,
      sym_block,
      sym_expression,
      sym_comment,
      aux_sym_fragment_repeat1,
  [741] = 16,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(83), 1,
      sym_text,
    ACTIONS(95), 1,
      anon_sym_LT_SLASH,
    STATE(4), 1,
      sym_start_block,
    STATE(12), 1,
      sym_start_tag,
    STATE(13), 1,
      sym_start_component,
    STATE(14), 1,
      sym_start_slot,
    STATE(34), 1,
      sym_end_slot,
    STATE(42), 1,
      sym_self_closing_component,
    STATE(43), 1,
      sym_self_closing_tag,
    STATE(38), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(8), 8,
      sym__node,
      sym_tag,
      sym_component,
      sym_slot,
      sym_block,
      sym_expression,
      sym_comment,
      aux_sym_fragment_repeat1,
  [798] = 16,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(83), 1,
      sym_text,
    ACTIONS(91), 1,
      anon_sym_LT_SLASH,
    STATE(4), 1,
      sym_start_block,
    STATE(12), 1,
      sym_start_tag,
    STATE(13), 1,
      sym_start_component,
    STATE(14), 1,
      sym_start_slot,
    STATE(42), 1,
      sym_self_closing_component,
    STATE(43), 1,
      sym_self_closing_tag,
    STATE(54), 1,
      sym_end_component,
    STATE(38), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(8), 8,
      sym__node,
      sym_tag,
      sym_component,
      sym_slot,
      sym_block,
      sym_expression,
      sym_comment,
      aux_sym_fragment_repeat1,
  [855] = 16,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(83), 1,
      sym_text,
    ACTIONS(87), 1,
      anon_sym_LT_SLASH,
    STATE(4), 1,
      sym_start_block,
    STATE(12), 1,
      sym_start_tag,
    STATE(13), 1,
      sym_start_component,
    STATE(14), 1,
      sym_start_slot,
    STATE(42), 1,
      sym_self_closing_component,
    STATE(43), 1,
      sym_self_closing_tag,
    STATE(47), 1,
      sym_end_tag,
    STATE(38), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(8), 8,
      sym__node,
      sym_tag,
      sym_component,
      sym_slot,
      sym_block,
      sym_expression,
      sym_comment,
      aux_sym_fragment_repeat1,
  [912] = 16,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(85), 1,
      anon_sym_LT_SLASH,
    ACTIONS(99), 1,
      sym_text,
    STATE(4), 1,
      sym_start_block,
    STATE(12), 1,
      sym_start_tag,
    STATE(13), 1,
      sym_start_component,
    STATE(14), 1,
      sym_start_slot,
    STATE(42), 1,
      sym_self_closing_component,
    STATE(43), 1,
      sym_self_closing_tag,
    STATE(74), 1,
      sym_end_tag,
    STATE(38), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(11), 8,
      sym__node,
      sym_tag,
      sym_component,
      sym_slot,
      sym_block,
      sym_expression,
      sym_comment,
      aux_sym_fragment_repeat1,
  [969] = 16,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(81), 1,
      anon_sym_LT_SLASH,
    ACTIONS(101), 1,
      sym_text,
    STATE(4), 1,
      sym_start_block,
    STATE(12), 1,
      sym_start_tag,
    STATE(13), 1,
      sym_start_component,
    STATE(14), 1,
      sym_start_slot,
    STATE(42), 1,
      sym_self_closing_component,
    STATE(43), 1,
      sym_self_closing_tag,
    STATE(71), 1,
      sym_end_slot,
    STATE(38), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(9), 8,
      sym__node,
      sym_tag,
      sym_component,
      sym_slot,
      sym_block,
      sym_expression,
      sym_comment,
      aux_sym_fragment_repeat1,
  [1026] = 15,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(83), 1,
      sym_text,
    ACTIONS(103), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_start_block,
    STATE(12), 1,
      sym_start_tag,
    STATE(13), 1,
      sym_start_component,
    STATE(14), 1,
      sym_start_slot,
    STATE(42), 1,
      sym_self_closing_component,
    STATE(43), 1,
      sym_self_closing_tag,
    STATE(38), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(8), 8,
      sym__node,
      sym_tag,
      sym_component,
      sym_slot,
      sym_block,
      sym_expression,
      sym_comment,
      aux_sym_fragment_repeat1,
  [1080] = 6,
    ACTIONS(105), 1,
      anon_sym_GT,
    ACTIONS(107), 1,
      anon_sym_SLASH_GT,
    ACTIONS(109), 1,
      anon_sym_LBRACE,
    ACTIONS(111), 1,
      sym_attribute_name,
    ACTIONS(113), 1,
      sym_directive_name,
    STATE(28), 4,
      sym_expression,
      sym_attribute,
      sym_directive,
      aux_sym_start_tag_repeat1,
  [1102] = 6,
    ACTIONS(109), 1,
      anon_sym_LBRACE,
    ACTIONS(111), 1,
      sym_attribute_name,
    ACTIONS(113), 1,
      sym_directive_name,
    ACTIONS(115), 1,
      anon_sym_GT,
    ACTIONS(117), 1,
      anon_sym_SLASH_GT,
    STATE(24), 4,
      sym_expression,
      sym_attribute,
      sym_directive,
      aux_sym_start_tag_repeat1,
  [1124] = 6,
    ACTIONS(109), 1,
      anon_sym_LBRACE,
    ACTIONS(111), 1,
      sym_attribute_name,
    ACTIONS(113), 1,
      sym_directive_name,
    ACTIONS(115), 1,
      anon_sym_GT,
    ACTIONS(119), 1,
      anon_sym_SLASH_GT,
    STATE(32), 4,
      sym_expression,
      sym_attribute,
      sym_directive,
      aux_sym_start_tag_repeat1,
  [1146] = 6,
    ACTIONS(109), 1,
      anon_sym_LBRACE,
    ACTIONS(111), 1,
      sym_attribute_name,
    ACTIONS(113), 1,
      sym_directive_name,
    ACTIONS(121), 1,
      anon_sym_GT,
    ACTIONS(123), 1,
      anon_sym_SLASH_GT,
    STATE(31), 4,
      sym_expression,
      sym_attribute,
      sym_directive,
      aux_sym_start_tag_repeat1,
  [1168] = 6,
    ACTIONS(105), 1,
      anon_sym_GT,
    ACTIONS(109), 1,
      anon_sym_LBRACE,
    ACTIONS(111), 1,
      sym_attribute_name,
    ACTIONS(113), 1,
      sym_directive_name,
    ACTIONS(125), 1,
      anon_sym_SLASH_GT,
    STATE(26), 4,
      sym_expression,
      sym_attribute,
      sym_directive,
      aux_sym_start_tag_repeat1,
  [1190] = 6,
    ACTIONS(109), 1,
      anon_sym_LBRACE,
    ACTIONS(111), 1,
      sym_attribute_name,
    ACTIONS(113), 1,
      sym_directive_name,
    ACTIONS(127), 1,
      anon_sym_GT,
    ACTIONS(129), 1,
      anon_sym_SLASH_GT,
    STATE(31), 4,
      sym_expression,
      sym_attribute,
      sym_directive,
      aux_sym_start_tag_repeat1,
  [1212] = 2,
    ACTIONS(133), 3,
      anon_sym_LT,
      anon_sym_LBRACE,
      sym_text,
    ACTIONS(131), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_DASH_DASH_RBRACE,
      anon_sym_LBRACE_POUND,
  [1226] = 6,
    ACTIONS(109), 1,
      anon_sym_LBRACE,
    ACTIONS(111), 1,
      sym_attribute_name,
    ACTIONS(113), 1,
      sym_directive_name,
    ACTIONS(127), 1,
      anon_sym_GT,
    ACTIONS(135), 1,
      anon_sym_SLASH_GT,
    STATE(31), 4,
      sym_expression,
      sym_attribute,
      sym_directive,
      aux_sym_start_tag_repeat1,
  [1248] = 2,
    ACTIONS(139), 3,
      anon_sym_LT,
      anon_sym_LBRACE,
      sym_text,
    ACTIONS(137), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_DASH_DASH_GT,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
  [1262] = 5,
    ACTIONS(143), 1,
      anon_sym_else,
    STATE(93), 1,
      sym_subblock_name,
    STATE(101), 1,
      sym_block_name,
    ACTIONS(145), 2,
      anon_sym_elseif,
      anon_sym_match,
    ACTIONS(141), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_for,
      anon_sym_case,
  [1282] = 5,
    ACTIONS(149), 1,
      anon_sym_LBRACE,
    ACTIONS(152), 1,
      sym_attribute_name,
    ACTIONS(155), 1,
      sym_directive_name,
    ACTIONS(147), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(31), 4,
      sym_expression,
      sym_attribute,
      sym_directive,
      aux_sym_start_tag_repeat1,
  [1302] = 6,
    ACTIONS(109), 1,
      anon_sym_LBRACE,
    ACTIONS(111), 1,
      sym_attribute_name,
    ACTIONS(113), 1,
      sym_directive_name,
    ACTIONS(121), 1,
      anon_sym_GT,
    ACTIONS(158), 1,
      anon_sym_SLASH_GT,
    STATE(31), 4,
      sym_expression,
      sym_attribute,
      sym_directive,
      aux_sym_start_tag_repeat1,
  [1324] = 2,
    ACTIONS(162), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(160), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1337] = 2,
    ACTIONS(166), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(164), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1350] = 2,
    ACTIONS(170), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(168), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1363] = 2,
    ACTIONS(174), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(172), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1376] = 5,
    ACTIONS(109), 1,
      anon_sym_LBRACE,
    ACTIONS(111), 1,
      sym_attribute_name,
    ACTIONS(113), 1,
      sym_directive_name,
    ACTIONS(176), 1,
      anon_sym_GT,
    STATE(50), 4,
      sym_expression,
      sym_attribute,
      sym_directive,
      aux_sym_start_tag_repeat1,
  [1395] = 2,
    ACTIONS(180), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(178), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1408] = 2,
    ACTIONS(184), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(182), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1421] = 2,
    ACTIONS(188), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(186), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1434] = 2,
    ACTIONS(192), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(190), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1447] = 2,
    ACTIONS(196), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(194), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1460] = 2,
    ACTIONS(200), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(198), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1473] = 2,
    ACTIONS(204), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(202), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1486] = 2,
    ACTIONS(208), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(206), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1499] = 2,
    ACTIONS(212), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(210), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1512] = 2,
    ACTIONS(216), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(214), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1525] = 2,
    ACTIONS(220), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(218), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1538] = 2,
    ACTIONS(224), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(222), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1551] = 5,
    ACTIONS(109), 1,
      anon_sym_LBRACE,
    ACTIONS(111), 1,
      sym_attribute_name,
    ACTIONS(113), 1,
      sym_directive_name,
    ACTIONS(226), 1,
      anon_sym_GT,
    STATE(31), 4,
      sym_expression,
      sym_attribute,
      sym_directive,
      aux_sym_start_tag_repeat1,
  [1570] = 2,
    ACTIONS(230), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(228), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1583] = 2,
    ACTIONS(234), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(232), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1596] = 2,
    ACTIONS(238), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(236), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1609] = 2,
    ACTIONS(242), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(240), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1622] = 2,
    ACTIONS(246), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(244), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1635] = 2,
    ACTIONS(248), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(250), 5,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1647] = 2,
    ACTIONS(252), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(254), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [1659] = 2,
    ACTIONS(256), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(258), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [1671] = 2,
    ACTIONS(224), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(222), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [1683] = 2,
    ACTIONS(260), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(262), 5,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1695] = 2,
    ACTIONS(264), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(266), 5,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1707] = 2,
    ACTIONS(242), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(240), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [1719] = 2,
    ACTIONS(216), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(214), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [1731] = 2,
    ACTIONS(133), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(131), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [1743] = 2,
    ACTIONS(139), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(137), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [1755] = 2,
    ACTIONS(268), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(270), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [1767] = 2,
    ACTIONS(174), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(172), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [1779] = 2,
    ACTIONS(234), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(232), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [1791] = 2,
    ACTIONS(208), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(206), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [1803] = 2,
    ACTIONS(192), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(190), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [1815] = 2,
    ACTIONS(162), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(160), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [1827] = 2,
    ACTIONS(170), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(168), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [1839] = 2,
    ACTIONS(166), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(164), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [1851] = 2,
    ACTIONS(204), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(202), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [1863] = 2,
    ACTIONS(230), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(228), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [1875] = 2,
    ACTIONS(238), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(236), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [1887] = 2,
    ACTIONS(272), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(274), 5,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1899] = 2,
    ACTIONS(246), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(244), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [1911] = 2,
    ACTIONS(188), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(186), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [1923] = 2,
    ACTIONS(184), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(182), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [1935] = 2,
    ACTIONS(276), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(278), 5,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1947] = 2,
    ACTIONS(280), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(282), 5,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1959] = 2,
    ACTIONS(180), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(178), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [1971] = 2,
    ACTIONS(220), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(218), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [1983] = 2,
    ACTIONS(196), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(194), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [1995] = 2,
    ACTIONS(200), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(198), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [2007] = 2,
    ACTIONS(212), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(210), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [2019] = 2,
    ACTIONS(284), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(286), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [2031] = 5,
    ACTIONS(109), 1,
      anon_sym_LBRACE,
    ACTIONS(288), 1,
      anon_sym_SQUOTE,
    ACTIONS(290), 1,
      anon_sym_DQUOTE,
    ACTIONS(292), 1,
      sym_attribute_value,
    STATE(104), 2,
      sym_expression,
      sym_quoted_attribute_value,
  [2048] = 5,
    ACTIONS(109), 1,
      anon_sym_LBRACE,
    ACTIONS(288), 1,
      anon_sym_SQUOTE,
    ACTIONS(290), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      sym_attribute_value,
    STATE(97), 2,
      sym_expression,
      sym_quoted_attribute_value,
  [2065] = 2,
    ACTIONS(298), 1,
      anon_sym_EQ,
    ACTIONS(296), 5,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
      sym_directive_name,
  [2076] = 2,
    ACTIONS(302), 1,
      anon_sym_EQ,
    ACTIONS(300), 5,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
      sym_directive_name,
  [2087] = 5,
    ACTIONS(304), 1,
      anon_sym_LBRACE,
    ACTIONS(306), 1,
      anon_sym_RBRACE,
    ACTIONS(308), 1,
      aux_sym__expression_value_token1,
    STATE(138), 1,
      sym_expression_value,
    STATE(157), 1,
      sym__expression_value,
  [2103] = 5,
    ACTIONS(310), 1,
      anon_sym_LBRACE,
    ACTIONS(312), 1,
      anon_sym_RBRACE,
    ACTIONS(314), 1,
      aux_sym__expression_value_token1,
    STATE(103), 1,
      aux_sym_expression_repeat1,
    STATE(132), 1,
      sym__expression_value,
  [2119] = 1,
    ACTIONS(182), 5,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
      sym_directive_name,
  [2127] = 1,
    ACTIONS(316), 5,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
      sym_directive_name,
  [2135] = 1,
    ACTIONS(318), 5,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
      sym_directive_name,
  [2143] = 2,
    STATE(153), 1,
      sym_block_name,
    ACTIONS(320), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_for,
      anon_sym_case,
  [2153] = 1,
    ACTIONS(322), 5,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
      sym_directive_name,
  [2161] = 1,
    ACTIONS(172), 5,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
      sym_directive_name,
  [2169] = 5,
    ACTIONS(304), 1,
      anon_sym_LBRACE,
    ACTIONS(308), 1,
      aux_sym__expression_value_token1,
    ACTIONS(324), 1,
      anon_sym_RBRACE,
    STATE(155), 1,
      sym_expression_value,
    STATE(157), 1,
      sym__expression_value,
  [2185] = 5,
    ACTIONS(310), 1,
      anon_sym_LBRACE,
    ACTIONS(314), 1,
      aux_sym__expression_value_token1,
    ACTIONS(326), 1,
      anon_sym_RBRACE,
    STATE(106), 1,
      aux_sym_expression_repeat1,
    STATE(132), 1,
      sym__expression_value,
  [2201] = 5,
    ACTIONS(310), 1,
      anon_sym_LBRACE,
    ACTIONS(314), 1,
      aux_sym__expression_value_token1,
    ACTIONS(328), 1,
      anon_sym_RBRACE,
    STATE(107), 1,
      aux_sym_expression_repeat1,
    STATE(132), 1,
      sym__expression_value,
  [2217] = 1,
    ACTIONS(330), 5,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
      sym_directive_name,
  [2225] = 2,
    STATE(145), 1,
      sym_block_name,
    ACTIONS(320), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_for,
      anon_sym_case,
  [2235] = 5,
    ACTIONS(310), 1,
      anon_sym_LBRACE,
    ACTIONS(314), 1,
      aux_sym__expression_value_token1,
    ACTIONS(332), 1,
      anon_sym_RBRACE,
    STATE(107), 1,
      aux_sym_expression_repeat1,
    STATE(132), 1,
      sym__expression_value,
  [2251] = 5,
    ACTIONS(334), 1,
      anon_sym_LBRACE,
    ACTIONS(337), 1,
      anon_sym_RBRACE,
    ACTIONS(339), 1,
      aux_sym__expression_value_token1,
    STATE(107), 1,
      aux_sym_expression_repeat1,
    STATE(132), 1,
      sym__expression_value,
  [2267] = 2,
    STATE(101), 1,
      sym_block_name,
    ACTIONS(141), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_for,
      anon_sym_case,
  [2277] = 5,
    ACTIONS(310), 1,
      anon_sym_LBRACE,
    ACTIONS(314), 1,
      aux_sym__expression_value_token1,
    ACTIONS(342), 1,
      anon_sym_RBRACE,
    STATE(107), 1,
      aux_sym_expression_repeat1,
    STATE(132), 1,
      sym__expression_value,
  [2293] = 5,
    ACTIONS(310), 1,
      anon_sym_LBRACE,
    ACTIONS(314), 1,
      aux_sym__expression_value_token1,
    ACTIONS(344), 1,
      anon_sym_RBRACE,
    STATE(109), 1,
      aux_sym_expression_repeat1,
    STATE(132), 1,
      sym__expression_value,
  [2309] = 4,
    ACTIONS(304), 1,
      anon_sym_LBRACE,
    ACTIONS(346), 1,
      anon_sym_RBRACE,
    ACTIONS(348), 1,
      aux_sym__expression_value_token1,
    STATE(149), 1,
      sym__expression_value,
  [2322] = 4,
    ACTIONS(304), 1,
      anon_sym_LBRACE,
    ACTIONS(350), 1,
      anon_sym_RBRACE,
    ACTIONS(352), 1,
      aux_sym__expression_value_token1,
    STATE(162), 1,
      sym__expression_value,
  [2335] = 4,
    ACTIONS(354), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(356), 1,
      aux_sym__public_comment_token1,
    STATE(129), 1,
      aux_sym__public_comment_repeat1,
    STATE(143), 1,
      sym__public_comment,
  [2348] = 4,
    ACTIONS(354), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(356), 1,
      aux_sym__public_comment_token1,
    STATE(118), 1,
      aux_sym__public_comment_repeat1,
    STATE(140), 1,
      sym__public_comment,
  [2361] = 4,
    ACTIONS(358), 1,
      aux_sym__public_comment_token1,
    ACTIONS(360), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    STATE(125), 1,
      aux_sym__public_comment_repeat1,
    STATE(146), 1,
      sym__private_comment,
  [2374] = 4,
    ACTIONS(358), 1,
      aux_sym__public_comment_token1,
    ACTIONS(360), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    STATE(130), 1,
      aux_sym__public_comment_repeat1,
    STATE(141), 1,
      sym__private_comment,
  [2387] = 2,
    STATE(148), 1,
      sym__tag_or_component_name,
    ACTIONS(362), 2,
      sym_tag_name,
      sym_component_name,
  [2395] = 3,
    ACTIONS(356), 1,
      aux_sym__public_comment_token1,
    ACTIONS(364), 1,
      anon_sym_DASH_DASH_GT,
    STATE(123), 1,
      aux_sym__public_comment_repeat1,
  [2405] = 3,
    ACTIONS(366), 1,
      aux_sym__public_comment_token1,
    ACTIONS(369), 1,
      anon_sym_DASH_DASH_RBRACE,
    STATE(119), 1,
      aux_sym__public_comment_repeat1,
  [2415] = 2,
    ACTIONS(373), 1,
      aux_sym__expression_value_token1,
    ACTIONS(371), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2423] = 2,
    STATE(139), 1,
      sym__tag_or_component_name,
    ACTIONS(375), 2,
      sym_tag_name,
      sym_component_name,
  [2431] = 2,
    STATE(150), 1,
      sym__tag_or_component_name,
    ACTIONS(377), 2,
      sym_tag_name,
      sym_component_name,
  [2439] = 3,
    ACTIONS(369), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(379), 1,
      aux_sym__public_comment_token1,
    STATE(123), 1,
      aux_sym__public_comment_repeat1,
  [2449] = 3,
    ACTIONS(382), 1,
      sym_tag_name,
    ACTIONS(384), 1,
      sym_slot_name,
    ACTIONS(386), 1,
      sym_component_name,
  [2459] = 3,
    ACTIONS(358), 1,
      aux_sym__public_comment_token1,
    ACTIONS(388), 1,
      anon_sym_DASH_DASH_RBRACE,
    STATE(119), 1,
      aux_sym__public_comment_repeat1,
  [2469] = 2,
    ACTIONS(392), 1,
      aux_sym__expression_value_token1,
    ACTIONS(390), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2477] = 2,
    ACTIONS(396), 1,
      aux_sym__expression_value_token1,
    ACTIONS(394), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2485] = 3,
    ACTIONS(384), 1,
      sym_slot_name,
    ACTIONS(398), 1,
      sym_tag_name,
    ACTIONS(400), 1,
      sym_component_name,
  [2495] = 3,
    ACTIONS(356), 1,
      aux_sym__public_comment_token1,
    ACTIONS(402), 1,
      anon_sym_DASH_DASH_GT,
    STATE(123), 1,
      aux_sym__public_comment_repeat1,
  [2505] = 3,
    ACTIONS(358), 1,
      aux_sym__public_comment_token1,
    ACTIONS(404), 1,
      anon_sym_DASH_DASH_RBRACE,
    STATE(119), 1,
      aux_sym__public_comment_repeat1,
  [2515] = 2,
    STATE(154), 1,
      sym__tag_or_component_name,
    ACTIONS(406), 2,
      sym_tag_name,
      sym_component_name,
  [2523] = 2,
    ACTIONS(410), 1,
      aux_sym__expression_value_token1,
    ACTIONS(408), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2531] = 2,
    ACTIONS(414), 1,
      aux_sym__expression_value_token1,
    ACTIONS(412), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2539] = 1,
    ACTIONS(416), 2,
      aux_sym__public_comment_token1,
      anon_sym_DASH_DASH_RBRACE,
  [2544] = 2,
    ACTIONS(418), 1,
      anon_sym_DQUOTE,
    ACTIONS(420), 1,
      aux_sym_quoted_attribute_value_token2,
  [2551] = 2,
    ACTIONS(418), 1,
      anon_sym_SQUOTE,
    ACTIONS(422), 1,
      aux_sym_quoted_attribute_value_token1,
  [2558] = 1,
    ACTIONS(416), 2,
      aux_sym__public_comment_token1,
      anon_sym_DASH_DASH_GT,
  [2563] = 1,
    ACTIONS(424), 1,
      anon_sym_RBRACE,
  [2567] = 1,
    ACTIONS(426), 1,
      anon_sym_GT,
  [2571] = 1,
    ACTIONS(428), 1,
      anon_sym_DASH_DASH_GT,
  [2575] = 1,
    ACTIONS(430), 1,
      anon_sym_DASH_DASH_RBRACE,
  [2579] = 1,
    ACTIONS(396), 1,
      anon_sym_RBRACE,
  [2583] = 1,
    ACTIONS(432), 1,
      anon_sym_DASH_DASH_GT,
  [2587] = 1,
    ACTIONS(434), 1,
      ts_builtin_sym_end,
  [2591] = 1,
    ACTIONS(436), 1,
      anon_sym_RBRACE,
  [2595] = 1,
    ACTIONS(438), 1,
      anon_sym_DASH_DASH_RBRACE,
  [2599] = 1,
    ACTIONS(440), 1,
      anon_sym_GT,
  [2603] = 1,
    ACTIONS(442), 1,
      anon_sym_GT,
  [2607] = 1,
    ACTIONS(444), 1,
      anon_sym_RBRACE,
  [2611] = 1,
    ACTIONS(446), 1,
      anon_sym_GT,
  [2615] = 1,
    ACTIONS(448), 1,
      sym_slot_name,
  [2619] = 1,
    ACTIONS(450), 1,
      anon_sym_GT,
  [2623] = 1,
    ACTIONS(452), 1,
      anon_sym_RBRACE,
  [2627] = 1,
    ACTIONS(454), 1,
      anon_sym_GT,
  [2631] = 1,
    ACTIONS(456), 1,
      anon_sym_RBRACE,
  [2635] = 1,
    ACTIONS(373), 1,
      anon_sym_RBRACE,
  [2639] = 1,
    ACTIONS(458), 1,
      anon_sym_RBRACE,
  [2643] = 1,
    ACTIONS(460), 1,
      anon_sym_SQUOTE,
  [2647] = 1,
    ACTIONS(460), 1,
      anon_sym_DQUOTE,
  [2651] = 1,
    ACTIONS(414), 1,
      anon_sym_RBRACE,
  [2655] = 1,
    ACTIONS(462), 1,
      sym_slot_name,
  [2659] = 1,
    ACTIONS(464), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 58,
  [SMALL_STATE(4)] = 116,
  [SMALL_STATE(5)] = 174,
  [SMALL_STATE(6)] = 232,
  [SMALL_STATE(7)] = 289,
  [SMALL_STATE(8)] = 344,
  [SMALL_STATE(9)] = 399,
  [SMALL_STATE(10)] = 456,
  [SMALL_STATE(11)] = 513,
  [SMALL_STATE(12)] = 570,
  [SMALL_STATE(13)] = 627,
  [SMALL_STATE(14)] = 684,
  [SMALL_STATE(15)] = 741,
  [SMALL_STATE(16)] = 798,
  [SMALL_STATE(17)] = 855,
  [SMALL_STATE(18)] = 912,
  [SMALL_STATE(19)] = 969,
  [SMALL_STATE(20)] = 1026,
  [SMALL_STATE(21)] = 1080,
  [SMALL_STATE(22)] = 1102,
  [SMALL_STATE(23)] = 1124,
  [SMALL_STATE(24)] = 1146,
  [SMALL_STATE(25)] = 1168,
  [SMALL_STATE(26)] = 1190,
  [SMALL_STATE(27)] = 1212,
  [SMALL_STATE(28)] = 1226,
  [SMALL_STATE(29)] = 1248,
  [SMALL_STATE(30)] = 1262,
  [SMALL_STATE(31)] = 1282,
  [SMALL_STATE(32)] = 1302,
  [SMALL_STATE(33)] = 1324,
  [SMALL_STATE(34)] = 1337,
  [SMALL_STATE(35)] = 1350,
  [SMALL_STATE(36)] = 1363,
  [SMALL_STATE(37)] = 1376,
  [SMALL_STATE(38)] = 1395,
  [SMALL_STATE(39)] = 1408,
  [SMALL_STATE(40)] = 1421,
  [SMALL_STATE(41)] = 1434,
  [SMALL_STATE(42)] = 1447,
  [SMALL_STATE(43)] = 1460,
  [SMALL_STATE(44)] = 1473,
  [SMALL_STATE(45)] = 1486,
  [SMALL_STATE(46)] = 1499,
  [SMALL_STATE(47)] = 1512,
  [SMALL_STATE(48)] = 1525,
  [SMALL_STATE(49)] = 1538,
  [SMALL_STATE(50)] = 1551,
  [SMALL_STATE(51)] = 1570,
  [SMALL_STATE(52)] = 1583,
  [SMALL_STATE(53)] = 1596,
  [SMALL_STATE(54)] = 1609,
  [SMALL_STATE(55)] = 1622,
  [SMALL_STATE(56)] = 1635,
  [SMALL_STATE(57)] = 1647,
  [SMALL_STATE(58)] = 1659,
  [SMALL_STATE(59)] = 1671,
  [SMALL_STATE(60)] = 1683,
  [SMALL_STATE(61)] = 1695,
  [SMALL_STATE(62)] = 1707,
  [SMALL_STATE(63)] = 1719,
  [SMALL_STATE(64)] = 1731,
  [SMALL_STATE(65)] = 1743,
  [SMALL_STATE(66)] = 1755,
  [SMALL_STATE(67)] = 1767,
  [SMALL_STATE(68)] = 1779,
  [SMALL_STATE(69)] = 1791,
  [SMALL_STATE(70)] = 1803,
  [SMALL_STATE(71)] = 1815,
  [SMALL_STATE(72)] = 1827,
  [SMALL_STATE(73)] = 1839,
  [SMALL_STATE(74)] = 1851,
  [SMALL_STATE(75)] = 1863,
  [SMALL_STATE(76)] = 1875,
  [SMALL_STATE(77)] = 1887,
  [SMALL_STATE(78)] = 1899,
  [SMALL_STATE(79)] = 1911,
  [SMALL_STATE(80)] = 1923,
  [SMALL_STATE(81)] = 1935,
  [SMALL_STATE(82)] = 1947,
  [SMALL_STATE(83)] = 1959,
  [SMALL_STATE(84)] = 1971,
  [SMALL_STATE(85)] = 1983,
  [SMALL_STATE(86)] = 1995,
  [SMALL_STATE(87)] = 2007,
  [SMALL_STATE(88)] = 2019,
  [SMALL_STATE(89)] = 2031,
  [SMALL_STATE(90)] = 2048,
  [SMALL_STATE(91)] = 2065,
  [SMALL_STATE(92)] = 2076,
  [SMALL_STATE(93)] = 2087,
  [SMALL_STATE(94)] = 2103,
  [SMALL_STATE(95)] = 2119,
  [SMALL_STATE(96)] = 2127,
  [SMALL_STATE(97)] = 2135,
  [SMALL_STATE(98)] = 2143,
  [SMALL_STATE(99)] = 2153,
  [SMALL_STATE(100)] = 2161,
  [SMALL_STATE(101)] = 2169,
  [SMALL_STATE(102)] = 2185,
  [SMALL_STATE(103)] = 2201,
  [SMALL_STATE(104)] = 2217,
  [SMALL_STATE(105)] = 2225,
  [SMALL_STATE(106)] = 2235,
  [SMALL_STATE(107)] = 2251,
  [SMALL_STATE(108)] = 2267,
  [SMALL_STATE(109)] = 2277,
  [SMALL_STATE(110)] = 2293,
  [SMALL_STATE(111)] = 2309,
  [SMALL_STATE(112)] = 2322,
  [SMALL_STATE(113)] = 2335,
  [SMALL_STATE(114)] = 2348,
  [SMALL_STATE(115)] = 2361,
  [SMALL_STATE(116)] = 2374,
  [SMALL_STATE(117)] = 2387,
  [SMALL_STATE(118)] = 2395,
  [SMALL_STATE(119)] = 2405,
  [SMALL_STATE(120)] = 2415,
  [SMALL_STATE(121)] = 2423,
  [SMALL_STATE(122)] = 2431,
  [SMALL_STATE(123)] = 2439,
  [SMALL_STATE(124)] = 2449,
  [SMALL_STATE(125)] = 2459,
  [SMALL_STATE(126)] = 2469,
  [SMALL_STATE(127)] = 2477,
  [SMALL_STATE(128)] = 2485,
  [SMALL_STATE(129)] = 2495,
  [SMALL_STATE(130)] = 2505,
  [SMALL_STATE(131)] = 2515,
  [SMALL_STATE(132)] = 2523,
  [SMALL_STATE(133)] = 2531,
  [SMALL_STATE(134)] = 2539,
  [SMALL_STATE(135)] = 2544,
  [SMALL_STATE(136)] = 2551,
  [SMALL_STATE(137)] = 2558,
  [SMALL_STATE(138)] = 2563,
  [SMALL_STATE(139)] = 2567,
  [SMALL_STATE(140)] = 2571,
  [SMALL_STATE(141)] = 2575,
  [SMALL_STATE(142)] = 2579,
  [SMALL_STATE(143)] = 2583,
  [SMALL_STATE(144)] = 2587,
  [SMALL_STATE(145)] = 2591,
  [SMALL_STATE(146)] = 2595,
  [SMALL_STATE(147)] = 2599,
  [SMALL_STATE(148)] = 2603,
  [SMALL_STATE(149)] = 2607,
  [SMALL_STATE(150)] = 2611,
  [SMALL_STATE(151)] = 2615,
  [SMALL_STATE(152)] = 2619,
  [SMALL_STATE(153)] = 2623,
  [SMALL_STATE(154)] = 2627,
  [SMALL_STATE(155)] = 2631,
  [SMALL_STATE(156)] = 2635,
  [SMALL_STATE(157)] = 2639,
  [SMALL_STATE(158)] = 2643,
  [SMALL_STATE(159)] = 2647,
  [SMALL_STATE(160)] = 2651,
  [SMALL_STATE(161)] = 2655,
  [SMALL_STATE(162)] = 2659,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(124),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(102),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(114),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(116),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(30),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(7),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(128),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(94),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(113),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(115),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(108),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(8),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment, 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__private_comment, 3, .production_id = 2),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__private_comment, 3, .production_id = 2),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__public_comment, 3, .production_id = 2),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__public_comment, 3, .production_id = 2),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(110),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(92),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(91),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slot, 2),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_slot, 2),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slot, 3),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_slot, 3),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 2),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 2),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3, .production_id = 1),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3, .production_id = 1),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 2),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 4),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 4),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 1),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 1),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 1),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 1),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 3),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 3),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_component, 4),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_component, 4),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_tag, 3),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_tag, 3),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_component, 3),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_component, 3),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_slot, 3),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_slot, 3),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_component, 3),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_component, 3),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_block, 3),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_block, 3),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 3),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 3),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_slot, 4),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_slot, 4),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_block, 4),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_block, 4),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subblock, 4),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subblock, 4),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_slot, 3),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_slot, 3),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_component, 3),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_component, 3),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_block, 3),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_block, 3),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 4),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 4),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_component, 4),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_component, 4),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 3),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 3),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subblock, 3),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subblock, 3),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [334] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(112),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2),
  [339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(132),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [366] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__public_comment_repeat1, 2), SHIFT_REPEAT(134),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__public_comment_repeat1, 2),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_value, 2),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_value, 2),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [379] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__public_comment_repeat1, 2), SHIFT_REPEAT(137),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subblock_name, 1),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subblock_name, 1),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_name, 1),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_name, 1),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 1),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 1),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_value, 3),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_value, 3),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__public_comment_repeat1, 1),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [434] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_value, 1),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_surface(void) {
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
