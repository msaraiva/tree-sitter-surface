#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 191
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 95
#define ALIAS_COUNT 1
#define TOKEN_COUNT 55
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 3

enum {
  anon_sym_LT = 1,
  anon_sym_GT = 2,
  anon_sym_LT_SLASH = 3,
  anon_sym_SLASH_GT = 4,
  anon_sym_LT_POUND = 5,
  anon_sym_LT_SLASH_POUND = 6,
  anon_sym_LBRACE = 7,
  anon_sym_RBRACE = 8,
  aux_sym__expression_value_token1 = 9,
  sym__code = 10,
  anon_sym_LT_BANG_DASH_DASH = 11,
  aux_sym__public_comment_token1 = 12,
  anon_sym_DASH_DASH_GT = 13,
  anon_sym_LBRACE_BANG_DASH_DASH = 14,
  anon_sym_DASH_DASH_RBRACE = 15,
  anon_sym_LBRACE_POUND = 16,
  anon_sym_if = 17,
  anon_sym_unless = 18,
  anon_sym_for = 19,
  anon_sym_case = 20,
  anon_sym_LBRACE_SLASH = 21,
  anon_sym_else = 22,
  anon_sym_elseif = 23,
  anon_sym_match = 24,
  anon_sym_EQ = 25,
  anon_sym_COLON = 26,
  anon_sym_SQUOTE = 27,
  aux_sym_quoted_attribute_value_token1 = 28,
  anon_sym_DQUOTE = 29,
  aux_sym_quoted_attribute_value_token2 = 30,
  sym_attribute_value = 31,
  sym_tag_name = 32,
  anon_sym_DOT = 33,
  sym__module = 34,
  sym__function = 35,
  sym_attribute_name = 36,
  anon_sym_show = 37,
  anon_sym_let = 38,
  anon_sym_args = 39,
  anon_sym_values = 40,
  anon_sym_hook = 41,
  anon_sym_on_DASHclick = 42,
  anon_sym_on_DASHcapture_DASHclick = 43,
  anon_sym_on_DASHblur = 44,
  anon_sym_on_DASHfocus = 45,
  anon_sym_on_DASHchange = 46,
  anon_sym_on_DASHsubmit = 47,
  anon_sym_on_DASHkeydown = 48,
  anon_sym_on_DASHkeyup = 49,
  anon_sym_on_DASHwindow_DASHfocus = 50,
  anon_sym_on_DASHwindow_DASHblur = 51,
  anon_sym_on_DASHwindow_DASHkeydown = 52,
  anon_sym_on_DASHwindow_DASHkeyup = 53,
  sym_text = 54,
  sym_fragment = 55,
  sym__node = 56,
  sym_tag = 57,
  sym_component = 58,
  sym_block = 59,
  sym_start_tag = 60,
  sym_end_tag = 61,
  sym_self_closing_tag = 62,
  sym_start_component = 63,
  sym_end_component = 64,
  sym_self_closing_component = 65,
  sym_start_function_component = 66,
  sym_end_function_component = 67,
  sym_self_closing_function_component = 68,
  sym_start_macro_component = 69,
  sym_end_macro_component = 70,
  sym_expression = 71,
  sym__expression_value = 72,
  sym_expression_value = 73,
  sym_comment = 74,
  sym__public_comment = 75,
  sym__private_comment = 76,
  sym_start_block = 77,
  sym_block_name = 78,
  sym_end_block = 79,
  sym_subblock = 80,
  sym_subblock_name = 81,
  sym_attribute = 82,
  sym_directive = 83,
  sym_quoted_attribute_value = 84,
  sym_component_name = 85,
  sym_function_component_name = 86,
  sym_macro_component_name = 87,
  sym_directive_name = 88,
  aux_sym_fragment_repeat1 = 89,
  aux_sym_block_repeat1 = 90,
  aux_sym_start_tag_repeat1 = 91,
  aux_sym_expression_repeat1 = 92,
  aux_sym_expression_value_repeat1 = 93,
  aux_sym__public_comment_repeat1 = 94,
  anon_alias_sym_comment = 95,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LT_SLASH] = "</",
  [anon_sym_SLASH_GT] = "/>",
  [anon_sym_LT_POUND] = "<#",
  [anon_sym_LT_SLASH_POUND] = "</#",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [aux_sym__expression_value_token1] = "_expression_value_token1",
  [sym__code] = "_code",
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
  [anon_sym_COLON] = ":",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_quoted_attribute_value_token1] = "attribute_value",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_quoted_attribute_value_token2] = "attribute_value",
  [sym_attribute_value] = "attribute_value",
  [sym_tag_name] = "tag_name",
  [anon_sym_DOT] = ".",
  [sym__module] = "_module",
  [sym__function] = "_function",
  [sym_attribute_name] = "attribute_name",
  [anon_sym_show] = "show",
  [anon_sym_let] = "let",
  [anon_sym_args] = "args",
  [anon_sym_values] = "values",
  [anon_sym_hook] = "hook",
  [anon_sym_on_DASHclick] = "on-click",
  [anon_sym_on_DASHcapture_DASHclick] = "on-capture-click",
  [anon_sym_on_DASHblur] = "on-blur",
  [anon_sym_on_DASHfocus] = "on-focus",
  [anon_sym_on_DASHchange] = "on-change",
  [anon_sym_on_DASHsubmit] = "on-submit",
  [anon_sym_on_DASHkeydown] = "on-keydown",
  [anon_sym_on_DASHkeyup] = "on-keyup",
  [anon_sym_on_DASHwindow_DASHfocus] = "on-window-focus",
  [anon_sym_on_DASHwindow_DASHblur] = "on-window-blur",
  [anon_sym_on_DASHwindow_DASHkeydown] = "on-window-keydown",
  [anon_sym_on_DASHwindow_DASHkeyup] = "on-window-keyup",
  [sym_text] = "text",
  [sym_fragment] = "fragment",
  [sym__node] = "_node",
  [sym_tag] = "tag",
  [sym_component] = "component",
  [sym_block] = "block",
  [sym_start_tag] = "start_tag",
  [sym_end_tag] = "end_tag",
  [sym_self_closing_tag] = "self_closing_tag",
  [sym_start_component] = "start_component",
  [sym_end_component] = "end_component",
  [sym_self_closing_component] = "self_closing_component",
  [sym_start_function_component] = "start_function_component",
  [sym_end_function_component] = "end_function_component",
  [sym_self_closing_function_component] = "self_closing_function_component",
  [sym_start_macro_component] = "start_macro_component",
  [sym_end_macro_component] = "end_macro_component",
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
  [sym_component_name] = "component_name",
  [sym_function_component_name] = "function_component_name",
  [sym_macro_component_name] = "macro_component_name",
  [sym_directive_name] = "directive_name",
  [aux_sym_fragment_repeat1] = "fragment_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_start_tag_repeat1] = "start_tag_repeat1",
  [aux_sym_expression_repeat1] = "expression_repeat1",
  [aux_sym_expression_value_repeat1] = "expression_value_repeat1",
  [aux_sym__public_comment_repeat1] = "_public_comment_repeat1",
  [anon_alias_sym_comment] = "comment",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_SLASH] = anon_sym_LT_SLASH,
  [anon_sym_SLASH_GT] = anon_sym_SLASH_GT,
  [anon_sym_LT_POUND] = anon_sym_LT_POUND,
  [anon_sym_LT_SLASH_POUND] = anon_sym_LT_SLASH_POUND,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [aux_sym__expression_value_token1] = aux_sym__expression_value_token1,
  [sym__code] = sym__code,
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
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_quoted_attribute_value_token1] = sym_attribute_value,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_quoted_attribute_value_token2] = sym_attribute_value,
  [sym_attribute_value] = sym_attribute_value,
  [sym_tag_name] = sym_tag_name,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym__module] = sym__module,
  [sym__function] = sym__function,
  [sym_attribute_name] = sym_attribute_name,
  [anon_sym_show] = anon_sym_show,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_args] = anon_sym_args,
  [anon_sym_values] = anon_sym_values,
  [anon_sym_hook] = anon_sym_hook,
  [anon_sym_on_DASHclick] = anon_sym_on_DASHclick,
  [anon_sym_on_DASHcapture_DASHclick] = anon_sym_on_DASHcapture_DASHclick,
  [anon_sym_on_DASHblur] = anon_sym_on_DASHblur,
  [anon_sym_on_DASHfocus] = anon_sym_on_DASHfocus,
  [anon_sym_on_DASHchange] = anon_sym_on_DASHchange,
  [anon_sym_on_DASHsubmit] = anon_sym_on_DASHsubmit,
  [anon_sym_on_DASHkeydown] = anon_sym_on_DASHkeydown,
  [anon_sym_on_DASHkeyup] = anon_sym_on_DASHkeyup,
  [anon_sym_on_DASHwindow_DASHfocus] = anon_sym_on_DASHwindow_DASHfocus,
  [anon_sym_on_DASHwindow_DASHblur] = anon_sym_on_DASHwindow_DASHblur,
  [anon_sym_on_DASHwindow_DASHkeydown] = anon_sym_on_DASHwindow_DASHkeydown,
  [anon_sym_on_DASHwindow_DASHkeyup] = anon_sym_on_DASHwindow_DASHkeyup,
  [sym_text] = sym_text,
  [sym_fragment] = sym_fragment,
  [sym__node] = sym__node,
  [sym_tag] = sym_tag,
  [sym_component] = sym_component,
  [sym_block] = sym_block,
  [sym_start_tag] = sym_start_tag,
  [sym_end_tag] = sym_end_tag,
  [sym_self_closing_tag] = sym_self_closing_tag,
  [sym_start_component] = sym_start_component,
  [sym_end_component] = sym_end_component,
  [sym_self_closing_component] = sym_self_closing_component,
  [sym_start_function_component] = sym_start_function_component,
  [sym_end_function_component] = sym_end_function_component,
  [sym_self_closing_function_component] = sym_self_closing_function_component,
  [sym_start_macro_component] = sym_start_macro_component,
  [sym_end_macro_component] = sym_end_macro_component,
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
  [sym_component_name] = sym_component_name,
  [sym_function_component_name] = sym_function_component_name,
  [sym_macro_component_name] = sym_macro_component_name,
  [sym_directive_name] = sym_directive_name,
  [aux_sym_fragment_repeat1] = aux_sym_fragment_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_start_tag_repeat1] = aux_sym_start_tag_repeat1,
  [aux_sym_expression_repeat1] = aux_sym_expression_repeat1,
  [aux_sym_expression_value_repeat1] = aux_sym_expression_value_repeat1,
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
  [anon_sym_LT_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASH_POUND] = {
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
  [sym__code] = {
    .visible = false,
    .named = true,
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
  [anon_sym_COLON] = {
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
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym__module] = {
    .visible = false,
    .named = true,
  },
  [sym__function] = {
    .visible = false,
    .named = true,
  },
  [sym_attribute_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_show] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_args] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_values] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hook] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_on_DASHclick] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_on_DASHcapture_DASHclick] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_on_DASHblur] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_on_DASHfocus] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_on_DASHchange] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_on_DASHsubmit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_on_DASHkeydown] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_on_DASHkeyup] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_on_DASHwindow_DASHfocus] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_on_DASHwindow_DASHblur] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_on_DASHwindow_DASHkeydown] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_on_DASHwindow_DASHkeyup] = {
    .visible = true,
    .named = false,
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
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_end_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_self_closing_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_start_component] = {
    .visible = true,
    .named = true,
  },
  [sym_end_component] = {
    .visible = true,
    .named = true,
  },
  [sym_self_closing_component] = {
    .visible = true,
    .named = true,
  },
  [sym_start_function_component] = {
    .visible = true,
    .named = true,
  },
  [sym_end_function_component] = {
    .visible = true,
    .named = true,
  },
  [sym_self_closing_function_component] = {
    .visible = true,
    .named = true,
  },
  [sym_start_macro_component] = {
    .visible = true,
    .named = true,
  },
  [sym_end_macro_component] = {
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
  [sym_component_name] = {
    .visible = true,
    .named = true,
  },
  [sym_function_component_name] = {
    .visible = true,
    .named = true,
  },
  [sym_macro_component_name] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_name] = {
    .visible = true,
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
  [aux_sym_expression_value_repeat1] = {
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
  [7] = 6,
  [8] = 8,
  [9] = 9,
  [10] = 9,
  [11] = 8,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 12,
  [16] = 14,
  [17] = 13,
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
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 30,
  [33] = 29,
  [34] = 34,
  [35] = 26,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 28,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 27,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 31,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 52,
  [63] = 41,
  [64] = 42,
  [65] = 46,
  [66] = 54,
  [67] = 37,
  [68] = 68,
  [69] = 45,
  [70] = 36,
  [71] = 39,
  [72] = 72,
  [73] = 73,
  [74] = 34,
  [75] = 56,
  [76] = 38,
  [77] = 77,
  [78] = 25,
  [79] = 79,
  [80] = 47,
  [81] = 50,
  [82] = 40,
  [83] = 83,
  [84] = 84,
  [85] = 59,
  [86] = 22,
  [87] = 23,
  [88] = 58,
  [89] = 48,
  [90] = 90,
  [91] = 43,
  [92] = 55,
  [93] = 93,
  [94] = 94,
  [95] = 53,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 100,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 100,
  [108] = 58,
  [109] = 34,
  [110] = 110,
  [111] = 106,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 106,
  [116] = 116,
  [117] = 102,
  [118] = 118,
  [119] = 105,
  [120] = 120,
  [121] = 121,
  [122] = 121,
  [123] = 123,
  [124] = 123,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 127,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 135,
  [137] = 137,
  [138] = 138,
  [139] = 134,
  [140] = 140,
  [141] = 129,
  [142] = 133,
  [143] = 132,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 147,
  [149] = 146,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 144,
  [155] = 155,
  [156] = 150,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 158,
  [168] = 168,
  [169] = 169,
  [170] = 140,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 166,
  [175] = 175,
  [176] = 160,
  [177] = 172,
  [178] = 168,
  [179] = 159,
  [180] = 165,
  [181] = 181,
  [182] = 175,
  [183] = 183,
  [184] = 184,
  [185] = 164,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 186,
  [190] = 131,
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

static inline bool sym__module_character_set_1(int32_t c) {
  return (c < '\''
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c >= ' ' && c <= '"')))
    : (c <= '\'' || (c < '{'
      ? (c < '<'
        ? (c >= '-' && c <= '/')
        : c <= '>')
      : (c <= '{' || c == '}'))));
}

static inline bool sym_attribute_name_character_set_1(int32_t c) {
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

static inline bool sym_attribute_name_character_set_2(int32_t c) {
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(130);
      if (lookahead == '"') ADVANCE(181);
      if (lookahead == '\'') ADVANCE(178);
      if (lookahead == '-') ADVANCE(191);
      if (lookahead == '.') ADVANCE(187);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == ':') ADVANCE(177);
      if (lookahead == '<') ADVANCE(132);
      if (lookahead == '=') ADVANCE(176);
      if (lookahead == '>') ADVANCE(134);
      if (lookahead == 'a') ADVANCE(215);
      if (lookahead == 'c') ADVANCE(192);
      if (lookahead == 'e') ADVANCE(209);
      if (lookahead == 'f') ADVANCE(213);
      if (lookahead == 'h') ADVANCE(214);
      if (lookahead == 'i') ADVANCE(201);
      if (lookahead == 'l') ADVANCE(196);
      if (lookahead == 'm') ADVANCE(193);
      if (lookahead == 's') ADVANCE(205);
      if (lookahead == 'u') ADVANCE(210);
      if (lookahead == 'v') ADVANCE(194);
      if (lookahead == '{') ADVANCE(142);
      if (lookahead == '}') ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(188);
      if (lookahead != 0) ADVANCE(229);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(181);
      if (lookahead == '\'') ADVANCE(178);
      if (lookahead == '{') ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead != 0 &&
          (lookahead < '<' || '>' < lookahead) &&
          lookahead != '}') ADVANCE(184);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(181);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(182);
      if (lookahead != 0) ADVANCE(183);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(139);
      END_STATE();
    case 4:
      if (lookahead == '%') ADVANCE(147);
      if (lookahead == '}') ADVANCE(144);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(148);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(178);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(179);
      if (lookahead != 0) ADVANCE(180);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(150);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(164);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(27);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(34);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(35);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(151);
      if (lookahead == '<') ADVANCE(153);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(154);
      if (lookahead != 0) ADVANCE(162);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(151);
      if (lookahead == '{') ADVANCE(152);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(155);
      if (lookahead != 0) ADVANCE(162);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(156);
      if (lookahead != 0) ADVANCE(162);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(6);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(160);
      if (lookahead != 0) ADVANCE(162);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(7);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(187);
      if (lookahead == '<') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(93);
      if (lookahead == 'c') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(71);
      if (lookahead == 'f') ADVANCE(82);
      if (lookahead == 'h') ADVANCE(85);
      if (lookahead == 'i') ADVANCE(54);
      if (lookahead == 'l') ADVANCE(46);
      if (lookahead == 'm') ADVANCE(30);
      if (lookahead == 'o') ADVANCE(79);
      if (lookahead == 's') ADVANCE(59);
      if (lookahead == 'u') ADVANCE(77);
      if (lookahead == 'v') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(189);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(40);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(187);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == ':') ADVANCE(177);
      if (lookahead == '>') ADVANCE(134);
      if (lookahead == '{') ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '<' &&
          lookahead != '=' &&
          lookahead != '}') ADVANCE(229);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(187);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(189);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 21:
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == ':') ADVANCE(177);
      if (lookahead == '=') ADVANCE(176);
      if (lookahead == '>') ADVANCE(134);
      if (lookahead == '{') ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '<' &&
          lookahead != '}') ADVANCE(229);
      END_STATE();
    case 22:
      if (lookahead == '/') ADVANCE(3);
      END_STATE();
    case 23:
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == '{') ADVANCE(142);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (lookahead != 0 &&
          lookahead != '>' &&
          lookahead != '}') ADVANCE(251);
      END_STATE();
    case 24:
      if (lookahead == '<') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (lookahead != 0 &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(251);
      END_STATE();
    case 25:
      if (lookahead == '>') ADVANCE(137);
      END_STATE();
    case 26:
      if (lookahead == '>') ADVANCE(163);
      END_STATE();
    case 27:
      if (lookahead == '>') ADVANCE(163);
      if (lookahead == '}') ADVANCE(165);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(102);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(91);
      if (lookahead == 'h') ADVANCE(32);
      if (lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(106);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(67);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 33:
      if (lookahead == 'b') ADVANCE(73);
      END_STATE();
    case 34:
      if (lookahead == 'b') ADVANCE(68);
      if (lookahead == 'c') ADVANCE(29);
      if (lookahead == 'f') ADVANCE(83);
      if (lookahead == 'k') ADVANCE(47);
      if (lookahead == 's') ADVANCE(109);
      if (lookahead == 'w') ADVANCE(60);
      END_STATE();
    case 35:
      if (lookahead == 'b') ADVANCE(70);
      if (lookahead == 'f') ADVANCE(88);
      if (lookahead == 'k') ADVANCE(53);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(58);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(65);
      END_STATE();
    case 38:
      if (lookahead == 'c') ADVANCE(66);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(114);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(72);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(115);
      END_STATE();
    case 42:
      if (lookahead == 'd') ADVANCE(84);
      if (lookahead == 'u') ADVANCE(89);
      END_STATE();
    case 43:
      if (lookahead == 'd') ADVANCE(86);
      END_STATE();
    case 44:
      if (lookahead == 'd') ADVANCE(87);
      if (lookahead == 'u') ADVANCE(90);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(239);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 54:
      if (lookahead == 'f') ADVANCE(167);
      END_STATE();
    case 55:
      if (lookahead == 'f') ADVANCE(174);
      END_STATE();
    case 56:
      if (lookahead == 'g') ADVANCE(97);
      END_STATE();
    case 57:
      if (lookahead == 'g') ADVANCE(48);
      END_STATE();
    case 58:
      if (lookahead == 'h') ADVANCE(175);
      END_STATE();
    case 59:
      if (lookahead == 'h') ADVANCE(81);
      END_STATE();
    case 60:
      if (lookahead == 'i') ADVANCE(74);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 64:
      if (lookahead == 'k') ADVANCE(234);
      END_STATE();
    case 65:
      if (lookahead == 'k') ADVANCE(235);
      END_STATE();
    case 66:
      if (lookahead == 'k') ADVANCE(236);
      END_STATE();
    case 67:
      if (lookahead == 'l') ADVANCE(113);
      END_STATE();
    case 68:
      if (lookahead == 'l') ADVANCE(110);
      END_STATE();
    case 69:
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 70:
      if (lookahead == 'l') ADVANCE(112);
      END_STATE();
    case 71:
      if (lookahead == 'l') ADVANCE(103);
      END_STATE();
    case 72:
      if (lookahead == 'l') ADVANCE(63);
      END_STATE();
    case 73:
      if (lookahead == 'm') ADVANCE(62);
      END_STATE();
    case 74:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 75:
      if (lookahead == 'n') ADVANCE(241);
      END_STATE();
    case 76:
      if (lookahead == 'n') ADVANCE(245);
      END_STATE();
    case 77:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 78:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 79:
      if (lookahead == 'n') ADVANCE(9);
      END_STATE();
    case 80:
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 81:
      if (lookahead == 'o') ADVANCE(116);
      END_STATE();
    case 82:
      if (lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 83:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 84:
      if (lookahead == 'o') ADVANCE(117);
      END_STATE();
    case 85:
      if (lookahead == 'o') ADVANCE(80);
      END_STATE();
    case 86:
      if (lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 87:
      if (lookahead == 'o') ADVANCE(119);
      END_STATE();
    case 88:
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 89:
      if (lookahead == 'p') ADVANCE(242);
      END_STATE();
    case 90:
      if (lookahead == 'p') ADVANCE(246);
      END_STATE();
    case 91:
      if (lookahead == 'p') ADVANCE(108);
      END_STATE();
    case 92:
      if (lookahead == 'r') ADVANCE(169);
      END_STATE();
    case 93:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 94:
      if (lookahead == 'r') ADVANCE(237);
      END_STATE();
    case 95:
      if (lookahead == 'r') ADVANCE(244);
      END_STATE();
    case 96:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 97:
      if (lookahead == 's') ADVANCE(232);
      END_STATE();
    case 98:
      if (lookahead == 's') ADVANCE(168);
      END_STATE();
    case 99:
      if (lookahead == 's') ADVANCE(233);
      END_STATE();
    case 100:
      if (lookahead == 's') ADVANCE(238);
      END_STATE();
    case 101:
      if (lookahead == 's') ADVANCE(243);
      END_STATE();
    case 102:
      if (lookahead == 's') ADVANCE(45);
      END_STATE();
    case 103:
      if (lookahead == 's') ADVANCE(49);
      END_STATE();
    case 104:
      if (lookahead == 's') ADVANCE(98);
      END_STATE();
    case 105:
      if (lookahead == 't') ADVANCE(231);
      END_STATE();
    case 106:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 107:
      if (lookahead == 't') ADVANCE(240);
      END_STATE();
    case 108:
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 109:
      if (lookahead == 'u') ADVANCE(33);
      END_STATE();
    case 110:
      if (lookahead == 'u') ADVANCE(94);
      END_STATE();
    case 111:
      if (lookahead == 'u') ADVANCE(96);
      END_STATE();
    case 112:
      if (lookahead == 'u') ADVANCE(95);
      END_STATE();
    case 113:
      if (lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 114:
      if (lookahead == 'u') ADVANCE(100);
      END_STATE();
    case 115:
      if (lookahead == 'u') ADVANCE(101);
      END_STATE();
    case 116:
      if (lookahead == 'w') ADVANCE(230);
      END_STATE();
    case 117:
      if (lookahead == 'w') ADVANCE(75);
      END_STATE();
    case 118:
      if (lookahead == 'w') ADVANCE(10);
      END_STATE();
    case 119:
      if (lookahead == 'w') ADVANCE(76);
      END_STATE();
    case 120:
      if (lookahead == 'y') ADVANCE(42);
      END_STATE();
    case 121:
      if (lookahead == 'y') ADVANCE(44);
      END_STATE();
    case 122:
      if (lookahead == '{') ADVANCE(140);
      if (lookahead == '}') ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(145);
      if (lookahead != 0) ADVANCE(146);
      END_STATE();
    case 123:
      if (lookahead == '}') ADVANCE(165);
      END_STATE();
    case 124:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(251);
      END_STATE();
    case 125:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(125)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 126:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(189);
      END_STATE();
    case 127:
      if (eof) ADVANCE(130);
      if (lookahead == '-') ADVANCE(247);
      if (lookahead == '<') ADVANCE(133);
      if (lookahead == '{') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(127)
      if (lookahead != 0 &&
          lookahead != '>' &&
          lookahead != '}') ADVANCE(251);
      END_STATE();
    case 128:
      if (eof) ADVANCE(130);
      if (lookahead == '-') ADVANCE(248);
      if (lookahead == '<') ADVANCE(133);
      if (lookahead == '{') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(128)
      if (lookahead != 0 &&
          lookahead != '>' &&
          lookahead != '}') ADVANCE(251);
      END_STATE();
    case 129:
      if (eof) ADVANCE(130);
      if (lookahead == '<') ADVANCE(133);
      if (lookahead == '{') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(129)
      if (lookahead != 0 &&
          lookahead != '>' &&
          lookahead != '}') ADVANCE(251);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '#') ADVANCE(138);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '#') ADVANCE(138);
      if (lookahead == '/') ADVANCE(136);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '#') ADVANCE(138);
      if (lookahead == '/') ADVANCE(135);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      if (lookahead == '#') ADVANCE(139);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_LT_POUND);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_LT_SLASH_POUND);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '!') ADVANCE(16);
      if (lookahead == '#') ADVANCE(166);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '!') ADVANCE(16);
      if (lookahead == '#') ADVANCE(166);
      if (lookahead == '/') ADVANCE(171);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(149);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym__expression_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(146);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym__expression_value_token1);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(146);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__code);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == '%') ADVANCE(147);
      if (lookahead == '}') ADVANCE(144);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(148);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__code);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_LT_BANG_DASH_DASH);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym__public_comment_token1);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym__public_comment_token1);
      if (lookahead == '!') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(162);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym__public_comment_token1);
      if (lookahead == '!') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(162);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym__public_comment_token1);
      if (lookahead == '-') ADVANCE(151);
      if (lookahead == '<') ADVANCE(153);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(154);
      if (lookahead != 0) ADVANCE(162);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym__public_comment_token1);
      if (lookahead == '-') ADVANCE(151);
      if (lookahead == '{') ADVANCE(152);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(155);
      if (lookahead != 0) ADVANCE(162);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym__public_comment_token1);
      if (lookahead == '-') ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(156);
      if (lookahead != 0) ADVANCE(162);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym__public_comment_token1);
      if (lookahead == '-') ADVANCE(123);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym__public_comment_token1);
      if (lookahead == '-') ADVANCE(26);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym__public_comment_token1);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead != 0) ADVANCE(162);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym__public_comment_token1);
      if (lookahead == '-') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(160);
      if (lookahead != 0) ADVANCE(162);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym__public_comment_token1);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead != 0) ADVANCE(162);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym__public_comment_token1);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(162);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_GT);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_LBRACE_BANG_DASH_DASH);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_RBRACE);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_LBRACE_POUND);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_unless);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_LBRACE_SLASH);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == 'i') ADVANCE(202);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_elseif);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_match);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(180);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(180);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(183);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(183);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_attribute_value);
      if (!sym_attribute_value_character_set_1(lookahead)) ADVANCE(184);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_tag_name);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      if (!sym_tag_name_character_set_1(lookahead)) ADVANCE(186);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_tag_name);
      if (!sym_tag_name_character_set_1(lookahead)) ADVANCE(186);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__module);
      if (lookahead == '.') ADVANCE(228);
      if (!sym__module_character_set_1(lookahead)) ADVANCE(188);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__module);
      if (lookahead == '.') ADVANCE(126);
      if (!sym__module_character_set_1(lookahead)) ADVANCE(189);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__function);
      if (!sym__module_character_set_1(lookahead)) ADVANCE(190);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == '-') ADVANCE(227);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(229);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'a') ADVANCE(220);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(229);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'a') ADVANCE(224);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(229);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'a') ADVANCE(207);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(229);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'c') ADVANCE(204);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(229);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'e') ADVANCE(223);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(229);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'e') ADVANCE(170);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(229);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'e') ADVANCE(172);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(229);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'e') ADVANCE(222);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(229);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'e') ADVANCE(219);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(229);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'f') ADVANCE(167);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(229);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'f') ADVANCE(174);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(229);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'g') ADVANCE(217);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(229);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'h') ADVANCE(175);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(229);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'h') ADVANCE(212);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(229);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'k') ADVANCE(234);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(229);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'l') ADVANCE(225);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(229);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'l') ADVANCE(199);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(229);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'l') ADVANCE(221);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(229);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'n') ADVANCE(208);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(229);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'o') ADVANCE(206);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(229);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'o') ADVANCE(226);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(229);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'o') ADVANCE(216);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(229);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'o') ADVANCE(211);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(229);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'r') ADVANCE(203);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(229);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'r') ADVANCE(169);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(229);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 's') ADVANCE(232);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(229);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 's') ADVANCE(168);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(229);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 's') ADVANCE(233);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(229);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 's') ADVANCE(197);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(229);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 's') ADVANCE(198);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(229);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 's') ADVANCE(218);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(229);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 't') ADVANCE(231);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(229);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 't') ADVANCE(195);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(229);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'u') ADVANCE(200);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(229);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'w') ADVANCE(230);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(229);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == '}') ADVANCE(165);
      if (!sym_attribute_name_character_set_2(lookahead)) ADVANCE(229);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_attribute_name);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(188);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(229);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_attribute_name);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(229);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_show);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_args);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_values);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_hook);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_on_DASHclick);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_on_DASHcapture_DASHclick);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_on_DASHblur);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_on_DASHfocus);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_on_DASHchange);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_on_DASHsubmit);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_on_DASHkeydown);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_on_DASHkeyup);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_on_DASHwindow_DASHfocus);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_on_DASHwindow_DASHblur);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_on_DASHwindow_DASHkeydown);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_on_DASHwindow_DASHkeyup);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(251);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(251);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '>') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(251);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '}') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{') ADVANCE(251);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(251);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 129},
  [2] = {.lex_state = 23},
  [3] = {.lex_state = 23},
  [4] = {.lex_state = 23},
  [5] = {.lex_state = 23},
  [6] = {.lex_state = 129},
  [7] = {.lex_state = 129},
  [8] = {.lex_state = 129},
  [9] = {.lex_state = 129},
  [10] = {.lex_state = 129},
  [11] = {.lex_state = 129},
  [12] = {.lex_state = 129},
  [13] = {.lex_state = 129},
  [14] = {.lex_state = 129},
  [15] = {.lex_state = 129},
  [16] = {.lex_state = 129},
  [17] = {.lex_state = 129},
  [18] = {.lex_state = 129},
  [19] = {.lex_state = 23},
  [20] = {.lex_state = 129},
  [21] = {.lex_state = 17},
  [22] = {.lex_state = 127},
  [23] = {.lex_state = 128},
  [24] = {.lex_state = 21},
  [25] = {.lex_state = 129},
  [26] = {.lex_state = 21},
  [27] = {.lex_state = 21},
  [28] = {.lex_state = 21},
  [29] = {.lex_state = 21},
  [30] = {.lex_state = 21},
  [31] = {.lex_state = 21},
  [32] = {.lex_state = 21},
  [33] = {.lex_state = 21},
  [34] = {.lex_state = 129},
  [35] = {.lex_state = 21},
  [36] = {.lex_state = 129},
  [37] = {.lex_state = 129},
  [38] = {.lex_state = 129},
  [39] = {.lex_state = 129},
  [40] = {.lex_state = 129},
  [41] = {.lex_state = 129},
  [42] = {.lex_state = 129},
  [43] = {.lex_state = 129},
  [44] = {.lex_state = 21},
  [45] = {.lex_state = 129},
  [46] = {.lex_state = 129},
  [47] = {.lex_state = 129},
  [48] = {.lex_state = 129},
  [49] = {.lex_state = 21},
  [50] = {.lex_state = 129},
  [51] = {.lex_state = 17},
  [52] = {.lex_state = 129},
  [53] = {.lex_state = 129},
  [54] = {.lex_state = 129},
  [55] = {.lex_state = 129},
  [56] = {.lex_state = 129},
  [57] = {.lex_state = 21},
  [58] = {.lex_state = 129},
  [59] = {.lex_state = 129},
  [60] = {.lex_state = 21},
  [61] = {.lex_state = 23},
  [62] = {.lex_state = 23},
  [63] = {.lex_state = 23},
  [64] = {.lex_state = 23},
  [65] = {.lex_state = 23},
  [66] = {.lex_state = 23},
  [67] = {.lex_state = 23},
  [68] = {.lex_state = 129},
  [69] = {.lex_state = 23},
  [70] = {.lex_state = 23},
  [71] = {.lex_state = 23},
  [72] = {.lex_state = 129},
  [73] = {.lex_state = 129},
  [74] = {.lex_state = 23},
  [75] = {.lex_state = 23},
  [76] = {.lex_state = 23},
  [77] = {.lex_state = 23},
  [78] = {.lex_state = 23},
  [79] = {.lex_state = 23},
  [80] = {.lex_state = 23},
  [81] = {.lex_state = 23},
  [82] = {.lex_state = 23},
  [83] = {.lex_state = 21},
  [84] = {.lex_state = 129},
  [85] = {.lex_state = 23},
  [86] = {.lex_state = 23},
  [87] = {.lex_state = 23},
  [88] = {.lex_state = 23},
  [89] = {.lex_state = 23},
  [90] = {.lex_state = 23},
  [91] = {.lex_state = 23},
  [92] = {.lex_state = 23},
  [93] = {.lex_state = 129},
  [94] = {.lex_state = 129},
  [95] = {.lex_state = 23},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 19},
  [99] = {.lex_state = 21},
  [100] = {.lex_state = 122},
  [101] = {.lex_state = 21},
  [102] = {.lex_state = 20},
  [103] = {.lex_state = 122},
  [104] = {.lex_state = 17},
  [105] = {.lex_state = 17},
  [106] = {.lex_state = 122},
  [107] = {.lex_state = 122},
  [108] = {.lex_state = 21},
  [109] = {.lex_state = 21},
  [110] = {.lex_state = 21},
  [111] = {.lex_state = 122},
  [112] = {.lex_state = 21},
  [113] = {.lex_state = 21},
  [114] = {.lex_state = 122},
  [115] = {.lex_state = 122},
  [116] = {.lex_state = 21},
  [117] = {.lex_state = 20},
  [118] = {.lex_state = 21},
  [119] = {.lex_state = 17},
  [120] = {.lex_state = 21},
  [121] = {.lex_state = 12},
  [122] = {.lex_state = 12},
  [123] = {.lex_state = 11},
  [124] = {.lex_state = 11},
  [125] = {.lex_state = 4},
  [126] = {.lex_state = 4},
  [127] = {.lex_state = 122},
  [128] = {.lex_state = 122},
  [129] = {.lex_state = 24},
  [130] = {.lex_state = 122},
  [131] = {.lex_state = 122},
  [132] = {.lex_state = 17},
  [133] = {.lex_state = 13},
  [134] = {.lex_state = 15},
  [135] = {.lex_state = 15},
  [136] = {.lex_state = 15},
  [137] = {.lex_state = 4},
  [138] = {.lex_state = 4},
  [139] = {.lex_state = 13},
  [140] = {.lex_state = 122},
  [141] = {.lex_state = 24},
  [142] = {.lex_state = 13},
  [143] = {.lex_state = 17},
  [144] = {.lex_state = 15},
  [145] = {.lex_state = 4},
  [146] = {.lex_state = 17},
  [147] = {.lex_state = 17},
  [148] = {.lex_state = 17},
  [149] = {.lex_state = 17},
  [150] = {.lex_state = 17},
  [151] = {.lex_state = 2},
  [152] = {.lex_state = 5},
  [153] = {.lex_state = 24},
  [154] = {.lex_state = 13},
  [155] = {.lex_state = 17},
  [156] = {.lex_state = 17},
  [157] = {.lex_state = 24},
  [158] = {.lex_state = 4},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 125},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 17},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 17},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 17},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 125},
  [185] = {.lex_state = 17},
  [186] = {.lex_state = 20},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 20},
  [190] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_SLASH] = ACTIONS(1),
    [anon_sym_SLASH_GT] = ACTIONS(1),
    [anon_sym_LT_POUND] = ACTIONS(1),
    [anon_sym_LT_SLASH_POUND] = ACTIONS(1),
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
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym__module] = ACTIONS(1),
    [sym_attribute_name] = ACTIONS(1),
    [anon_sym_show] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_args] = ACTIONS(1),
    [anon_sym_values] = ACTIONS(1),
    [anon_sym_hook] = ACTIONS(1),
  },
  [1] = {
    [sym_fragment] = STATE(183),
    [sym__node] = STATE(20),
    [sym_tag] = STATE(20),
    [sym_component] = STATE(20),
    [sym_block] = STATE(20),
    [sym_start_tag] = STATE(9),
    [sym_self_closing_tag] = STATE(36),
    [sym_start_component] = STATE(11),
    [sym_self_closing_component] = STATE(37),
    [sym_start_function_component] = STATE(7),
    [sym_self_closing_function_component] = STATE(37),
    [sym_start_macro_component] = STATE(129),
    [sym_expression] = STATE(20),
    [sym_comment] = STATE(20),
    [sym__public_comment] = STATE(52),
    [sym__private_comment] = STATE(52),
    [sym_start_block] = STATE(3),
    [aux_sym_fragment_repeat1] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LT] = ACTIONS(5),
    [anon_sym_LT_POUND] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(11),
    [anon_sym_LBRACE_BANG_DASH_DASH] = ACTIONS(13),
    [anon_sym_LBRACE_POUND] = ACTIONS(15),
    [sym_text] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 18,
    ACTIONS(7), 1,
      anon_sym_LT_POUND,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(25), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    ACTIONS(27), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(29), 1,
      anon_sym_LBRACE_SLASH,
    ACTIONS(31), 1,
      sym_text,
    STATE(2), 1,
      sym_start_block,
    STATE(6), 1,
      sym_start_function_component,
    STATE(8), 1,
      sym_start_component,
    STATE(10), 1,
      sym_start_tag,
    STATE(70), 1,
      sym_self_closing_tag,
    STATE(95), 1,
      sym_end_block,
    STATE(141), 1,
      sym_start_macro_component,
    STATE(62), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(67), 2,
      sym_self_closing_component,
      sym_self_closing_function_component,
    STATE(4), 8,
      sym__node,
      sym_tag,
      sym_component,
      sym_block,
      sym_expression,
      sym_comment,
      sym_subblock,
      aux_sym_block_repeat1,
  [64] = 18,
    ACTIONS(7), 1,
      anon_sym_LT_POUND,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(25), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    ACTIONS(27), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(33), 1,
      anon_sym_LBRACE_SLASH,
    ACTIONS(35), 1,
      sym_text,
    STATE(2), 1,
      sym_start_block,
    STATE(6), 1,
      sym_start_function_component,
    STATE(8), 1,
      sym_start_component,
    STATE(10), 1,
      sym_start_tag,
    STATE(53), 1,
      sym_end_block,
    STATE(70), 1,
      sym_self_closing_tag,
    STATE(141), 1,
      sym_start_macro_component,
    STATE(62), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(67), 2,
      sym_self_closing_component,
      sym_self_closing_function_component,
    STATE(5), 8,
      sym__node,
      sym_tag,
      sym_component,
      sym_block,
      sym_expression,
      sym_comment,
      sym_subblock,
      aux_sym_block_repeat1,
  [128] = 18,
    ACTIONS(7), 1,
      anon_sym_LT_POUND,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(25), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    ACTIONS(27), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(29), 1,
      anon_sym_LBRACE_SLASH,
    ACTIONS(37), 1,
      sym_text,
    STATE(2), 1,
      sym_start_block,
    STATE(6), 1,
      sym_start_function_component,
    STATE(8), 1,
      sym_start_component,
    STATE(10), 1,
      sym_start_tag,
    STATE(70), 1,
      sym_self_closing_tag,
    STATE(78), 1,
      sym_end_block,
    STATE(141), 1,
      sym_start_macro_component,
    STATE(62), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(67), 2,
      sym_self_closing_component,
      sym_self_closing_function_component,
    STATE(19), 8,
      sym__node,
      sym_tag,
      sym_component,
      sym_block,
      sym_expression,
      sym_comment,
      sym_subblock,
      aux_sym_block_repeat1,
  [192] = 18,
    ACTIONS(7), 1,
      anon_sym_LT_POUND,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(25), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    ACTIONS(27), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(33), 1,
      anon_sym_LBRACE_SLASH,
    ACTIONS(37), 1,
      sym_text,
    STATE(2), 1,
      sym_start_block,
    STATE(6), 1,
      sym_start_function_component,
    STATE(8), 1,
      sym_start_component,
    STATE(10), 1,
      sym_start_tag,
    STATE(25), 1,
      sym_end_block,
    STATE(70), 1,
      sym_self_closing_tag,
    STATE(141), 1,
      sym_start_macro_component,
    STATE(62), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(67), 2,
      sym_self_closing_component,
      sym_self_closing_function_component,
    STATE(19), 8,
      sym__node,
      sym_tag,
      sym_component,
      sym_block,
      sym_expression,
      sym_comment,
      sym_subblock,
      aux_sym_block_repeat1,
  [256] = 18,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(7), 1,
      anon_sym_LT_POUND,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    ACTIONS(15), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(39), 1,
      anon_sym_LT_SLASH,
    ACTIONS(41), 1,
      sym_text,
    STATE(3), 1,
      sym_start_block,
    STATE(7), 1,
      sym_start_function_component,
    STATE(9), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_start_component,
    STATE(36), 1,
      sym_self_closing_tag,
    STATE(80), 1,
      sym_end_function_component,
    STATE(129), 1,
      sym_start_macro_component,
    STATE(37), 2,
      sym_self_closing_component,
      sym_self_closing_function_component,
    STATE(52), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(13), 7,
      sym__node,
      sym_tag,
      sym_component,
      sym_block,
      sym_expression,
      sym_comment,
      aux_sym_fragment_repeat1,
  [319] = 18,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(7), 1,
      anon_sym_LT_POUND,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    ACTIONS(15), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(43), 1,
      anon_sym_LT_SLASH,
    ACTIONS(45), 1,
      sym_text,
    STATE(3), 1,
      sym_start_block,
    STATE(7), 1,
      sym_start_function_component,
    STATE(9), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_start_component,
    STATE(36), 1,
      sym_self_closing_tag,
    STATE(47), 1,
      sym_end_function_component,
    STATE(129), 1,
      sym_start_macro_component,
    STATE(37), 2,
      sym_self_closing_component,
      sym_self_closing_function_component,
    STATE(52), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(17), 7,
      sym__node,
      sym_tag,
      sym_component,
      sym_block,
      sym_expression,
      sym_comment,
      aux_sym_fragment_repeat1,
  [382] = 18,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(7), 1,
      anon_sym_LT_POUND,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    ACTIONS(15), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(47), 1,
      anon_sym_LT_SLASH,
    ACTIONS(49), 1,
      sym_text,
    STATE(3), 1,
      sym_start_block,
    STATE(7), 1,
      sym_start_function_component,
    STATE(9), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_start_component,
    STATE(36), 1,
      sym_self_closing_tag,
    STATE(80), 1,
      sym_end_component,
    STATE(129), 1,
      sym_start_macro_component,
    STATE(37), 2,
      sym_self_closing_component,
      sym_self_closing_function_component,
    STATE(52), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(12), 7,
      sym__node,
      sym_tag,
      sym_component,
      sym_block,
      sym_expression,
      sym_comment,
      aux_sym_fragment_repeat1,
  [445] = 18,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(7), 1,
      anon_sym_LT_POUND,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    ACTIONS(15), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(51), 1,
      anon_sym_LT_SLASH,
    ACTIONS(53), 1,
      sym_text,
    STATE(3), 1,
      sym_start_block,
    STATE(7), 1,
      sym_start_function_component,
    STATE(9), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_start_component,
    STATE(36), 1,
      sym_self_closing_tag,
    STATE(45), 1,
      sym_end_tag,
    STATE(129), 1,
      sym_start_macro_component,
    STATE(37), 2,
      sym_self_closing_component,
      sym_self_closing_function_component,
    STATE(52), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(14), 7,
      sym__node,
      sym_tag,
      sym_component,
      sym_block,
      sym_expression,
      sym_comment,
      aux_sym_fragment_repeat1,
  [508] = 18,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(7), 1,
      anon_sym_LT_POUND,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    ACTIONS(15), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(55), 1,
      anon_sym_LT_SLASH,
    ACTIONS(57), 1,
      sym_text,
    STATE(3), 1,
      sym_start_block,
    STATE(7), 1,
      sym_start_function_component,
    STATE(9), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_start_component,
    STATE(36), 1,
      sym_self_closing_tag,
    STATE(69), 1,
      sym_end_tag,
    STATE(129), 1,
      sym_start_macro_component,
    STATE(37), 2,
      sym_self_closing_component,
      sym_self_closing_function_component,
    STATE(52), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(16), 7,
      sym__node,
      sym_tag,
      sym_component,
      sym_block,
      sym_expression,
      sym_comment,
      aux_sym_fragment_repeat1,
  [571] = 18,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(7), 1,
      anon_sym_LT_POUND,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    ACTIONS(15), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(59), 1,
      anon_sym_LT_SLASH,
    ACTIONS(61), 1,
      sym_text,
    STATE(3), 1,
      sym_start_block,
    STATE(7), 1,
      sym_start_function_component,
    STATE(9), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_start_component,
    STATE(36), 1,
      sym_self_closing_tag,
    STATE(47), 1,
      sym_end_component,
    STATE(129), 1,
      sym_start_macro_component,
    STATE(37), 2,
      sym_self_closing_component,
      sym_self_closing_function_component,
    STATE(52), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(15), 7,
      sym__node,
      sym_tag,
      sym_component,
      sym_block,
      sym_expression,
      sym_comment,
      aux_sym_fragment_repeat1,
  [634] = 18,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(7), 1,
      anon_sym_LT_POUND,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    ACTIONS(15), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(47), 1,
      anon_sym_LT_SLASH,
    ACTIONS(63), 1,
      sym_text,
    STATE(3), 1,
      sym_start_block,
    STATE(7), 1,
      sym_start_function_component,
    STATE(9), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_start_component,
    STATE(36), 1,
      sym_self_closing_tag,
    STATE(81), 1,
      sym_end_component,
    STATE(129), 1,
      sym_start_macro_component,
    STATE(37), 2,
      sym_self_closing_component,
      sym_self_closing_function_component,
    STATE(52), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(18), 7,
      sym__node,
      sym_tag,
      sym_component,
      sym_block,
      sym_expression,
      sym_comment,
      aux_sym_fragment_repeat1,
  [697] = 18,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(7), 1,
      anon_sym_LT_POUND,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    ACTIONS(15), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(39), 1,
      anon_sym_LT_SLASH,
    ACTIONS(63), 1,
      sym_text,
    STATE(3), 1,
      sym_start_block,
    STATE(7), 1,
      sym_start_function_component,
    STATE(9), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_start_component,
    STATE(36), 1,
      sym_self_closing_tag,
    STATE(81), 1,
      sym_end_function_component,
    STATE(129), 1,
      sym_start_macro_component,
    STATE(37), 2,
      sym_self_closing_component,
      sym_self_closing_function_component,
    STATE(52), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(18), 7,
      sym__node,
      sym_tag,
      sym_component,
      sym_block,
      sym_expression,
      sym_comment,
      aux_sym_fragment_repeat1,
  [760] = 18,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(7), 1,
      anon_sym_LT_POUND,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    ACTIONS(15), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(51), 1,
      anon_sym_LT_SLASH,
    ACTIONS(63), 1,
      sym_text,
    STATE(3), 1,
      sym_start_block,
    STATE(7), 1,
      sym_start_function_component,
    STATE(9), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_start_component,
    STATE(36), 1,
      sym_self_closing_tag,
    STATE(59), 1,
      sym_end_tag,
    STATE(129), 1,
      sym_start_macro_component,
    STATE(37), 2,
      sym_self_closing_component,
      sym_self_closing_function_component,
    STATE(52), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(18), 7,
      sym__node,
      sym_tag,
      sym_component,
      sym_block,
      sym_expression,
      sym_comment,
      aux_sym_fragment_repeat1,
  [823] = 18,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(7), 1,
      anon_sym_LT_POUND,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    ACTIONS(15), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(59), 1,
      anon_sym_LT_SLASH,
    ACTIONS(63), 1,
      sym_text,
    STATE(3), 1,
      sym_start_block,
    STATE(7), 1,
      sym_start_function_component,
    STATE(9), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_start_component,
    STATE(36), 1,
      sym_self_closing_tag,
    STATE(50), 1,
      sym_end_component,
    STATE(129), 1,
      sym_start_macro_component,
    STATE(37), 2,
      sym_self_closing_component,
      sym_self_closing_function_component,
    STATE(52), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(18), 7,
      sym__node,
      sym_tag,
      sym_component,
      sym_block,
      sym_expression,
      sym_comment,
      aux_sym_fragment_repeat1,
  [886] = 18,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(7), 1,
      anon_sym_LT_POUND,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    ACTIONS(15), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(55), 1,
      anon_sym_LT_SLASH,
    ACTIONS(63), 1,
      sym_text,
    STATE(3), 1,
      sym_start_block,
    STATE(7), 1,
      sym_start_function_component,
    STATE(9), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_start_component,
    STATE(36), 1,
      sym_self_closing_tag,
    STATE(85), 1,
      sym_end_tag,
    STATE(129), 1,
      sym_start_macro_component,
    STATE(37), 2,
      sym_self_closing_component,
      sym_self_closing_function_component,
    STATE(52), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(18), 7,
      sym__node,
      sym_tag,
      sym_component,
      sym_block,
      sym_expression,
      sym_comment,
      aux_sym_fragment_repeat1,
  [949] = 18,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(7), 1,
      anon_sym_LT_POUND,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    ACTIONS(15), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(43), 1,
      anon_sym_LT_SLASH,
    ACTIONS(63), 1,
      sym_text,
    STATE(3), 1,
      sym_start_block,
    STATE(7), 1,
      sym_start_function_component,
    STATE(9), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_start_component,
    STATE(36), 1,
      sym_self_closing_tag,
    STATE(50), 1,
      sym_end_function_component,
    STATE(129), 1,
      sym_start_macro_component,
    STATE(37), 2,
      sym_self_closing_component,
      sym_self_closing_function_component,
    STATE(52), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(18), 7,
      sym__node,
      sym_tag,
      sym_component,
      sym_block,
      sym_expression,
      sym_comment,
      aux_sym_fragment_repeat1,
  [1012] = 17,
    ACTIONS(67), 1,
      anon_sym_LT,
    ACTIONS(70), 1,
      anon_sym_LT_POUND,
    ACTIONS(73), 1,
      anon_sym_LBRACE,
    ACTIONS(76), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(79), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    ACTIONS(82), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(85), 1,
      sym_text,
    STATE(3), 1,
      sym_start_block,
    STATE(7), 1,
      sym_start_function_component,
    STATE(9), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_start_component,
    STATE(36), 1,
      sym_self_closing_tag,
    STATE(129), 1,
      sym_start_macro_component,
    ACTIONS(65), 2,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
    STATE(37), 2,
      sym_self_closing_component,
      sym_self_closing_function_component,
    STATE(52), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(18), 7,
      sym__node,
      sym_tag,
      sym_component,
      sym_block,
      sym_expression,
      sym_comment,
      aux_sym_fragment_repeat1,
  [1073] = 17,
    ACTIONS(88), 1,
      anon_sym_LT,
    ACTIONS(91), 1,
      anon_sym_LT_POUND,
    ACTIONS(94), 1,
      anon_sym_LBRACE,
    ACTIONS(97), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(100), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    ACTIONS(103), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(106), 1,
      anon_sym_LBRACE_SLASH,
    ACTIONS(108), 1,
      sym_text,
    STATE(2), 1,
      sym_start_block,
    STATE(6), 1,
      sym_start_function_component,
    STATE(8), 1,
      sym_start_component,
    STATE(10), 1,
      sym_start_tag,
    STATE(70), 1,
      sym_self_closing_tag,
    STATE(141), 1,
      sym_start_macro_component,
    STATE(62), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(67), 2,
      sym_self_closing_component,
      sym_self_closing_function_component,
    STATE(19), 8,
      sym__node,
      sym_tag,
      sym_component,
      sym_block,
      sym_expression,
      sym_comment,
      sym_subblock,
      aux_sym_block_repeat1,
  [1134] = 17,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(7), 1,
      anon_sym_LT_POUND,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    ACTIONS(15), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(63), 1,
      sym_text,
    ACTIONS(111), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_start_block,
    STATE(7), 1,
      sym_start_function_component,
    STATE(9), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_start_component,
    STATE(36), 1,
      sym_self_closing_tag,
    STATE(129), 1,
      sym_start_macro_component,
    STATE(37), 2,
      sym_self_closing_component,
      sym_self_closing_function_component,
    STATE(52), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(18), 7,
      sym__node,
      sym_tag,
      sym_component,
      sym_block,
      sym_expression,
      sym_comment,
      aux_sym_fragment_repeat1,
  [1194] = 2,
    STATE(162), 1,
      sym_directive_name,
    ACTIONS(113), 18,
      anon_sym_if,
      anon_sym_show,
      anon_sym_let,
      anon_sym_args,
      anon_sym_values,
      anon_sym_hook,
      anon_sym_on_DASHclick,
      anon_sym_on_DASHcapture_DASHclick,
      anon_sym_on_DASHblur,
      anon_sym_on_DASHfocus,
      anon_sym_on_DASHchange,
      anon_sym_on_DASHsubmit,
      anon_sym_on_DASHkeydown,
      anon_sym_on_DASHkeyup,
      anon_sym_on_DASHwindow_DASHfocus,
      anon_sym_on_DASHwindow_DASHblur,
      anon_sym_on_DASHwindow_DASHkeydown,
      anon_sym_on_DASHwindow_DASHkeyup,
  [1218] = 2,
    ACTIONS(117), 3,
      anon_sym_LT,
      anon_sym_LBRACE,
      sym_text,
    ACTIONS(115), 7,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_POUND,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_DASH_DASH_RBRACE,
      anon_sym_LBRACE_POUND,
  [1233] = 2,
    ACTIONS(121), 3,
      anon_sym_LT,
      anon_sym_LBRACE,
      sym_text,
    ACTIONS(119), 7,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_POUND,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_DASH_DASH_GT,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
  [1248] = 5,
    ACTIONS(125), 1,
      anon_sym_LBRACE,
    ACTIONS(128), 1,
      anon_sym_COLON,
    ACTIONS(131), 1,
      sym_attribute_name,
    ACTIONS(123), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(24), 4,
      sym_expression,
      sym_attribute,
      sym_directive,
      aux_sym_start_tag_repeat1,
  [1268] = 2,
    ACTIONS(136), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(134), 7,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_POUND,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1282] = 6,
    ACTIONS(138), 1,
      anon_sym_GT,
    ACTIONS(140), 1,
      anon_sym_SLASH_GT,
    ACTIONS(142), 1,
      anon_sym_LBRACE,
    ACTIONS(144), 1,
      anon_sym_COLON,
    ACTIONS(146), 1,
      sym_attribute_name,
    STATE(57), 4,
      sym_expression,
      sym_attribute,
      sym_directive,
      aux_sym_start_tag_repeat1,
  [1304] = 6,
    ACTIONS(142), 1,
      anon_sym_LBRACE,
    ACTIONS(144), 1,
      anon_sym_COLON,
    ACTIONS(146), 1,
      sym_attribute_name,
    ACTIONS(148), 1,
      anon_sym_GT,
    ACTIONS(150), 1,
      anon_sym_SLASH_GT,
    STATE(24), 4,
      sym_expression,
      sym_attribute,
      sym_directive,
      aux_sym_start_tag_repeat1,
  [1326] = 6,
    ACTIONS(142), 1,
      anon_sym_LBRACE,
    ACTIONS(144), 1,
      anon_sym_COLON,
    ACTIONS(146), 1,
      sym_attribute_name,
    ACTIONS(152), 1,
      anon_sym_GT,
    ACTIONS(154), 1,
      anon_sym_SLASH_GT,
    STATE(24), 4,
      sym_expression,
      sym_attribute,
      sym_directive,
      aux_sym_start_tag_repeat1,
  [1348] = 6,
    ACTIONS(142), 1,
      anon_sym_LBRACE,
    ACTIONS(144), 1,
      anon_sym_COLON,
    ACTIONS(146), 1,
      sym_attribute_name,
    ACTIONS(156), 1,
      anon_sym_GT,
    ACTIONS(158), 1,
      anon_sym_SLASH_GT,
    STATE(44), 4,
      sym_expression,
      sym_attribute,
      sym_directive,
      aux_sym_start_tag_repeat1,
  [1370] = 6,
    ACTIONS(142), 1,
      anon_sym_LBRACE,
    ACTIONS(144), 1,
      anon_sym_COLON,
    ACTIONS(146), 1,
      sym_attribute_name,
    ACTIONS(160), 1,
      anon_sym_GT,
    ACTIONS(162), 1,
      anon_sym_SLASH_GT,
    STATE(49), 4,
      sym_expression,
      sym_attribute,
      sym_directive,
      aux_sym_start_tag_repeat1,
  [1392] = 6,
    ACTIONS(142), 1,
      anon_sym_LBRACE,
    ACTIONS(144), 1,
      anon_sym_COLON,
    ACTIONS(146), 1,
      sym_attribute_name,
    ACTIONS(164), 1,
      anon_sym_GT,
    ACTIONS(166), 1,
      anon_sym_SLASH_GT,
    STATE(24), 4,
      sym_expression,
      sym_attribute,
      sym_directive,
      aux_sym_start_tag_repeat1,
  [1414] = 6,
    ACTIONS(142), 1,
      anon_sym_LBRACE,
    ACTIONS(144), 1,
      anon_sym_COLON,
    ACTIONS(146), 1,
      sym_attribute_name,
    ACTIONS(160), 1,
      anon_sym_GT,
    ACTIONS(168), 1,
      anon_sym_SLASH_GT,
    STATE(27), 4,
      sym_expression,
      sym_attribute,
      sym_directive,
      aux_sym_start_tag_repeat1,
  [1436] = 6,
    ACTIONS(142), 1,
      anon_sym_LBRACE,
    ACTIONS(144), 1,
      anon_sym_COLON,
    ACTIONS(146), 1,
      sym_attribute_name,
    ACTIONS(156), 1,
      anon_sym_GT,
    ACTIONS(170), 1,
      anon_sym_SLASH_GT,
    STATE(28), 4,
      sym_expression,
      sym_attribute,
      sym_directive,
      aux_sym_start_tag_repeat1,
  [1458] = 2,
    ACTIONS(174), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(172), 7,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_POUND,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1472] = 6,
    ACTIONS(138), 1,
      anon_sym_GT,
    ACTIONS(142), 1,
      anon_sym_LBRACE,
    ACTIONS(144), 1,
      anon_sym_COLON,
    ACTIONS(146), 1,
      sym_attribute_name,
    ACTIONS(176), 1,
      anon_sym_SLASH_GT,
    STATE(31), 4,
      sym_expression,
      sym_attribute,
      sym_directive,
      aux_sym_start_tag_repeat1,
  [1494] = 2,
    ACTIONS(180), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(178), 7,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_POUND,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1508] = 2,
    ACTIONS(184), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(182), 7,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_POUND,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1522] = 2,
    ACTIONS(188), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(186), 7,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_POUND,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1536] = 2,
    ACTIONS(192), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(190), 7,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_POUND,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1550] = 2,
    ACTIONS(196), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(194), 7,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_POUND,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1564] = 2,
    ACTIONS(200), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(198), 7,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_POUND,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1578] = 2,
    ACTIONS(204), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(202), 7,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_POUND,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1592] = 2,
    ACTIONS(208), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(206), 7,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_POUND,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1606] = 6,
    ACTIONS(142), 1,
      anon_sym_LBRACE,
    ACTIONS(144), 1,
      anon_sym_COLON,
    ACTIONS(146), 1,
      sym_attribute_name,
    ACTIONS(152), 1,
      anon_sym_GT,
    ACTIONS(210), 1,
      anon_sym_SLASH_GT,
    STATE(24), 4,
      sym_expression,
      sym_attribute,
      sym_directive,
      aux_sym_start_tag_repeat1,
  [1628] = 2,
    ACTIONS(214), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(212), 7,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_POUND,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1642] = 2,
    ACTIONS(218), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(216), 7,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_POUND,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1656] = 2,
    ACTIONS(222), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(220), 7,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_POUND,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1670] = 2,
    ACTIONS(226), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(224), 7,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_POUND,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1684] = 6,
    ACTIONS(142), 1,
      anon_sym_LBRACE,
    ACTIONS(144), 1,
      anon_sym_COLON,
    ACTIONS(146), 1,
      sym_attribute_name,
    ACTIONS(148), 1,
      anon_sym_GT,
    ACTIONS(228), 1,
      anon_sym_SLASH_GT,
    STATE(24), 4,
      sym_expression,
      sym_attribute,
      sym_directive,
      aux_sym_start_tag_repeat1,
  [1706] = 2,
    ACTIONS(232), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(230), 7,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_POUND,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1720] = 5,
    ACTIONS(236), 1,
      anon_sym_else,
    STATE(125), 1,
      sym_block_name,
    STATE(126), 1,
      sym_subblock_name,
    ACTIONS(238), 2,
      anon_sym_elseif,
      anon_sym_match,
    ACTIONS(234), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_for,
      anon_sym_case,
  [1740] = 2,
    ACTIONS(242), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(240), 7,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_POUND,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1754] = 2,
    ACTIONS(246), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(244), 7,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_POUND,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1768] = 2,
    ACTIONS(250), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(248), 7,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_POUND,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1782] = 2,
    ACTIONS(254), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(252), 7,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_POUND,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1796] = 2,
    ACTIONS(258), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(256), 7,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_POUND,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1810] = 6,
    ACTIONS(142), 1,
      anon_sym_LBRACE,
    ACTIONS(144), 1,
      anon_sym_COLON,
    ACTIONS(146), 1,
      sym_attribute_name,
    ACTIONS(164), 1,
      anon_sym_GT,
    ACTIONS(260), 1,
      anon_sym_SLASH_GT,
    STATE(24), 4,
      sym_expression,
      sym_attribute,
      sym_directive,
      aux_sym_start_tag_repeat1,
  [1832] = 2,
    ACTIONS(264), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(262), 7,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_POUND,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1846] = 2,
    ACTIONS(268), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(266), 7,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_POUND,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1860] = 5,
    ACTIONS(142), 1,
      anon_sym_LBRACE,
    ACTIONS(144), 1,
      anon_sym_COLON,
    ACTIONS(146), 1,
      sym_attribute_name,
    ACTIONS(270), 1,
      anon_sym_GT,
    STATE(24), 4,
      sym_expression,
      sym_attribute,
      sym_directive,
      aux_sym_start_tag_repeat1,
  [1879] = 2,
    ACTIONS(272), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(274), 6,
      anon_sym_LT_POUND,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [1892] = 2,
    ACTIONS(242), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(240), 6,
      anon_sym_LT_POUND,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [1905] = 2,
    ACTIONS(200), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(198), 6,
      anon_sym_LT_POUND,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [1918] = 2,
    ACTIONS(204), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(202), 6,
      anon_sym_LT_POUND,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [1931] = 2,
    ACTIONS(218), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(216), 6,
      anon_sym_LT_POUND,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [1944] = 2,
    ACTIONS(250), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(248), 6,
      anon_sym_LT_POUND,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [1957] = 2,
    ACTIONS(184), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(182), 6,
      anon_sym_LT_POUND,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [1970] = 2,
    ACTIONS(276), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(278), 6,
      anon_sym_LT_SLASH,
      anon_sym_LT_POUND,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1983] = 2,
    ACTIONS(214), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(212), 6,
      anon_sym_LT_POUND,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [1996] = 2,
    ACTIONS(180), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(178), 6,
      anon_sym_LT_POUND,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [2009] = 2,
    ACTIONS(192), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(190), 6,
      anon_sym_LT_POUND,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [2022] = 2,
    ACTIONS(280), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(282), 6,
      anon_sym_LT_SLASH,
      anon_sym_LT_POUND,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [2035] = 2,
    ACTIONS(284), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(286), 6,
      anon_sym_LT_SLASH,
      anon_sym_LT_POUND,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [2048] = 2,
    ACTIONS(174), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(172), 6,
      anon_sym_LT_POUND,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [2061] = 2,
    ACTIONS(258), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(256), 6,
      anon_sym_LT_POUND,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [2074] = 2,
    ACTIONS(188), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(186), 6,
      anon_sym_LT_POUND,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [2087] = 2,
    ACTIONS(288), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(290), 6,
      anon_sym_LT_POUND,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [2100] = 2,
    ACTIONS(136), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(134), 6,
      anon_sym_LT_POUND,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [2113] = 2,
    ACTIONS(292), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(294), 6,
      anon_sym_LT_POUND,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [2126] = 2,
    ACTIONS(222), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(220), 6,
      anon_sym_LT_POUND,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [2139] = 2,
    ACTIONS(232), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(230), 6,
      anon_sym_LT_POUND,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [2152] = 2,
    ACTIONS(196), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(194), 6,
      anon_sym_LT_POUND,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [2165] = 5,
    ACTIONS(142), 1,
      anon_sym_LBRACE,
    ACTIONS(144), 1,
      anon_sym_COLON,
    ACTIONS(146), 1,
      sym_attribute_name,
    ACTIONS(296), 1,
      anon_sym_GT,
    STATE(60), 4,
      sym_expression,
      sym_attribute,
      sym_directive,
      aux_sym_start_tag_repeat1,
  [2184] = 2,
    ACTIONS(298), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(300), 6,
      anon_sym_LT_SLASH,
      anon_sym_LT_POUND,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [2197] = 2,
    ACTIONS(268), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(266), 6,
      anon_sym_LT_POUND,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [2210] = 2,
    ACTIONS(117), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(115), 6,
      anon_sym_LT_POUND,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [2223] = 2,
    ACTIONS(121), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(119), 6,
      anon_sym_LT_POUND,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [2236] = 2,
    ACTIONS(264), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(262), 6,
      anon_sym_LT_POUND,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [2249] = 2,
    ACTIONS(226), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(224), 6,
      anon_sym_LT_POUND,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [2262] = 2,
    ACTIONS(302), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(304), 6,
      anon_sym_LT_POUND,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [2275] = 2,
    ACTIONS(208), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(206), 6,
      anon_sym_LT_POUND,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [2288] = 2,
    ACTIONS(254), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(252), 6,
      anon_sym_LT_POUND,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [2301] = 2,
    ACTIONS(306), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(308), 6,
      anon_sym_LT_SLASH,
      anon_sym_LT_POUND,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [2314] = 2,
    ACTIONS(310), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(312), 6,
      anon_sym_LT_SLASH,
      anon_sym_LT_POUND,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [2327] = 2,
    ACTIONS(246), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(244), 6,
      anon_sym_LT_POUND,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [2340] = 5,
    ACTIONS(142), 1,
      anon_sym_LBRACE,
    ACTIONS(314), 1,
      anon_sym_SQUOTE,
    ACTIONS(316), 1,
      anon_sym_DQUOTE,
    ACTIONS(318), 1,
      sym_attribute_value,
    STATE(110), 2,
      sym_expression,
      sym_quoted_attribute_value,
  [2357] = 5,
    ACTIONS(142), 1,
      anon_sym_LBRACE,
    ACTIONS(314), 1,
      anon_sym_SQUOTE,
    ACTIONS(316), 1,
      anon_sym_DQUOTE,
    ACTIONS(320), 1,
      sym_attribute_value,
    STATE(112), 2,
      sym_expression,
      sym_quoted_attribute_value,
  [2374] = 3,
    ACTIONS(324), 1,
      anon_sym_DOT,
    ACTIONS(326), 1,
      sym_attribute_name,
    ACTIONS(322), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      anon_sym_COLON,
  [2387] = 2,
    ACTIONS(330), 1,
      anon_sym_EQ,
    ACTIONS(328), 5,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_attribute_name,
  [2398] = 5,
    ACTIONS(332), 1,
      anon_sym_LBRACE,
    ACTIONS(334), 1,
      anon_sym_RBRACE,
    ACTIONS(336), 1,
      aux_sym__expression_value_token1,
    STATE(114), 1,
      aux_sym_expression_repeat1,
    STATE(130), 1,
      sym__expression_value,
  [2414] = 1,
    ACTIONS(338), 5,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_attribute_name,
  [2422] = 5,
    ACTIONS(340), 1,
      sym_tag_name,
    ACTIONS(342), 1,
      anon_sym_DOT,
    ACTIONS(344), 1,
      sym__module,
    STATE(29), 1,
      sym_component_name,
    STATE(30), 1,
      sym_function_component_name,
  [2438] = 5,
    ACTIONS(332), 1,
      anon_sym_LBRACE,
    ACTIONS(336), 1,
      aux_sym__expression_value_token1,
    ACTIONS(346), 1,
      anon_sym_RBRACE,
    STATE(114), 1,
      aux_sym_expression_repeat1,
    STATE(130), 1,
      sym__expression_value,
  [2454] = 2,
    STATE(125), 1,
      sym_block_name,
    ACTIONS(234), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_for,
      anon_sym_case,
  [2464] = 2,
    STATE(180), 1,
      sym_block_name,
    ACTIONS(348), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_for,
      anon_sym_case,
  [2474] = 5,
    ACTIONS(332), 1,
      anon_sym_LBRACE,
    ACTIONS(336), 1,
      aux_sym__expression_value_token1,
    ACTIONS(350), 1,
      anon_sym_RBRACE,
    STATE(107), 1,
      aux_sym_expression_repeat1,
    STATE(130), 1,
      sym__expression_value,
  [2490] = 5,
    ACTIONS(332), 1,
      anon_sym_LBRACE,
    ACTIONS(336), 1,
      aux_sym__expression_value_token1,
    ACTIONS(352), 1,
      anon_sym_RBRACE,
    STATE(114), 1,
      aux_sym_expression_repeat1,
    STATE(130), 1,
      sym__expression_value,
  [2506] = 1,
    ACTIONS(262), 5,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_attribute_name,
  [2514] = 1,
    ACTIONS(172), 5,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_attribute_name,
  [2522] = 1,
    ACTIONS(354), 5,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_attribute_name,
  [2530] = 5,
    ACTIONS(332), 1,
      anon_sym_LBRACE,
    ACTIONS(336), 1,
      aux_sym__expression_value_token1,
    ACTIONS(356), 1,
      anon_sym_RBRACE,
    STATE(103), 1,
      aux_sym_expression_repeat1,
    STATE(130), 1,
      sym__expression_value,
  [2546] = 1,
    ACTIONS(358), 5,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_attribute_name,
  [2554] = 1,
    ACTIONS(360), 5,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_attribute_name,
  [2562] = 5,
    ACTIONS(362), 1,
      anon_sym_LBRACE,
    ACTIONS(365), 1,
      anon_sym_RBRACE,
    ACTIONS(367), 1,
      aux_sym__expression_value_token1,
    STATE(114), 1,
      aux_sym_expression_repeat1,
    STATE(130), 1,
      sym__expression_value,
  [2578] = 5,
    ACTIONS(332), 1,
      anon_sym_LBRACE,
    ACTIONS(336), 1,
      aux_sym__expression_value_token1,
    ACTIONS(370), 1,
      anon_sym_RBRACE,
    STATE(100), 1,
      aux_sym_expression_repeat1,
    STATE(130), 1,
      sym__expression_value,
  [2594] = 1,
    ACTIONS(372), 5,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_attribute_name,
  [2602] = 5,
    ACTIONS(342), 1,
      anon_sym_DOT,
    ACTIONS(344), 1,
      sym__module,
    ACTIONS(374), 1,
      sym_tag_name,
    STATE(32), 1,
      sym_function_component_name,
    STATE(33), 1,
      sym_component_name,
  [2618] = 1,
    ACTIONS(376), 5,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_attribute_name,
  [2626] = 2,
    STATE(165), 1,
      sym_block_name,
    ACTIONS(348), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_for,
      anon_sym_case,
  [2636] = 1,
    ACTIONS(378), 4,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_attribute_name,
  [2643] = 4,
    ACTIONS(380), 1,
      aux_sym__public_comment_token1,
    ACTIONS(382), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    STATE(136), 1,
      aux_sym__public_comment_repeat1,
    STATE(174), 1,
      sym__private_comment,
  [2656] = 4,
    ACTIONS(380), 1,
      aux_sym__public_comment_token1,
    ACTIONS(382), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    STATE(135), 1,
      aux_sym__public_comment_repeat1,
    STATE(166), 1,
      sym__private_comment,
  [2669] = 4,
    ACTIONS(384), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(386), 1,
      aux_sym__public_comment_token1,
    STATE(133), 1,
      aux_sym__public_comment_repeat1,
    STATE(164), 1,
      sym__public_comment,
  [2682] = 4,
    ACTIONS(384), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(386), 1,
      aux_sym__public_comment_token1,
    STATE(142), 1,
      aux_sym__public_comment_repeat1,
    STATE(185), 1,
      sym__public_comment,
  [2695] = 4,
    ACTIONS(388), 1,
      anon_sym_RBRACE,
    ACTIONS(390), 1,
      sym__code,
    STATE(138), 1,
      aux_sym_expression_value_repeat1,
    STATE(181), 1,
      sym_expression_value,
  [2708] = 4,
    ACTIONS(390), 1,
      sym__code,
    ACTIONS(392), 1,
      anon_sym_RBRACE,
    STATE(138), 1,
      aux_sym_expression_value_repeat1,
    STATE(171), 1,
      sym_expression_value,
  [2721] = 4,
    ACTIONS(394), 1,
      anon_sym_LBRACE,
    ACTIONS(396), 1,
      anon_sym_RBRACE,
    ACTIONS(398), 1,
      aux_sym__expression_value_token1,
    STATE(175), 1,
      sym__expression_value,
  [2734] = 4,
    ACTIONS(394), 1,
      anon_sym_LBRACE,
    ACTIONS(400), 1,
      anon_sym_RBRACE,
    ACTIONS(402), 1,
      aux_sym__expression_value_token1,
    STATE(182), 1,
      sym__expression_value,
  [2747] = 3,
    ACTIONS(404), 1,
      anon_sym_LT_SLASH_POUND,
    ACTIONS(406), 1,
      sym_text,
    STATE(47), 1,
      sym_end_macro_component,
  [2757] = 2,
    ACTIONS(410), 1,
      aux_sym__expression_value_token1,
    ACTIONS(408), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2765] = 2,
    ACTIONS(414), 1,
      aux_sym__expression_value_token1,
    ACTIONS(412), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2773] = 3,
    ACTIONS(342), 1,
      anon_sym_DOT,
    ACTIONS(416), 1,
      sym__module,
    STATE(178), 1,
      sym_function_component_name,
  [2783] = 3,
    ACTIONS(386), 1,
      aux_sym__public_comment_token1,
    ACTIONS(418), 1,
      anon_sym_DASH_DASH_GT,
    STATE(139), 1,
      aux_sym__public_comment_repeat1,
  [2793] = 3,
    ACTIONS(420), 1,
      aux_sym__public_comment_token1,
    ACTIONS(423), 1,
      anon_sym_DASH_DASH_RBRACE,
    STATE(134), 1,
      aux_sym__public_comment_repeat1,
  [2803] = 3,
    ACTIONS(380), 1,
      aux_sym__public_comment_token1,
    ACTIONS(425), 1,
      anon_sym_DASH_DASH_RBRACE,
    STATE(134), 1,
      aux_sym__public_comment_repeat1,
  [2813] = 3,
    ACTIONS(380), 1,
      aux_sym__public_comment_token1,
    ACTIONS(427), 1,
      anon_sym_DASH_DASH_RBRACE,
    STATE(134), 1,
      aux_sym__public_comment_repeat1,
  [2823] = 3,
    ACTIONS(429), 1,
      anon_sym_RBRACE,
    ACTIONS(431), 1,
      sym__code,
    STATE(137), 1,
      aux_sym_expression_value_repeat1,
  [2833] = 3,
    ACTIONS(434), 1,
      anon_sym_RBRACE,
    ACTIONS(436), 1,
      sym__code,
    STATE(137), 1,
      aux_sym_expression_value_repeat1,
  [2843] = 3,
    ACTIONS(423), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(438), 1,
      aux_sym__public_comment_token1,
    STATE(139), 1,
      aux_sym__public_comment_repeat1,
  [2853] = 2,
    ACTIONS(443), 1,
      aux_sym__expression_value_token1,
    ACTIONS(441), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2861] = 3,
    ACTIONS(445), 1,
      anon_sym_LT_SLASH_POUND,
    ACTIONS(447), 1,
      sym_text,
    STATE(80), 1,
      sym_end_macro_component,
  [2871] = 3,
    ACTIONS(386), 1,
      aux_sym__public_comment_token1,
    ACTIONS(449), 1,
      anon_sym_DASH_DASH_GT,
    STATE(139), 1,
      aux_sym__public_comment_repeat1,
  [2881] = 3,
    ACTIONS(342), 1,
      anon_sym_DOT,
    ACTIONS(416), 1,
      sym__module,
    STATE(168), 1,
      sym_function_component_name,
  [2891] = 1,
    ACTIONS(451), 2,
      aux_sym__public_comment_token1,
      anon_sym_DASH_DASH_RBRACE,
  [2896] = 1,
    ACTIONS(453), 2,
      anon_sym_RBRACE,
      sym__code,
  [2901] = 2,
    ACTIONS(455), 1,
      sym__module,
    STATE(172), 1,
      sym_component_name,
  [2908] = 2,
    ACTIONS(457), 1,
      sym__module,
    STATE(179), 1,
      sym_macro_component_name,
  [2915] = 2,
    ACTIONS(457), 1,
      sym__module,
    STATE(159), 1,
      sym_macro_component_name,
  [2922] = 2,
    ACTIONS(455), 1,
      sym__module,
    STATE(177), 1,
      sym_component_name,
  [2929] = 2,
    ACTIONS(404), 1,
      anon_sym_LT_SLASH_POUND,
    STATE(50), 1,
      sym_end_macro_component,
  [2936] = 2,
    ACTIONS(459), 1,
      anon_sym_DQUOTE,
    ACTIONS(461), 1,
      aux_sym_quoted_attribute_value_token2,
  [2943] = 2,
    ACTIONS(459), 1,
      anon_sym_SQUOTE,
    ACTIONS(463), 1,
      aux_sym_quoted_attribute_value_token1,
  [2950] = 1,
    ACTIONS(465), 2,
      anon_sym_LT_SLASH_POUND,
      sym_text,
  [2955] = 1,
    ACTIONS(451), 2,
      aux_sym__public_comment_token1,
      anon_sym_DASH_DASH_GT,
  [2960] = 2,
    ACTIONS(457), 1,
      sym__module,
    STATE(83), 1,
      sym_macro_component_name,
  [2967] = 2,
    ACTIONS(445), 1,
      anon_sym_LT_SLASH_POUND,
    STATE(81), 1,
      sym_end_macro_component,
  [2974] = 1,
    ACTIONS(467), 2,
      anon_sym_LT_SLASH_POUND,
      sym_text,
  [2979] = 1,
    ACTIONS(469), 2,
      anon_sym_RBRACE,
      sym__code,
  [2984] = 1,
    ACTIONS(471), 1,
      anon_sym_GT,
  [2988] = 1,
    ACTIONS(473), 1,
      anon_sym_GT,
  [2992] = 1,
    ACTIONS(475), 1,
      sym__function,
  [2996] = 1,
    ACTIONS(477), 1,
      anon_sym_EQ,
  [3000] = 1,
    ACTIONS(479), 1,
      anon_sym_EQ,
  [3004] = 1,
    ACTIONS(481), 1,
      anon_sym_DASH_DASH_GT,
  [3008] = 1,
    ACTIONS(483), 1,
      anon_sym_RBRACE,
  [3012] = 1,
    ACTIONS(485), 1,
      anon_sym_DASH_DASH_RBRACE,
  [3016] = 1,
    ACTIONS(487), 1,
      anon_sym_RBRACE,
  [3020] = 1,
    ACTIONS(489), 1,
      anon_sym_GT,
  [3024] = 1,
    ACTIONS(324), 1,
      anon_sym_DOT,
  [3028] = 1,
    ACTIONS(443), 1,
      anon_sym_RBRACE,
  [3032] = 1,
    ACTIONS(491), 1,
      anon_sym_RBRACE,
  [3036] = 1,
    ACTIONS(493), 1,
      anon_sym_GT,
  [3040] = 1,
    ACTIONS(322), 1,
      anon_sym_GT,
  [3044] = 1,
    ACTIONS(495), 1,
      anon_sym_DASH_DASH_RBRACE,
  [3048] = 1,
    ACTIONS(497), 1,
      anon_sym_RBRACE,
  [3052] = 1,
    ACTIONS(499), 1,
      anon_sym_GT,
  [3056] = 1,
    ACTIONS(501), 1,
      anon_sym_GT,
  [3060] = 1,
    ACTIONS(503), 1,
      anon_sym_GT,
  [3064] = 1,
    ACTIONS(505), 1,
      anon_sym_GT,
  [3068] = 1,
    ACTIONS(507), 1,
      anon_sym_RBRACE,
  [3072] = 1,
    ACTIONS(509), 1,
      anon_sym_RBRACE,
  [3076] = 1,
    ACTIONS(511), 1,
      anon_sym_RBRACE,
  [3080] = 1,
    ACTIONS(513), 1,
      ts_builtin_sym_end,
  [3084] = 1,
    ACTIONS(515), 1,
      sym__function,
  [3088] = 1,
    ACTIONS(517), 1,
      anon_sym_DASH_DASH_GT,
  [3092] = 1,
    ACTIONS(519), 1,
      sym_tag_name,
  [3096] = 1,
    ACTIONS(521), 1,
      anon_sym_SQUOTE,
  [3100] = 1,
    ACTIONS(521), 1,
      anon_sym_DQUOTE,
  [3104] = 1,
    ACTIONS(523), 1,
      sym_tag_name,
  [3108] = 1,
    ACTIONS(414), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 64,
  [SMALL_STATE(4)] = 128,
  [SMALL_STATE(5)] = 192,
  [SMALL_STATE(6)] = 256,
  [SMALL_STATE(7)] = 319,
  [SMALL_STATE(8)] = 382,
  [SMALL_STATE(9)] = 445,
  [SMALL_STATE(10)] = 508,
  [SMALL_STATE(11)] = 571,
  [SMALL_STATE(12)] = 634,
  [SMALL_STATE(13)] = 697,
  [SMALL_STATE(14)] = 760,
  [SMALL_STATE(15)] = 823,
  [SMALL_STATE(16)] = 886,
  [SMALL_STATE(17)] = 949,
  [SMALL_STATE(18)] = 1012,
  [SMALL_STATE(19)] = 1073,
  [SMALL_STATE(20)] = 1134,
  [SMALL_STATE(21)] = 1194,
  [SMALL_STATE(22)] = 1218,
  [SMALL_STATE(23)] = 1233,
  [SMALL_STATE(24)] = 1248,
  [SMALL_STATE(25)] = 1268,
  [SMALL_STATE(26)] = 1282,
  [SMALL_STATE(27)] = 1304,
  [SMALL_STATE(28)] = 1326,
  [SMALL_STATE(29)] = 1348,
  [SMALL_STATE(30)] = 1370,
  [SMALL_STATE(31)] = 1392,
  [SMALL_STATE(32)] = 1414,
  [SMALL_STATE(33)] = 1436,
  [SMALL_STATE(34)] = 1458,
  [SMALL_STATE(35)] = 1472,
  [SMALL_STATE(36)] = 1494,
  [SMALL_STATE(37)] = 1508,
  [SMALL_STATE(38)] = 1522,
  [SMALL_STATE(39)] = 1536,
  [SMALL_STATE(40)] = 1550,
  [SMALL_STATE(41)] = 1564,
  [SMALL_STATE(42)] = 1578,
  [SMALL_STATE(43)] = 1592,
  [SMALL_STATE(44)] = 1606,
  [SMALL_STATE(45)] = 1628,
  [SMALL_STATE(46)] = 1642,
  [SMALL_STATE(47)] = 1656,
  [SMALL_STATE(48)] = 1670,
  [SMALL_STATE(49)] = 1684,
  [SMALL_STATE(50)] = 1706,
  [SMALL_STATE(51)] = 1720,
  [SMALL_STATE(52)] = 1740,
  [SMALL_STATE(53)] = 1754,
  [SMALL_STATE(54)] = 1768,
  [SMALL_STATE(55)] = 1782,
  [SMALL_STATE(56)] = 1796,
  [SMALL_STATE(57)] = 1810,
  [SMALL_STATE(58)] = 1832,
  [SMALL_STATE(59)] = 1846,
  [SMALL_STATE(60)] = 1860,
  [SMALL_STATE(61)] = 1879,
  [SMALL_STATE(62)] = 1892,
  [SMALL_STATE(63)] = 1905,
  [SMALL_STATE(64)] = 1918,
  [SMALL_STATE(65)] = 1931,
  [SMALL_STATE(66)] = 1944,
  [SMALL_STATE(67)] = 1957,
  [SMALL_STATE(68)] = 1970,
  [SMALL_STATE(69)] = 1983,
  [SMALL_STATE(70)] = 1996,
  [SMALL_STATE(71)] = 2009,
  [SMALL_STATE(72)] = 2022,
  [SMALL_STATE(73)] = 2035,
  [SMALL_STATE(74)] = 2048,
  [SMALL_STATE(75)] = 2061,
  [SMALL_STATE(76)] = 2074,
  [SMALL_STATE(77)] = 2087,
  [SMALL_STATE(78)] = 2100,
  [SMALL_STATE(79)] = 2113,
  [SMALL_STATE(80)] = 2126,
  [SMALL_STATE(81)] = 2139,
  [SMALL_STATE(82)] = 2152,
  [SMALL_STATE(83)] = 2165,
  [SMALL_STATE(84)] = 2184,
  [SMALL_STATE(85)] = 2197,
  [SMALL_STATE(86)] = 2210,
  [SMALL_STATE(87)] = 2223,
  [SMALL_STATE(88)] = 2236,
  [SMALL_STATE(89)] = 2249,
  [SMALL_STATE(90)] = 2262,
  [SMALL_STATE(91)] = 2275,
  [SMALL_STATE(92)] = 2288,
  [SMALL_STATE(93)] = 2301,
  [SMALL_STATE(94)] = 2314,
  [SMALL_STATE(95)] = 2327,
  [SMALL_STATE(96)] = 2340,
  [SMALL_STATE(97)] = 2357,
  [SMALL_STATE(98)] = 2374,
  [SMALL_STATE(99)] = 2387,
  [SMALL_STATE(100)] = 2398,
  [SMALL_STATE(101)] = 2414,
  [SMALL_STATE(102)] = 2422,
  [SMALL_STATE(103)] = 2438,
  [SMALL_STATE(104)] = 2454,
  [SMALL_STATE(105)] = 2464,
  [SMALL_STATE(106)] = 2474,
  [SMALL_STATE(107)] = 2490,
  [SMALL_STATE(108)] = 2506,
  [SMALL_STATE(109)] = 2514,
  [SMALL_STATE(110)] = 2522,
  [SMALL_STATE(111)] = 2530,
  [SMALL_STATE(112)] = 2546,
  [SMALL_STATE(113)] = 2554,
  [SMALL_STATE(114)] = 2562,
  [SMALL_STATE(115)] = 2578,
  [SMALL_STATE(116)] = 2594,
  [SMALL_STATE(117)] = 2602,
  [SMALL_STATE(118)] = 2618,
  [SMALL_STATE(119)] = 2626,
  [SMALL_STATE(120)] = 2636,
  [SMALL_STATE(121)] = 2643,
  [SMALL_STATE(122)] = 2656,
  [SMALL_STATE(123)] = 2669,
  [SMALL_STATE(124)] = 2682,
  [SMALL_STATE(125)] = 2695,
  [SMALL_STATE(126)] = 2708,
  [SMALL_STATE(127)] = 2721,
  [SMALL_STATE(128)] = 2734,
  [SMALL_STATE(129)] = 2747,
  [SMALL_STATE(130)] = 2757,
  [SMALL_STATE(131)] = 2765,
  [SMALL_STATE(132)] = 2773,
  [SMALL_STATE(133)] = 2783,
  [SMALL_STATE(134)] = 2793,
  [SMALL_STATE(135)] = 2803,
  [SMALL_STATE(136)] = 2813,
  [SMALL_STATE(137)] = 2823,
  [SMALL_STATE(138)] = 2833,
  [SMALL_STATE(139)] = 2843,
  [SMALL_STATE(140)] = 2853,
  [SMALL_STATE(141)] = 2861,
  [SMALL_STATE(142)] = 2871,
  [SMALL_STATE(143)] = 2881,
  [SMALL_STATE(144)] = 2891,
  [SMALL_STATE(145)] = 2896,
  [SMALL_STATE(146)] = 2901,
  [SMALL_STATE(147)] = 2908,
  [SMALL_STATE(148)] = 2915,
  [SMALL_STATE(149)] = 2922,
  [SMALL_STATE(150)] = 2929,
  [SMALL_STATE(151)] = 2936,
  [SMALL_STATE(152)] = 2943,
  [SMALL_STATE(153)] = 2950,
  [SMALL_STATE(154)] = 2955,
  [SMALL_STATE(155)] = 2960,
  [SMALL_STATE(156)] = 2967,
  [SMALL_STATE(157)] = 2974,
  [SMALL_STATE(158)] = 2979,
  [SMALL_STATE(159)] = 2984,
  [SMALL_STATE(160)] = 2988,
  [SMALL_STATE(161)] = 2992,
  [SMALL_STATE(162)] = 2996,
  [SMALL_STATE(163)] = 3000,
  [SMALL_STATE(164)] = 3004,
  [SMALL_STATE(165)] = 3008,
  [SMALL_STATE(166)] = 3012,
  [SMALL_STATE(167)] = 3016,
  [SMALL_STATE(168)] = 3020,
  [SMALL_STATE(169)] = 3024,
  [SMALL_STATE(170)] = 3028,
  [SMALL_STATE(171)] = 3032,
  [SMALL_STATE(172)] = 3036,
  [SMALL_STATE(173)] = 3040,
  [SMALL_STATE(174)] = 3044,
  [SMALL_STATE(175)] = 3048,
  [SMALL_STATE(176)] = 3052,
  [SMALL_STATE(177)] = 3056,
  [SMALL_STATE(178)] = 3060,
  [SMALL_STATE(179)] = 3064,
  [SMALL_STATE(180)] = 3068,
  [SMALL_STATE(181)] = 3072,
  [SMALL_STATE(182)] = 3076,
  [SMALL_STATE(183)] = 3080,
  [SMALL_STATE(184)] = 3084,
  [SMALL_STATE(185)] = 3088,
  [SMALL_STATE(186)] = 3092,
  [SMALL_STATE(187)] = 3096,
  [SMALL_STATE(188)] = 3100,
  [SMALL_STATE(189)] = 3104,
  [SMALL_STATE(190)] = 3108,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(102),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(155),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(111),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(124),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(121),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(104),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(18),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(117),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(155),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(106),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(123),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(122),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(51),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(19),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__private_comment, 3, .production_id = 2),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__private_comment, 3, .production_id = 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__public_comment, 3, .production_id = 2),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__public_comment, 3, .production_id = 2),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(115),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(21),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(99),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 1),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 1),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 1),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 1),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_block, 3),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_block, 3),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_macro_component, 3),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_macro_component, 3),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_function_component, 3),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_function_component, 3),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_component, 3),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_component, 3),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_tag, 3),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_tag, 3),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_component, 3),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_component, 3),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_function_component, 4),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_function_component, 4),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 2),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 2),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_function_component, 3),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_function_component, 3),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 3),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 3),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_component, 4),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_component, 4),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 3),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 3),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 4),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 4),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3, .production_id = 1),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3, .production_id = 1),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_block, 3),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_block, 3),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 3),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 3),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_component, 3),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_component, 3),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_function_component, 3),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_function_component, 3),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subblock, 4),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subblock, 4),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_block, 4),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_block, 4),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_function_component, 4),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_function_component, 4),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subblock, 3),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subblock, 3),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_component, 4),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_component, 4),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 4),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 4),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_name, 1),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_name, 1),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_component_name, 3),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 4),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [362] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(128),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2),
  [367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(130),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_component_name, 2),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_component_name, 1),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 1),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 1),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_value, 3),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_value, 3),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [420] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__public_comment_repeat1, 2), SHIFT_REPEAT(144),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__public_comment_repeat1, 2),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_value_repeat1, 2),
  [431] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_value_repeat1, 2), SHIFT_REPEAT(137),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_value, 1),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [438] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__public_comment_repeat1, 2), SHIFT_REPEAT(154),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_value, 2),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_value, 2),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__public_comment_repeat1, 1),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subblock_name, 1),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_macro_component, 3),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_macro_component, 4),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_name, 1),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_name, 1),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_name, 1),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [513] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
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
