/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Skeleton implementation for Bison GLR parsers in C

   Copyright (C) 2002-2013 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C GLR parser skeleton written by Paul Hilfinger.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "glr.c"

/* Pure parsers.  */
#define YYPURE 0






/* First part of user declarations.  */
#line 1 "pascal.y" /* glr.c:207  */

/*
* pascal.y
*
* Pascal grammar in Yacc format, based originally on BNF given
* in "Standard Pascal -- User Reference Manual", by Doug Cooper.
* This in turn is the BNF given by the ANSI and ISO Pascal standards,
* and so, is PUBLIC DOMAIN. The grammar is for ISO Level 0 Pascal.
* The grammar has been massaged somewhat to make it LALR, and added
* the following extensions.
*
* constant expressions
* otherwise statement in a case
* productions to correctly match else's with if's
* beginnings of a separate compilation facility
*/

#include<stdio.h>

int cnt=0, tok=0;


#line 77 "pascal.tab.c" /* glr.c:207  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

#include "pascal.tab.h"

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Default (constant) value used for initialization for null
   right-hand sides.  Unlike the standard yacc.c template, here we set
   the default value of $$ to a zeroed-out value.  Since the default
   value is undefined, this behavior is technically correct.  */
static YYSTYPE yyval_default;

/* Copy the second part of user declarations.  */

#line 105 "pascal.tab.c" /* glr.c:230  */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YYFREE
# define YYFREE free
#endif
#ifndef YYMALLOC
# define YYMALLOC malloc
#endif
#ifndef YYREALLOC
# define YYREALLOC realloc
#endif

#define YYSIZEMAX ((size_t) -1)

#ifdef __cplusplus
   typedef bool yybool;
#else
   typedef unsigned char yybool;
#endif
#define yytrue 1
#define yyfalse 0

#ifndef YYSETJMP
# include <setjmp.h>
# define YYJMP_BUF jmp_buf
# define YYSETJMP(Env) setjmp (Env)
/* Pacify clang.  */
# define YYLONGJMP(Env, Val) (longjmp (Env, Val), YYASSERT (0))
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#ifndef YYASSERT
# define YYASSERT(Condition) ((void) ((Condition) || (abort (), 0)))
#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  17
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   580

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  71
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  136
/* YYNRULES -- Number of rules.  */
#define YYNRULES  260
/* YYNRULES -- Number of states.  */
#define YYNSTATES  418
/* YYMAXRHS -- Maximum number of symbols on right-hand side of rule.  */
#define YYMAXRHS 9
/* YYMAXLEFT -- Maximum number of symbols to the left of a handle
   accessed by $0, $-1, etc., in any rule.  */
#define YYMAXLEFT 0

/* YYTRANSLATE(X) -- Bison symbol number corresponding to X.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   325

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70
};

#if YYDEBUG
/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,    39,    39,    41,    46,    48,    53,    55,    60,    62,
      67,    72,    77,    79,    84,    86,    91,    93,    98,   103,
     105,   110,   112,   117,   122,   124,   129,   131,   136,   138,
     143,   145,   150,   152,   157,   159,   161,   163,   168,   170,
     172,   177,   179,   184,   186,   188,   193,   195,   200,   202,
     207,   212,   214,   219,   221,   223,   228,   230,   235,   240,
     245,   247,   252,   254,   256,   258,   263,   268,   270,   275,
     280,   282,   287,   292,   294,   296,   301,   303,   308,   313,
     315,   317,   322,   324,   329,   331,   336,   338,   340,   345,
     347,   352,   354,   359,   364,   369,   374,   379,   384,   389,
     394,   396,   401,   403,   408,   413,   415,   420,   422,   427,
     429,   434,   436,   441,   443,   448,   450,   455,   460,   462,
     467,   469,   471,   473,   478,   483,   488,   493,   498,   503,
     508,   510,   512,   517,   519,   524,   529,   534,   539,   544,
     549,   551,   556,   558,   563,   565,   570,   572,   577,   579,
     581,   583,   585,   587,   589,   591,   593,   595,   597,   602,
     604,   606,   608,   613,   618,   623,   628,   633,   638,   643,
     648,   650,   655,   660,   665,   667,   669,   671,   676,   681,
     683,   688,   693,   698,   700,   705,   710,   712,   717,   719,
     721,   726,   731,   733,   735,   737,   742,   747,   749,   754,
     759,   761,   766,   771,   776,   778,   783,   788,   790,   795,
     800,   802,   807,   809,   814,   816,   821,   823,   828,   830,
     835,   837,   839,   841,   843,   845,   850,   852,   854,   859,
     861,   866,   871,   876,   881,   883,   888,   890,   895,   897,
     902,   904,   906,   908,   913,   915,   917,   919,   921,   923,
     925,   930,   932,   934,   936,   938,   940,   942,   947,   952,
     957
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "AND", "ARRAY", "ASSIGNMENT", "CASE",
  "CHARACTER_STRING", "COLON", "COMMA", "CONST", "DIGSEQ", "DIV", "DO",
  "DOT", "DOTDOT", "DOWNTO", "ELSE", "END", "EQUAL", "EXTERNAL", "FOR",
  "FORWARD", "FUNCTION", "GE", "GOTO", "GT", "IDENTIFIER", "IF", "IN",
  "LABEL", "LBRAC", "LE", "LPAREN", "LT", "MINUS", "MOD", "NIL", "NOT",
  "NOTEQUAL", "OF", "OR", "OTHERWISE", "PACKED", "PBEGIN", "PFILE", "PLUS",
  "PROCEDURE", "PROGRAM", "RBRAC", "REALNUMBER", "RECORD", "REPEAT",
  "RPAREN", "SEMICOLON", "SET", "SLASH", "STAR", "STARSTAR", "THEN", "TO",
  "TYPE", "UNTIL", "USES", "UPARROW", "VAR", "WHILE", "WITH", "XOR", "SHL",
  "SHR", "$accept", "file", "program", "program_heading",
  "identifier_list", "block", "module", "uses_declaration_part",
  "label_declaration_part", "label_list", "label",
  "constant_definition_part", "constant_list", "constant_definition",
  "cexpression", "csimple_expression", "cterm", "cfactor",
  "cexponentiation", "cprimary", "constant", "sign", "non_string",
  "type_definition_part", "type_definition_list", "type_definition",
  "type_denoter", "new_type", "new_ordinal_type", "enumerated_type",
  "subrange_type", "new_structured_type", "structured_type", "array_type",
  "index_list", "index_type", "ordinal_type", "component_type",
  "record_type", "record_section_list", "record_section", "variant_part",
  "variant_selector", "variant_list", "variant", "case_constant_list",
  "case_constant", "tag_field", "tag_type", "set_type", "base_type",
  "file_type", "new_pointer_type", "domain_type",
  "variable_declaration_part", "variable_declaration_list",
  "variable_declaration", "procedure_and_function_declaration_part",
  "proc_or_func_declaration_list", "proc_or_func_declaration",
  "procedure_declaration", "procedure_heading", "directive",
  "formal_parameter_list", "formal_parameter_section_list",
  "formal_parameter_section", "value_parameter_specification",
  "variable_parameter_specification", "procedural_parameter_specification",
  "functional_parameter_specification", "procedure_identification",
  "procedure_block", "function_declaration", "function_heading",
  "result_type", "function_identification", "function_block",
  "statement_part", "compound_statement", "statement_sequence",
  "statement", "open_statement", "closed_statement",
  "non_labeled_closed_statement", "non_labeled_open_statement",
  "repeat_statement", "open_while_statement", "closed_while_statement",
  "open_for_statement", "closed_for_statement", "open_with_statement",
  "closed_with_statement", "open_if_statement", "closed_if_statement",
  "assignment_statement", "variable_access", "indexed_variable",
  "index_expression_list", "index_expression", "field_designator",
  "procedure_statement", "params", "actual_parameter_list",
  "actual_parameter", "goto_statement", "case_statement", "case_index",
  "case_list_element_list", "case_list_element", "otherwisepart",
  "control_variable", "initial_value", "direction", "final_value",
  "record_variable_list", "boolean_expression", "expression",
  "simple_expression", "term", "factor", "exponentiation", "primary",
  "unsigned_constant", "unsigned_number", "unsigned_integer",
  "unsigned_real", "function_designator", "set_constructor",
  "member_designator_list", "member_designator", "addop", "mulop", "relop",
  "identifier", "semicolon", "comma", YY_NULLPTR
};
#endif

#define YYPACT_NINF -302
#define YYTABLE_NINF -185

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const short int yypact[] =
{
     223,    20,    20,    20,    61,  -302,    39,   128,  -302,   100,
      90,  -302,    20,  -302,   163,   138,    39,  -302,  -302,   140,
    -302,   175,   198,    20,   167,  -302,   518,    20,  -302,   214,
    -302,    30,  -302,    90,    20,  -302,   215,    20,   132,  -302,
    -302,   518,  -302,  -302,   525,  -302,  -302,    39,   446,   199,
    -302,  -302,   186,   518,  -302,  -302,  -302,  -302,  -302,    41,
    -302,  -302,  -302,  -302,   175,   167,  -302,   418,    56,    39,
    -302,    20,    20,  -302,    39,  -302,  -302,    39,   217,  -302,
      39,    39,   192,  -302,  -302,  -302,  -302,  -302,  -302,  -302,
    -302,  -302,  -302,  -302,  -302,  -302,   518,   518,  -302,  -302,
    -302,  -302,  -302,  -302,  -302,   518,   525,  -302,    20,  -302,
    -302,   132,   220,  -302,  -302,    20,   146,   221,  -302,    54,
     222,    20,   239,   125,  -302,    39,  -302,  -302,  -302,  -302,
    -302,  -302,  -302,  -302,  -302,  -302,  -302,   249,   418,    20,
     145,  -302,   132,    70,   230,  -302,    70,   140,  -302,   199,
     206,  -302,  -302,  -302,   229,   322,    47,  -302,   418,    20,
      68,     9,  -302,   248,   322,  -302,  -302,   265,  -302,  -302,
    -302,  -302,  -302,    20,   267,  -302,  -302,  -302,  -302,  -302,
    -302,    20,    20,   153,  -302,   152,  -302,  -302,  -302,  -302,
    -302,  -302,  -302,  -302,  -302,  -302,   348,  -302,  -302,  -302,
      50,  -302,  -302,   249,  -302,  -302,  -302,   238,   271,  -302,
     240,   418,  -302,    54,  -302,  -302,  -302,  -302,  -302,  -302,
      20,   145,   207,    20,  -302,   230,   493,    20,   175,   493,
     348,   493,    20,   274,  -302,    44,  -302,  -302,  -302,  -302,
    -302,  -302,  -302,  -302,  -302,  -302,  -302,  -302,  -302,  -302,
    -302,    75,  -302,  -302,  -302,  -302,  -302,   176,   243,   322,
     265,    20,  -302,  -302,   269,  -302,    20,  -302,  -302,   472,
     493,   329,   493,    27,   245,  -302,   446,   199,  -302,  -302,
     231,  -302,  -302,  -302,   257,   288,  -302,  -302,   242,  -302,
     123,   284,    27,    29,  -302,   392,  -302,   348,   493,    20,
     493,  -302,   493,  -302,   418,  -302,   287,    39,  -302,   209,
    -302,  -302,  -302,  -302,  -302,  -302,  -302,   118,   289,   255,
    -302,  -302,   265,   493,   493,   493,   329,  -302,   493,   348,
     493,   348,   348,    20,  -302,  -302,  -302,  -302,  -302,   119,
    -302,  -302,    48,  -302,   301,  -302,   265,   265,   277,   265,
    -302,   493,   493,  -302,   212,   116,  -302,   199,   206,  -302,
    -302,    69,  -302,  -302,   295,  -302,  -302,  -302,  -302,  -302,
      27,  -302,   493,  -302,   493,   493,  -302,  -302,    54,  -302,
     289,  -302,   348,  -302,   530,  -302,  -302,   493,   348,  -302,
    -302,   306,   189,   264,  -302,  -302,   310,  -302,   348,   307,
    -302,  -302,  -302,   493,  -302,    54,  -302,  -302,   122,   348,
    -302,   266,  -302,   304,  -302,  -302,  -302,  -302
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const unsigned short int yydefact[] =
{
      13,     0,     0,     0,     0,     2,     0,     0,     3,    15,
      47,   258,    19,    22,     0,     6,     0,     1,   259,    13,
       5,     0,    20,     0,   101,    21,     0,     0,    12,     0,
      18,     0,    17,    47,    46,    49,     0,     0,   106,   227,
     231,     0,    42,   228,     0,    41,   232,     0,    24,    26,
      28,    31,    32,     0,    36,   226,   229,   230,    34,     0,
       9,     4,   260,    14,     0,   101,    48,     0,     0,     0,
     103,     0,     0,    11,     0,   108,   109,     0,   113,   110,
       0,     0,     0,    37,    23,   251,   256,   254,   257,   255,
     253,   241,   252,   242,   240,   243,     0,     0,   248,   246,
     247,   245,   244,   249,   250,     0,     0,    30,     0,     7,
      16,   106,     0,    40,    43,     0,     0,     0,    45,    81,
       0,     0,     0,     0,    38,     0,    52,    53,    56,    57,
      54,    60,    62,    63,    64,    65,    55,    51,     0,   100,
     136,   128,   105,    13,     0,   114,    13,    13,    35,    27,
      25,    29,    33,     8,     0,     0,     0,    61,     0,     0,
       0,     0,    77,     0,     0,    98,    99,     0,    39,    44,
      50,   104,   102,     0,     0,   107,   116,   115,   129,   111,
     112,     0,     0,     0,   126,     0,   119,   120,   121,   122,
     123,   127,   137,   130,   132,   131,   158,    10,   138,    70,
       0,    68,    69,    71,    58,    72,    97,     0,     0,    83,
      93,     0,    73,    81,    75,    96,    95,    59,   133,   135,
       0,     0,     0,     0,   117,     0,     0,     0,     0,     0,
     158,     0,     0,     0,   151,     0,   141,   142,   143,   147,
     145,   153,   161,   156,   162,   157,   159,   154,   160,   155,
     148,     0,   175,   176,   149,   150,   152,   174,     0,     0,
       0,     0,    78,    76,     0,   134,     0,   124,   118,     0,
       0,     0,     0,   220,     0,   196,   210,   212,   214,   217,
     218,   221,   222,   223,   174,     0,   202,   191,     0,   209,
       0,     0,   208,     0,   174,   158,   139,   158,     0,     0,
       0,   177,     0,   183,     0,    67,    91,    80,    85,     0,
      90,    82,    94,    74,   125,   235,   239,     0,   237,     0,
     225,   216,     0,     0,     0,     0,     0,   233,     0,   158,
       0,   158,   158,     0,   146,   144,   140,   173,   182,     0,
     180,   181,     0,   187,   188,    66,     0,    79,     0,     0,
     234,     0,     0,   224,     0,     0,   198,   213,   211,   215,
     219,     0,   203,   170,   143,   163,   164,   165,   168,   169,
     207,   178,     0,   185,     0,     0,    92,    84,    81,    89,
     236,   238,   158,   192,     0,   205,   204,     0,   158,   179,
     186,   189,     0,     0,   199,   193,   200,   197,   158,     0,
     206,   171,   172,     0,    86,    81,    88,   201,     0,   158,
     190,     0,   194,     0,   166,   167,    87,   195
};

  /* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -302,  -302,  -302,  -302,   -18,    13,  -302,  -302,  -302,  -302,
     -15,   303,  -302,   315,   293,   241,   246,   -19,   235,   299,
    -157,   -23,   224,   311,  -302,   316,   -51,  -302,  -140,  -302,
    -302,  -302,   236,  -302,  -302,    92,   194,    59,  -302,   -14,
    -206,  -205,  -302,  -302,    23,  -301,    22,  -302,   113,  -302,
    -302,  -302,  -302,  -302,   313,  -302,   247,   273,  -302,   251,
    -302,  -116,   234,   317,  -302,   157,  -302,  -302,  -302,  -302,
    -302,  -302,  -302,  -113,   165,  -302,   244,  -302,   253,   164,
    -274,  -263,  -278,   101,   104,  -302,  -302,  -302,  -302,  -302,
    -302,  -302,  -302,  -302,  -302,  -184,  -302,  -302,    31,  -302,
    -302,   117,  -302,    28,  -302,  -302,  -302,  -302,    21,  -302,
    -302,  -302,  -302,  -302,  -302,  -214,    37,    86,    93,  -237,
      95,   147,   143,  -302,  -302,  -302,  -302,  -302,  -302,    72,
    -256,  -240,   150,    -1,    -2,   -26
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const short int yydefgoto[] =
{
      -1,     4,     5,     6,   160,   192,     8,     9,    22,    31,
     233,    10,    12,    13,    47,    48,    49,    50,    51,    52,
     122,   272,   124,    24,    34,    35,   205,   126,   127,   128,
     129,   130,   131,   132,   200,   201,   202,   206,   133,   161,
     162,   163,   207,   307,   308,   309,   310,   208,   209,   134,
     216,   135,   136,   165,    38,    69,    70,    73,    74,    75,
      76,    77,   179,   174,   185,   186,   187,   188,   189,   190,
      78,   180,    79,    80,   218,    81,   194,   197,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   273,   252,   339,   340,   253,
     254,   303,   342,   343,   255,   256,   274,   355,   356,   398,
     285,   361,   387,   399,   293,   288,   289,   276,   277,   278,
     279,   280,   281,    55,    56,    57,   282,   283,   317,   318,
      96,   105,    97,   284,   297,   349
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const short int yytable[] =
{
      14,    15,    16,    53,    19,    64,    32,   263,   264,    59,
     217,    14,   251,     7,    28,   199,   125,   291,    53,    68,
     323,   354,    36,   336,   199,    58,    60,   212,   184,    63,
      53,   191,    29,    36,   107,   321,    60,   325,    62,    62,
      58,   299,   332,    58,   123,    84,   251,    11,   292,   110,
     108,   364,    58,   367,   369,   363,   108,    62,   300,    62,
     159,    17,   296,    18,   138,   108,   137,   139,   366,   368,
     140,   141,   142,    53,    53,   143,   211,   108,   146,   147,
     298,    11,    53,   354,    18,   385,   151,   171,   359,   299,
     176,   301,   177,    18,   109,    58,    58,   156,    18,   258,
     204,   373,   323,   306,    58,    58,   300,   153,   394,   184,
     402,   251,   191,   251,    60,   123,   365,   325,    60,   199,
     166,    68,   169,   170,   408,   401,   183,    62,    62,   386,
      21,   415,   123,     3,   383,   123,   114,   137,    60,   301,
     412,   123,    20,    60,   123,   251,   414,   251,   251,   370,
     112,    23,    11,   173,   203,    71,   178,   137,   210,   213,
     262,   223,   108,   203,   222,   306,   169,   350,   371,    54,
      18,    27,   219,   393,   259,   118,    18,    18,   144,    72,
     221,    60,    26,   225,    54,   330,    30,    54,   123,   376,
     306,   117,   306,  -184,  -184,   257,    54,   119,   251,   263,
     411,   120,    98,     3,   251,   224,    18,   183,     1,   302,
     137,    99,    60,   287,   251,   266,   108,   348,    62,   219,
     382,    62,   267,   -20,    60,   251,   286,   306,    61,   257,
    -184,   294,    37,     1,    67,   100,   123,   123,  -184,    54,
      54,    91,   404,    18,   106,   148,   -13,    93,    54,    54,
     144,   155,    94,   181,   167,   101,   102,    11,   203,   169,
     312,   158,   164,   275,   -44,   314,   214,   333,   103,   104,
     -13,     2,   113,   196,    95,   220,   114,    72,   260,   261,
     -94,   123,   295,   304,   -13,   322,     3,   313,   -13,   326,
     302,   351,    11,   328,   257,   182,   257,   331,   338,   123,
      42,   329,   346,   137,   352,   347,   316,   319,   353,   375,
     378,    45,   388,   372,   403,   118,   374,   406,   407,   416,
     409,   169,   417,   123,   123,    33,   123,    25,   257,   113,
     257,   257,   294,   114,    82,   337,    39,   341,   150,   344,
      40,   152,   149,    83,    65,   169,   169,   168,   169,    11,
      66,   305,   157,   384,   226,   115,    11,    42,   215,    30,
     269,   123,   270,   345,   392,   362,    43,   271,    45,   227,
     377,   379,   118,   228,   311,    11,   229,    60,   111,    46,
     193,   257,   268,   169,   154,   265,   172,   257,   316,   381,
     405,   195,   196,   175,   290,   145,   334,   257,   226,   335,
     230,   327,   390,   389,    60,   397,   413,   198,   257,   341,
     358,   344,   391,   227,   231,   232,   357,   228,   320,    11,
     229,   360,   112,   380,   400,   113,   324,     0,     0,   114,
       0,     0,     0,     0,     0,     0,   196,     0,     0,     0,
     410,     0,     0,     0,   230,    11,     0,     0,     0,     0,
       0,   115,     0,    42,     0,     0,     0,     0,   231,   232,
       0,   116,     0,   117,    45,    85,     0,     0,   118,   119,
      86,     0,    87,   120,     0,    88,     0,     0,    89,    39,
      90,    91,   121,    40,     0,    92,     0,    93,     0,     0,
       0,     0,    94,     0,     0,     0,     0,     0,     0,    11,
      39,     0,     0,   269,    40,   270,     0,    42,     0,    43,
     271,     0,     0,     0,    95,     0,     0,     0,    45,     0,
      11,   315,    46,     0,   269,    39,   270,     0,    42,    40,
      43,   271,    39,     0,     0,     0,    40,   113,     0,    45,
       0,   114,     0,    46,     0,    11,     0,     0,   395,     0,
       0,    41,    11,    42,     0,    43,    44,    11,    41,     0,
       0,     0,    43,    44,    45,    42,     0,     0,    46,     0,
       0,     0,   396,     0,     0,    46,    45,     0,     0,     0,
     118
};

static const short int yycheck[] =
{
       1,     2,     3,    26,     6,    31,    21,   213,   213,    27,
     167,    12,   196,     0,    16,   155,    67,   231,    41,    37,
     276,   322,    23,   297,   164,    26,    27,    18,   144,    31,
      53,   144,    19,    34,    53,   272,    37,   277,     9,     9,
      41,    14,    13,    44,    67,    47,   230,    27,   232,    64,
       9,   329,    53,   331,   332,   329,     9,     9,    31,     9,
       6,     0,    18,    54,     8,     9,    67,    69,   331,   332,
      71,    72,    74,    96,    97,    77,     8,     9,    80,    81,
       5,    27,   105,   384,    54,    16,   105,   138,   325,    14,
      20,    64,    22,    54,    53,    96,    97,   115,    54,    49,
      53,    53,   358,   260,   105,   106,    31,   108,   382,   225,
     388,   295,   225,   297,   115,   138,   330,   357,   119,   259,
     121,   139,   123,   125,   398,   388,   144,     9,     9,    60,
      30,   409,   155,    63,    18,   158,    11,   138,   139,    64,
      18,   164,    14,   144,   167,   329,   409,   331,   332,   333,
       4,    61,    27,     8,   155,    23,   143,   158,   159,   161,
     211,     8,     9,   164,   182,   322,   167,    49,    49,    26,
      54,    33,   173,   378,   200,    50,    54,    54,    33,    47,
     181,   182,    19,   185,    41,    62,    11,    44,   211,   346,
     347,    45,   349,    17,    18,   196,    53,    51,   382,   405,
     405,    55,     3,    63,   388,    53,    54,   225,    10,    33,
     211,    12,   213,   228,   398,     8,     9,     8,     9,   220,
       8,     9,   223,     0,   225,   409,   227,   384,    14,   230,
      54,   232,    65,    10,    19,    36,   259,   260,    62,    96,
      97,    35,    53,    54,    58,    53,    23,    41,   105,   106,
      33,    31,    46,    23,    15,    56,    57,    27,   259,   260,
     261,    40,    40,   226,    15,   266,    18,   293,    69,    70,
      47,    48,     7,    44,    68,     8,    11,    47,    40,     8,
      40,   304,     8,    40,    61,    40,    63,    18,    65,    58,
      33,   317,    27,     5,   295,    65,   297,    13,   299,   322,
      35,    59,    15,   304,    15,   307,   269,   270,    53,     8,
      33,    46,    17,   339,     8,    50,   342,    53,     8,    53,
      13,   322,    18,   346,   347,    22,   349,    12,   329,     7,
     331,   332,   333,    11,    41,   298,     7,   300,    97,   302,
      11,   106,    96,    44,    33,   346,   347,   123,   349,    27,
      34,   259,   116,   355,     6,    33,    27,    35,   164,    11,
      31,   384,    33,   304,   378,   328,    37,    38,    46,    21,
     347,   349,    50,    25,   261,    27,    28,   378,    65,    50,
     146,   382,   225,   384,   111,   220,   139,   388,   351,   352,
     392,   147,    44,   142,   230,    78,   295,   398,     6,   295,
      52,   284,   374,   372,   405,   384,   408,   154,   409,   372,
     324,   374,   375,    21,    66,    67,   323,    25,   271,    27,
      28,   326,     4,   351,   387,     7,   276,    -1,    -1,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    44,    -1,    -1,    -1,
     403,    -1,    -1,    -1,    52,    27,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    35,    -1,    -1,    -1,    -1,    66,    67,
      -1,    43,    -1,    45,    46,    19,    -1,    -1,    50,    51,
      24,    -1,    26,    55,    -1,    29,    -1,    -1,    32,     7,
      34,    35,    64,    11,    -1,    39,    -1,    41,    -1,    -1,
      -1,    -1,    46,    -1,    -1,    -1,    -1,    -1,    -1,    27,
       7,    -1,    -1,    31,    11,    33,    -1,    35,    -1,    37,
      38,    -1,    -1,    -1,    68,    -1,    -1,    -1,    46,    -1,
      27,    49,    50,    -1,    31,     7,    33,    -1,    35,    11,
      37,    38,     7,    -1,    -1,    -1,    11,     7,    -1,    46,
      -1,    11,    -1,    50,    -1,    27,    -1,    -1,    18,    -1,
      -1,    33,    27,    35,    -1,    37,    38,    27,    33,    -1,
      -1,    -1,    37,    38,    46,    35,    -1,    -1,    50,    -1,
      -1,    -1,    42,    -1,    -1,    50,    46,    -1,    -1,    -1,
      50
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,    10,    48,    63,    72,    73,    74,    76,    77,    78,
      82,    27,    83,    84,   204,   204,   204,     0,    54,   205,
      14,    30,    79,    61,    94,    84,    19,    33,   205,    76,
      11,    80,    81,    82,    95,    96,   204,    65,   125,     7,
      11,    33,    35,    37,    38,    46,    50,    85,    86,    87,
      88,    89,    90,    92,   193,   194,   195,   196,   204,    75,
     204,    14,     9,   205,   206,    94,    96,    19,    75,   126,
     127,    23,    47,   128,   129,   130,   131,   132,   141,   143,
     144,   146,    85,    90,   205,    19,    24,    26,    29,    32,
      34,    35,    39,    41,    46,    68,   201,   203,     3,    12,
      36,    56,    57,    69,    70,   202,    58,    88,     9,    53,
      81,   125,     4,     7,    11,    33,    43,    45,    50,    51,
      55,    64,    91,    92,    93,    97,    98,    99,   100,   101,
     102,   103,   104,   109,   120,   122,   123,   204,     8,   205,
     204,   204,   205,   205,    33,   134,   205,   205,    53,    87,
      86,    88,    89,   204,   128,    31,    75,   103,    40,     6,
      75,   110,   111,   112,    40,   124,   204,    15,    93,   204,
     205,    97,   127,     8,   134,   130,    20,    22,    76,   133,
     142,    23,    65,    75,   132,   135,   136,   137,   138,   139,
     140,   144,    76,   133,   147,   147,    44,   148,   149,    99,
     105,   106,   107,   204,    53,    97,   108,   113,   118,   119,
     204,     8,    18,   205,    18,   107,   121,    91,   145,   204,
       8,   204,    75,     8,    53,   205,     6,    21,    25,    28,
      52,    66,    67,    81,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   170,   171,   175,   176,   204,    49,   206,
      40,     8,    97,   111,   112,   145,     8,   204,   136,    31,
      33,    38,    92,   166,   177,   187,   188,   189,   190,   191,
     192,   193,   197,   198,   204,   181,   204,    81,   186,   187,
     150,   186,   166,   185,   204,     8,    18,   205,     5,    14,
      31,    64,    33,   172,    40,   106,    91,   114,   115,   116,
     117,   119,   204,    18,   204,    49,   187,   199,   200,   187,
     192,   190,    40,   201,   203,   202,    58,   172,     5,    59,
      62,    13,    13,   206,   154,   155,   151,   187,   204,   168,
     169,   187,   173,   174,   187,   108,    15,   205,     8,   206,
      49,   206,    15,    53,   116,   178,   179,   189,   188,   190,
     191,   182,   187,   151,   153,   186,   152,   153,   152,   153,
     166,    49,   206,    53,   206,     8,    91,   115,    33,   117,
     200,   187,     8,    18,   205,    16,    60,   183,    17,   169,
     174,   187,   110,   112,   151,    18,    42,   179,   180,   184,
     187,   152,   153,     8,    53,   205,    53,     8,   151,    13,
     187,   112,    18,   205,   152,   153,    53,    18
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned char yyr1[] =
{
       0,    71,    72,    72,    73,    73,    74,    74,    75,    75,
      76,    77,    78,    78,    79,    79,    80,    80,    81,    82,
      82,    83,    83,    84,    85,    85,    86,    86,    87,    87,
      88,    88,    89,    89,    90,    90,    90,    90,    91,    91,
      91,    92,    92,    93,    93,    93,    94,    94,    95,    95,
      96,    97,    97,    98,    98,    98,    99,    99,   100,   101,
     102,   102,   103,   103,   103,   103,   104,   105,   105,   106,
     107,   107,   108,   109,   109,   109,   110,   110,   111,   112,
     112,   112,   113,   113,   114,   114,   115,   115,   115,   116,
     116,   117,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   125,   126,   126,   127,   128,   128,   129,   129,   130,
     130,   131,   131,   132,   132,   133,   133,   134,   135,   135,
     136,   136,   136,   136,   137,   138,   139,   140,   141,   142,
     143,   143,   143,   144,   144,   145,   146,   147,   148,   149,
     150,   150,   151,   151,   152,   152,   153,   153,   154,   154,
     154,   154,   154,   154,   154,   154,   154,   154,   154,   155,
     155,   155,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   163,   164,   165,   166,   166,   166,   166,   167,   168,
     168,   169,   170,   171,   171,   172,   173,   173,   174,   174,
     174,   175,   176,   176,   176,   176,   177,   178,   178,   179,
     180,   180,   181,   182,   183,   183,   184,   185,   185,   186,
     187,   187,   188,   188,   189,   189,   190,   190,   191,   191,
     192,   192,   192,   192,   192,   192,   193,   193,   193,   194,
     194,   195,   196,   197,   198,   198,   199,   199,   200,   200,
     201,   201,   201,   201,   202,   202,   202,   202,   202,   202,
     202,   203,   203,   203,   203,   203,   203,   203,   204,   205,
     206
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     1,     1,     4,     2,     2,     5,     3,     1,
       7,     4,     3,     0,     3,     0,     3,     1,     1,     2,
       0,     2,     1,     4,     1,     3,     1,     3,     1,     3,
       2,     1,     1,     3,     1,     3,     1,     2,     1,     2,
       1,     1,     1,     1,     1,     1,     2,     0,     2,     1,
       4,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       1,     2,     1,     1,     1,     1,     6,     3,     1,     1,
       1,     1,     1,     3,     5,     3,     3,     1,     3,     5,
       4,     0,     3,     1,     3,     1,     5,     7,     5,     3,
       1,     1,     3,     1,     1,     3,     1,     3,     2,     1,
       3,     0,     3,     1,     3,     2,     0,     3,     1,     1,
       1,     3,     3,     1,     2,     1,     1,     3,     3,     1,
       1,     1,     1,     1,     3,     4,     1,     1,     2,     1,
       3,     3,     3,     4,     5,     1,     2,     1,     1,     3,
       3,     1,     1,     1,     3,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     1,
       1,     1,     1,     4,     4,     4,     8,     8,     4,     4,
       4,     6,     6,     3,     1,     1,     1,     2,     4,     3,
       1,     1,     3,     2,     1,     3,     3,     1,     1,     3,
       5,     2,     5,     6,     8,     9,     1,     3,     1,     3,
       1,     2,     1,     1,     1,     1,     1,     3,     1,     1,
       1,     3,     1,     3,     1,     3,     2,     1,     1,     3,
       1,     1,     1,     1,     3,     2,     1,     1,     1,     1,
       1,     1,     1,     2,     3,     2,     3,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1
};


/* YYDPREC[RULE-NUM] -- Dynamic precedence of rule #RULE-NUM (0 if none).  */
static const unsigned char yydprec[] =
{
       0,     0,     1,     2,     1,     2,     1,     2,     1,     2,
       1,     1,     1,     2,     1,     2,     1,     2,     1,     1,
       2,     1,     2,     1,     1,     2,     1,     2,     1,     2,
       1,     2,     1,     2,     1,     2,     3,     4,     1,     2,
       3,     1,     2,     1,     2,     3,     1,     2,     1,     2,
       1,     1,     2,     1,     2,     3,     1,     2,     1,     1,
       1,     2,     1,     2,     3,     4,     1,     1,     2,     1,
       1,     2,     1,     1,     2,     3,     1,     2,     1,     1,
       2,     3,     1,     2,     1,     2,     1,     2,     3,     1,
       2,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     2,     1,     1,     2,     1,     2,     1,
       2,     1,     2,     1,     2,     1,     2,     1,     1,     2,
       1,     2,     3,     4,     1,     1,     1,     1,     1,     1,
       1,     2,     3,     1,     2,     1,     1,     1,     1,     1,
       1,     2,     1,     2,     1,     2,     1,     2,     1,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,     1,
       2,     3,     4,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     1,     1,     2,     3,     4,     1,     1,
       2,     1,     1,     1,     2,     1,     1,     2,     1,     2,
       3,     1,     1,     2,     3,     4,     1,     1,     2,     1,
       1,     2,     1,     1,     1,     2,     1,     1,     2,     1,
       1,     2,     1,     2,     1,     2,     1,     2,     1,     2,
       1,     2,     3,     4,     5,     6,     1,     2,     3,     1,
       2,     1,     1,     1,     1,     2,     1,     2,     1,     2,
       1,     2,     3,     4,     1,     2,     3,     4,     5,     6,
       7,     1,     2,     3,     4,     5,     6,     7,     1,     1,
       1
};

/* YYMERGER[RULE-NUM] -- Index of merging function for rule #RULE-NUM.  */
static const unsigned char yymerger[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0
};

/* YYIMMEDIATE[RULE-NUM] -- True iff rule #RULE-NUM is not to be deferred, as
   in the case of predicates.  */
static const yybool yyimmediate[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0
};

/* YYCONFLP[YYPACT[STATE-NUM]] -- Pointer into YYCONFL of start of
   list of conflicting reductions corresponding to action entry for
   state STATE-NUM in yytable.  0 means no conflicts.  The list in
   yyconfl is terminated by a rule number of 0.  */
static const unsigned char yyconflp[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     1,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     3,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       5,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     7,     0,     0,     0,     9,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0
};

/* YYCONFL[I] -- lists of conflicting rule numbers, each terminated by
   0, pointed into by YYCONFLP.  */
static const short int yyconfl[] =
{
       0,    13,     0,    20,     0,    20,     0,    20,     0,    20,
       0
};

/* Error token number */
#define YYTERROR 1



YYSTYPE yylval;

int yynerrs;
int yychar;

static const int YYEOF = 0;
static const int YYEMPTY = -2;

typedef enum { yyok, yyaccept, yyabort, yyerr } YYRESULTTAG;

#define YYCHK(YYE)                              \
  do {                                          \
    YYRESULTTAG yychk_flag = YYE;               \
    if (yychk_flag != yyok)                     \
      return yychk_flag;                        \
  } while (0)

#if YYDEBUG

# ifndef YYFPRINTF
#  define YYFPRINTF fprintf
# endif

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YYDPRINTF(Args)                        \
  do {                                          \
    if (yydebug)                                \
      YYFPRINTF Args;                           \
  } while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                  \
  do {                                                                  \
    if (yydebug)                                                        \
      {                                                                 \
        YYFPRINTF (stderr, "%s ", Title);                               \
        yy_symbol_print (stderr, Type, Value);        \
        YYFPRINTF (stderr, "\n");                                       \
      }                                                                 \
  } while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;

struct yyGLRStack;
static void yypstack (struct yyGLRStack* yystackp, size_t yyk)
  YY_ATTRIBUTE_UNUSED;
static void yypdumpstack (struct yyGLRStack* yystackp)
  YY_ATTRIBUTE_UNUSED;

#else /* !YYDEBUG */

# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)

#endif /* !YYDEBUG */

/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   SIZE_MAX < YYMAXDEPTH * sizeof (GLRStackItem)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif

/* Minimum number of free items on the stack allowed after an
   allocation.  This is to allow allocation and initialization
   to be completed by functions that call yyexpandGLRStack before the
   stack is expanded, thus insuring that all necessary pointers get
   properly redirected to new data.  */
#define YYHEADROOM 2

#ifndef YYSTACKEXPANDABLE
#  define YYSTACKEXPANDABLE 1
#endif

#if YYSTACKEXPANDABLE
# define YY_RESERVE_GLRSTACK(Yystack)                   \
  do {                                                  \
    if (Yystack->yyspaceLeft < YYHEADROOM)              \
      yyexpandGLRStack (Yystack);                       \
  } while (0)
#else
# define YY_RESERVE_GLRSTACK(Yystack)                   \
  do {                                                  \
    if (Yystack->yyspaceLeft < YYHEADROOM)              \
      yyMemoryExhausted (Yystack);                      \
  } while (0)
#endif


#if YYERROR_VERBOSE

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static size_t
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      size_t yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return strlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

#endif /* !YYERROR_VERBOSE */

/** State numbers, as in LALR(1) machine */
typedef int yyStateNum;

/** Rule numbers, as in LALR(1) machine */
typedef int yyRuleNum;

/** Grammar symbol */
typedef int yySymbol;

/** Item references, as in LALR(1) machine */
typedef short int yyItemNum;

typedef struct yyGLRState yyGLRState;
typedef struct yyGLRStateSet yyGLRStateSet;
typedef struct yySemanticOption yySemanticOption;
typedef union yyGLRStackItem yyGLRStackItem;
typedef struct yyGLRStack yyGLRStack;

struct yyGLRState {
  /** Type tag: always true.  */
  yybool yyisState;
  /** Type tag for yysemantics.  If true, yysval applies, otherwise
   *  yyfirstVal applies.  */
  yybool yyresolved;
  /** Number of corresponding LALR(1) machine state.  */
  yyStateNum yylrState;
  /** Preceding state in this stack */
  yyGLRState* yypred;
  /** Source position of the last token produced by my symbol */
  size_t yyposn;
  union {
    /** First in a chain of alternative reductions producing the
     *  non-terminal corresponding to this state, threaded through
     *  yynext.  */
    yySemanticOption* yyfirstVal;
    /** Semantic value for this state.  */
    YYSTYPE yysval;
  } yysemantics;
};

struct yyGLRStateSet {
  yyGLRState** yystates;
  /** During nondeterministic operation, yylookaheadNeeds tracks which
   *  stacks have actually needed the current lookahead.  During deterministic
   *  operation, yylookaheadNeeds[0] is not maintained since it would merely
   *  duplicate yychar != YYEMPTY.  */
  yybool* yylookaheadNeeds;
  size_t yysize, yycapacity;
};

struct yySemanticOption {
  /** Type tag: always false.  */
  yybool yyisState;
  /** Rule number for this reduction */
  yyRuleNum yyrule;
  /** The last RHS state in the list of states to be reduced.  */
  yyGLRState* yystate;
  /** The lookahead for this reduction.  */
  int yyrawchar;
  YYSTYPE yyval;
  /** Next sibling in chain of options.  To facilitate merging,
   *  options are chained in decreasing order by address.  */
  yySemanticOption* yynext;
};

/** Type of the items in the GLR stack.  The yyisState field
 *  indicates which item of the union is valid.  */
union yyGLRStackItem {
  yyGLRState yystate;
  yySemanticOption yyoption;
};

struct yyGLRStack {
  int yyerrState;


  YYJMP_BUF yyexception_buffer;
  yyGLRStackItem* yyitems;
  yyGLRStackItem* yynextFree;
  size_t yyspaceLeft;
  yyGLRState* yysplitPoint;
  yyGLRState* yylastDeleted;
  yyGLRStateSet yytops;
};

#if YYSTACKEXPANDABLE
static void yyexpandGLRStack (yyGLRStack* yystackp);
#endif

static _Noreturn void
yyFail (yyGLRStack* yystackp, const char* yymsg)
{
  if (yymsg != YY_NULLPTR)
    yyerror (yymsg);
  YYLONGJMP (yystackp->yyexception_buffer, 1);
}

static _Noreturn void
yyMemoryExhausted (yyGLRStack* yystackp)
{
  YYLONGJMP (yystackp->yyexception_buffer, 2);
}

#if YYDEBUG || YYERROR_VERBOSE
/** A printable representation of TOKEN.  */
static inline const char*
yytokenName (yySymbol yytoken)
{
  if (yytoken == YYEMPTY)
    return "";

  return yytname[yytoken];
}
#endif

/** Fill in YYVSP[YYLOW1 .. YYLOW0-1] from the chain of states starting
 *  at YYVSP[YYLOW0].yystate.yypred.  Leaves YYVSP[YYLOW1].yystate.yypred
 *  containing the pointer to the next state in the chain.  */
static void yyfillin (yyGLRStackItem *, int, int) YY_ATTRIBUTE_UNUSED;
static void
yyfillin (yyGLRStackItem *yyvsp, int yylow0, int yylow1)
{
  int i;
  yyGLRState *s = yyvsp[yylow0].yystate.yypred;
  for (i = yylow0-1; i >= yylow1; i -= 1)
    {
#if YYDEBUG
      yyvsp[i].yystate.yylrState = s->yylrState;
#endif
      yyvsp[i].yystate.yyresolved = s->yyresolved;
      if (s->yyresolved)
        yyvsp[i].yystate.yysemantics.yysval = s->yysemantics.yysval;
      else
        /* The effect of using yysval or yyloc (in an immediate rule) is
         * undefined.  */
        yyvsp[i].yystate.yysemantics.yyfirstVal = YY_NULLPTR;
      s = yyvsp[i].yystate.yypred = s->yypred;
    }
}

/* Do nothing if YYNORMAL or if *YYLOW <= YYLOW1.  Otherwise, fill in
 * YYVSP[YYLOW1 .. *YYLOW-1] as in yyfillin and set *YYLOW = YYLOW1.
 * For convenience, always return YYLOW1.  */
static inline int yyfill (yyGLRStackItem *, int *, int, yybool)
     YY_ATTRIBUTE_UNUSED;
static inline int
yyfill (yyGLRStackItem *yyvsp, int *yylow, int yylow1, yybool yynormal)
{
  if (!yynormal && yylow1 < *yylow)
    {
      yyfillin (yyvsp, *yylow, yylow1);
      *yylow = yylow1;
    }
  return yylow1;
}

/** Perform user action for rule number YYN, with RHS length YYRHSLEN,
 *  and top stack item YYVSP.  YYLVALP points to place to put semantic
 *  value ($$), and yylocp points to place for location information
 *  (@$).  Returns yyok for normal return, yyaccept for YYACCEPT,
 *  yyerr for YYERROR, yyabort for YYABORT.  */
static YYRESULTTAG
yyuserAction (yyRuleNum yyn, size_t yyrhslen, yyGLRStackItem* yyvsp,
              yyGLRStack* yystackp,
              YYSTYPE* yyvalp)
{
  yybool yynormal YY_ATTRIBUTE_UNUSED = (yystackp->yysplitPoint == YY_NULLPTR);
  int yylow;
  YYUSE (yyvalp);
  YYUSE (yyrhslen);
# undef yyerrok
# define yyerrok (yystackp->yyerrState = 0)
# undef YYACCEPT
# define YYACCEPT return yyaccept
# undef YYABORT
# define YYABORT return yyabort
# undef YYERROR
# define YYERROR return yyerrok, yyerr
# undef YYRECOVERING
# define YYRECOVERING() (yystackp->yyerrState != 0)
# undef yyclearin
# define yyclearin (yychar = YYEMPTY)
# undef YYFILL
# define YYFILL(N) yyfill (yyvsp, &yylow, N, yynormal)
# undef YYBACKUP
# define YYBACKUP(Token, Value)                                              \
  return yyerror (YY_("syntax error: cannot back up")),     \
         yyerrok, yyerr

  yylow = 1;
  if (yyrhslen == 0)
    *yyvalp = yyval_default;
  else
    *yyvalp = yyvsp[YYFILL (1-yyrhslen)].yystate.yysemantics.yysval;
  switch (yyn)
    {
        case 2:
#line 40 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  file     1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 1328 "pascal.tab.c" /* glr.c:783  */
    break;

  case 3:
#line 42 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  file     1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 1334 "pascal.tab.c" /* glr.c:783  */
    break;

  case 4:
#line 47 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  program  4 %d %d %d %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval),(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval),tok-1); printf("%d DOT 0\n",tok-1); tok-=1; }
#line 1340 "pascal.tab.c" /* glr.c:783  */
    break;

  case 5:
#line 49 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  program  2 %d %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval),tok-1); printf("%d DOT 0\n",tok-1); tok-=1; }
#line 1346 "pascal.tab.c" /* glr.c:783  */
    break;

  case 6:
#line 54 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  program_heading  2 %d %d\n",cnt,tok-1,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval)); printf("%d PROGRAM 0\n",tok-1); tok-=1; }
#line 1352 "pascal.tab.c" /* glr.c:783  */
    break;

  case 7:
#line 56 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  program_heading  5 %d %d %d %d %d\n",cnt,tok-1,(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval),tok-2,(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval),tok-3); printf("%d PROGRAM 0\n",tok-1);printf("%d LPAREN 0\n",tok-2);printf("%d RPAREN 0\n",tok-3); tok-=3; }
#line 1358 "pascal.tab.c" /* glr.c:783  */
    break;

  case 8:
#line 61 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  identifier_list  3 %d %d %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval),tok-1,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval)); printf("%d COMMA 0\n",tok-1); tok-=1; }
#line 1364 "pascal.tab.c" /* glr.c:783  */
    break;

  case 9:
#line 63 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  identifier_list  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 1370 "pascal.tab.c" /* glr.c:783  */
    break;

  case 10:
#line 68 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  block  7 %d %d %d %d %d %d %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (-6)].yystate.yysemantics.yysval),(((yyGLRStackItem const *)yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval),(((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval),(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval),(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 1376 "pascal.tab.c" /* glr.c:783  */
    break;

  case 11:
#line 73 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  module  4 %d %d %d %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval),(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 1382 "pascal.tab.c" /* glr.c:783  */
    break;

  case 12:
#line 78 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  uses_declaration_part  3 %d %d %d\n",cnt,tok-1,(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval)); printf("%d USES 0\n",tok-1); tok-=1; }
#line 1388 "pascal.tab.c" /* glr.c:783  */
    break;

  case 13:
#line 80 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  uses_declaration_part  0\n",cnt);  tok-=0; }
#line 1394 "pascal.tab.c" /* glr.c:783  */
    break;

  case 14:
#line 85 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  label_declaration_part  3 %d %d %d\n",cnt,tok-1,(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval)); printf("%d LABEL 0\n",tok-1); tok-=1; }
#line 1400 "pascal.tab.c" /* glr.c:783  */
    break;

  case 15:
#line 87 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  label_declaration_part  0\n",cnt);  tok-=0; }
#line 1406 "pascal.tab.c" /* glr.c:783  */
    break;

  case 16:
#line 92 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  label_list  3 %d %d %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 1412 "pascal.tab.c" /* glr.c:783  */
    break;

  case 17:
#line 94 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  label_list  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 1418 "pascal.tab.c" /* glr.c:783  */
    break;

  case 18:
#line 99 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  label  1 %d\n",cnt,tok-1); printf("%d DIGSEQ 0\n",tok-1); tok-=1; }
#line 1424 "pascal.tab.c" /* glr.c:783  */
    break;

  case 19:
#line 104 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  constant_definition_part  2 %d %d\n",cnt,tok-1,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval)); printf("%d CONST 0\n",tok-1); tok-=1; }
#line 1430 "pascal.tab.c" /* glr.c:783  */
    break;

  case 20:
#line 106 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  constant_definition_part  0\n",cnt);  tok-=0; }
#line 1436 "pascal.tab.c" /* glr.c:783  */
    break;

  case 21:
#line 111 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  constant_list  2 %d %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 1442 "pascal.tab.c" /* glr.c:783  */
    break;

  case 22:
#line 113 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  constant_list  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 1448 "pascal.tab.c" /* glr.c:783  */
    break;

  case 23:
#line 118 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  constant_definition  4 %d %d %d %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval),tok-1,(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval)); printf("%d EQUAL 0\n",tok-1); tok-=1; }
#line 1454 "pascal.tab.c" /* glr.c:783  */
    break;

  case 24:
#line 123 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  cexpression  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 1460 "pascal.tab.c" /* glr.c:783  */
    break;

  case 25:
#line 125 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  cexpression  3 %d %d %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 1466 "pascal.tab.c" /* glr.c:783  */
    break;

  case 26:
#line 130 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  csimple_expression  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 1472 "pascal.tab.c" /* glr.c:783  */
    break;

  case 27:
#line 132 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  csimple_expression  3 %d %d %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 1478 "pascal.tab.c" /* glr.c:783  */
    break;

  case 28:
#line 137 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  cterm  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 1484 "pascal.tab.c" /* glr.c:783  */
    break;

  case 29:
#line 139 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  cterm  3 %d %d %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 1490 "pascal.tab.c" /* glr.c:783  */
    break;

  case 30:
#line 144 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  cfactor  2 %d %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 1496 "pascal.tab.c" /* glr.c:783  */
    break;

  case 31:
#line 146 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  cfactor  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 1502 "pascal.tab.c" /* glr.c:783  */
    break;

  case 32:
#line 151 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  cexponentiation  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 1508 "pascal.tab.c" /* glr.c:783  */
    break;

  case 33:
#line 153 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  cexponentiation  3 %d %d %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval),tok-1,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval)); printf("%d STARSTAR 0\n",tok-1); tok-=1; }
#line 1514 "pascal.tab.c" /* glr.c:783  */
    break;

  case 34:
#line 158 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  cprimary  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 1520 "pascal.tab.c" /* glr.c:783  */
    break;

  case 35:
#line 160 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  cprimary  3 %d %d %d\n",cnt,tok-1,(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval),tok-2); printf("%d LPAREN 0\n",tok-1);printf("%d RPAREN 0\n",tok-2); tok-=2; }
#line 1526 "pascal.tab.c" /* glr.c:783  */
    break;

  case 36:
#line 162 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  cprimary  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 1532 "pascal.tab.c" /* glr.c:783  */
    break;

  case 37:
#line 164 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  cprimary  2 %d %d\n",cnt,tok-1,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval)); printf("%d NOT 0\n",tok-1); tok-=1; }
#line 1538 "pascal.tab.c" /* glr.c:783  */
    break;

  case 38:
#line 169 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  constant  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 1544 "pascal.tab.c" /* glr.c:783  */
    break;

  case 39:
#line 171 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  constant  2 %d %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 1550 "pascal.tab.c" /* glr.c:783  */
    break;

  case 40:
#line 173 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  constant  1 %d\n",cnt,tok-1); printf("%d CHARACTER_STRING 0\n",tok-1); tok-=1; }
#line 1556 "pascal.tab.c" /* glr.c:783  */
    break;

  case 41:
#line 178 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  sign  1 %d\n",cnt,tok-1); printf("%d PLUS 0\n",tok-1); tok-=1; }
#line 1562 "pascal.tab.c" /* glr.c:783  */
    break;

  case 42:
#line 180 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  sign  1 %d\n",cnt,tok-1); printf("%d MINUS 0\n",tok-1); tok-=1; }
#line 1568 "pascal.tab.c" /* glr.c:783  */
    break;

  case 43:
#line 185 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  non_string  1 %d\n",cnt,tok-1); printf("%d DIGSEQ 0\n",tok-1); tok-=1; }
#line 1574 "pascal.tab.c" /* glr.c:783  */
    break;

  case 44:
#line 187 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  non_string  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 1580 "pascal.tab.c" /* glr.c:783  */
    break;

  case 45:
#line 189 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  non_string  1 %d\n",cnt,tok-1); printf("%d REALNUMBER 0\n",tok-1); tok-=1; }
#line 1586 "pascal.tab.c" /* glr.c:783  */
    break;

  case 46:
#line 194 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  type_definition_part  2 %d %d\n",cnt,tok-1,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval)); printf("%d TYPE 0\n",tok-1); tok-=1; }
#line 1592 "pascal.tab.c" /* glr.c:783  */
    break;

  case 47:
#line 196 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  type_definition_part  0\n",cnt);  tok-=0; }
#line 1598 "pascal.tab.c" /* glr.c:783  */
    break;

  case 48:
#line 201 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  type_definition_list  2 %d %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 1604 "pascal.tab.c" /* glr.c:783  */
    break;

  case 49:
#line 203 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  type_definition_list  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 1610 "pascal.tab.c" /* glr.c:783  */
    break;

  case 50:
#line 208 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  type_definition  4 %d %d %d %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval),tok-1,(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval)); printf("%d EQUAL 0\n",tok-1); tok-=1; }
#line 1616 "pascal.tab.c" /* glr.c:783  */
    break;

  case 51:
#line 213 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  type_denoter  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 1622 "pascal.tab.c" /* glr.c:783  */
    break;

  case 52:
#line 215 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  type_denoter  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 1628 "pascal.tab.c" /* glr.c:783  */
    break;

  case 53:
#line 220 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  new_type  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 1634 "pascal.tab.c" /* glr.c:783  */
    break;

  case 54:
#line 222 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  new_type  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 1640 "pascal.tab.c" /* glr.c:783  */
    break;

  case 55:
#line 224 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  new_type  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 1646 "pascal.tab.c" /* glr.c:783  */
    break;

  case 56:
#line 229 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  new_ordinal_type  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 1652 "pascal.tab.c" /* glr.c:783  */
    break;

  case 57:
#line 231 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  new_ordinal_type  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 1658 "pascal.tab.c" /* glr.c:783  */
    break;

  case 58:
#line 236 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  enumerated_type  3 %d %d %d\n",cnt,tok-1,(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval),tok-2); printf("%d LPAREN 0\n",tok-1);printf("%d RPAREN 0\n",tok-2); tok-=2; }
#line 1664 "pascal.tab.c" /* glr.c:783  */
    break;

  case 59:
#line 241 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  subrange_type  3 %d %d %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval),tok-1,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval)); printf("%d DOTDOT 0\n",tok-1); tok-=1; }
#line 1670 "pascal.tab.c" /* glr.c:783  */
    break;

  case 60:
#line 246 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  new_structured_type  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 1676 "pascal.tab.c" /* glr.c:783  */
    break;

  case 61:
#line 248 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  new_structured_type  2 %d %d\n",cnt,tok-1,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval)); printf("%d PACKED 0\n",tok-1); tok-=1; }
#line 1682 "pascal.tab.c" /* glr.c:783  */
    break;

  case 62:
#line 253 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  structured_type  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 1688 "pascal.tab.c" /* glr.c:783  */
    break;

  case 63:
#line 255 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  structured_type  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 1694 "pascal.tab.c" /* glr.c:783  */
    break;

  case 64:
#line 257 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  structured_type  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 1700 "pascal.tab.c" /* glr.c:783  */
    break;

  case 65:
#line 259 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  structured_type  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 1706 "pascal.tab.c" /* glr.c:783  */
    break;

  case 66:
#line 264 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  array_type  6 %d %d %d %d %d %d\n",cnt,tok-1,tok-2,(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval),tok-3,tok-4,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval)); printf("%d ARRAY 0\n",tok-1);printf("%d LBRAC 0\n",tok-2);printf("%d RBRAC 0\n",tok-3);printf("%d OF 0\n",tok-4); tok-=4; }
#line 1712 "pascal.tab.c" /* glr.c:783  */
    break;

  case 67:
#line 269 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  index_list  3 %d %d %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 1718 "pascal.tab.c" /* glr.c:783  */
    break;

  case 68:
#line 271 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  index_list  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 1724 "pascal.tab.c" /* glr.c:783  */
    break;

  case 69:
#line 276 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  index_type  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 1730 "pascal.tab.c" /* glr.c:783  */
    break;

  case 70:
#line 281 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  ordinal_type  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 1736 "pascal.tab.c" /* glr.c:783  */
    break;

  case 71:
#line 283 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  ordinal_type  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 1742 "pascal.tab.c" /* glr.c:783  */
    break;

  case 72:
#line 288 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  component_type  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 1748 "pascal.tab.c" /* glr.c:783  */
    break;

  case 73:
#line 293 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  record_type  3 %d %d %d\n",cnt,tok-1,(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval),tok-2); printf("%d RECORD 0\n",tok-1);printf("%d END 0\n",tok-2); tok-=2; }
#line 1754 "pascal.tab.c" /* glr.c:783  */
    break;

  case 74:
#line 295 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  record_type  5 %d %d %d %d %d\n",cnt,tok-1,(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval),(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval),tok-2); printf("%d RECORD 0\n",tok-1);printf("%d END 0\n",tok-2); tok-=2; }
#line 1760 "pascal.tab.c" /* glr.c:783  */
    break;

  case 75:
#line 297 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  record_type  3 %d %d %d\n",cnt,tok-1,(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval),tok-2); printf("%d RECORD 0\n",tok-1);printf("%d END 0\n",tok-2); tok-=2; }
#line 1766 "pascal.tab.c" /* glr.c:783  */
    break;

  case 76:
#line 302 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  record_section_list  3 %d %d %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 1772 "pascal.tab.c" /* glr.c:783  */
    break;

  case 77:
#line 304 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  record_section_list  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 1778 "pascal.tab.c" /* glr.c:783  */
    break;

  case 78:
#line 309 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  record_section  3 %d %d %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval),tok-1,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval)); printf("%d COLON 0\n",tok-1); tok-=1; }
#line 1784 "pascal.tab.c" /* glr.c:783  */
    break;

  case 79:
#line 314 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  variant_part  5 %d %d %d %d %d\n",cnt,tok-1,(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval),tok-2,(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval)); printf("%d CASE 0\n",tok-1);printf("%d OF 0\n",tok-2); tok-=2; }
#line 1790 "pascal.tab.c" /* glr.c:783  */
    break;

  case 80:
#line 316 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  variant_part  4 %d %d %d %d\n",cnt,tok-1,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval),tok-2,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval)); printf("%d CASE 0\n",tok-1);printf("%d OF 0\n",tok-2); tok-=2; }
#line 1796 "pascal.tab.c" /* glr.c:783  */
    break;

  case 81:
#line 318 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  variant_part  0\n",cnt);  tok-=0; }
#line 1802 "pascal.tab.c" /* glr.c:783  */
    break;

  case 82:
#line 323 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  variant_selector  3 %d %d %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval),tok-1,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval)); printf("%d COLON 0\n",tok-1); tok-=1; }
#line 1808 "pascal.tab.c" /* glr.c:783  */
    break;

  case 83:
#line 325 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  variant_selector  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 1814 "pascal.tab.c" /* glr.c:783  */
    break;

  case 84:
#line 330 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  variant_list  3 %d %d %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 1820 "pascal.tab.c" /* glr.c:783  */
    break;

  case 85:
#line 332 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  variant_list  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 1826 "pascal.tab.c" /* glr.c:783  */
    break;

  case 86:
#line 337 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  variant  5 %d %d %d %d %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval),tok-1,tok-2,(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval),tok-3); printf("%d COLON 0\n",tok-1);printf("%d LPAREN 0\n",tok-2);printf("%d RPAREN 0\n",tok-3); tok-=3; }
#line 1832 "pascal.tab.c" /* glr.c:783  */
    break;

  case 87:
#line 339 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  variant  7 %d %d %d %d %d %d %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (-6)].yystate.yysemantics.yysval),tok-1,tok-2,(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval),(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval),tok-3); printf("%d COLON 0\n",tok-1);printf("%d LPAREN 0\n",tok-2);printf("%d RPAREN 0\n",tok-3); tok-=3; }
#line 1838 "pascal.tab.c" /* glr.c:783  */
    break;

  case 88:
#line 341 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  variant  5 %d %d %d %d %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval),tok-1,tok-2,(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval),tok-3); printf("%d COLON 0\n",tok-1);printf("%d LPAREN 0\n",tok-2);printf("%d RPAREN 0\n",tok-3); tok-=3; }
#line 1844 "pascal.tab.c" /* glr.c:783  */
    break;

  case 89:
#line 346 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  case_constant_list  3 %d %d %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 1850 "pascal.tab.c" /* glr.c:783  */
    break;

  case 90:
#line 348 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  case_constant_list  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 1856 "pascal.tab.c" /* glr.c:783  */
    break;

  case 91:
#line 353 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  case_constant  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 1862 "pascal.tab.c" /* glr.c:783  */
    break;

  case 92:
#line 355 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  case_constant  3 %d %d %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval),tok-1,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval)); printf("%d DOTDOT 0\n",tok-1); tok-=1; }
#line 1868 "pascal.tab.c" /* glr.c:783  */
    break;

  case 93:
#line 360 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  tag_field  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 1874 "pascal.tab.c" /* glr.c:783  */
    break;

  case 94:
#line 365 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  tag_type  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 1880 "pascal.tab.c" /* glr.c:783  */
    break;

  case 95:
#line 370 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  set_type  3 %d %d %d\n",cnt,tok-1,tok-2,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval)); printf("%d SET 0\n",tok-1);printf("%d OF 0\n",tok-2); tok-=2; }
#line 1886 "pascal.tab.c" /* glr.c:783  */
    break;

  case 96:
#line 375 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  base_type  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 1892 "pascal.tab.c" /* glr.c:783  */
    break;

  case 97:
#line 380 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  file_type  3 %d %d %d\n",cnt,tok-1,tok-2,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval)); printf("%d PFILE 0\n",tok-1);printf("%d OF 0\n",tok-2); tok-=2; }
#line 1898 "pascal.tab.c" /* glr.c:783  */
    break;

  case 98:
#line 385 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  new_pointer_type  2 %d %d\n",cnt,tok-1,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval)); printf("%d UPARROW 0\n",tok-1); tok-=1; }
#line 1904 "pascal.tab.c" /* glr.c:783  */
    break;

  case 99:
#line 390 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  domain_type  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 1910 "pascal.tab.c" /* glr.c:783  */
    break;

  case 100:
#line 395 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  variable_declaration_part  3 %d %d %d\n",cnt,tok-1,(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval)); printf("%d VAR 0\n",tok-1); tok-=1; }
#line 1916 "pascal.tab.c" /* glr.c:783  */
    break;

  case 101:
#line 397 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  variable_declaration_part  0\n",cnt);  tok-=0; }
#line 1922 "pascal.tab.c" /* glr.c:783  */
    break;

  case 102:
#line 402 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  variable_declaration_list  3 %d %d %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 1928 "pascal.tab.c" /* glr.c:783  */
    break;

  case 103:
#line 404 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  variable_declaration_list  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 1934 "pascal.tab.c" /* glr.c:783  */
    break;

  case 104:
#line 409 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  variable_declaration  3 %d %d %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval),tok-1,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval)); printf("%d COLON 0\n",tok-1); tok-=1; }
#line 1940 "pascal.tab.c" /* glr.c:783  */
    break;

  case 105:
#line 414 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  procedure_and_function_declaration_part  2 %d %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 1946 "pascal.tab.c" /* glr.c:783  */
    break;

  case 106:
#line 416 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  procedure_and_function_declaration_part  0\n",cnt);  tok-=0; }
#line 1952 "pascal.tab.c" /* glr.c:783  */
    break;

  case 107:
#line 421 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  proc_or_func_declaration_list  3 %d %d %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 1958 "pascal.tab.c" /* glr.c:783  */
    break;

  case 108:
#line 423 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  proc_or_func_declaration_list  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 1964 "pascal.tab.c" /* glr.c:783  */
    break;

  case 109:
#line 428 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  proc_or_func_declaration  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 1970 "pascal.tab.c" /* glr.c:783  */
    break;

  case 110:
#line 430 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  proc_or_func_declaration  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 1976 "pascal.tab.c" /* glr.c:783  */
    break;

  case 111:
#line 435 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  procedure_declaration  3 %d %d %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 1982 "pascal.tab.c" /* glr.c:783  */
    break;

  case 112:
#line 437 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  procedure_declaration  3 %d %d %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 1988 "pascal.tab.c" /* glr.c:783  */
    break;

  case 113:
#line 442 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  procedure_heading  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 1994 "pascal.tab.c" /* glr.c:783  */
    break;

  case 114:
#line 444 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  procedure_heading  2 %d %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 2000 "pascal.tab.c" /* glr.c:783  */
    break;

  case 115:
#line 449 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  directive  1 %d\n",cnt,tok-1); printf("%d FORWARD 0\n",tok-1); tok-=1; }
#line 2006 "pascal.tab.c" /* glr.c:783  */
    break;

  case 116:
#line 451 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  directive  1 %d\n",cnt,tok-1); printf("%d EXTERNAL 0\n",tok-1); tok-=1; }
#line 2012 "pascal.tab.c" /* glr.c:783  */
    break;

  case 117:
#line 456 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  formal_parameter_list  3 %d %d %d\n",cnt,tok-1,(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval),tok-2); printf("%d LPAREN 0\n",tok-1);printf("%d RPAREN 0\n",tok-2); tok-=2; }
#line 2018 "pascal.tab.c" /* glr.c:783  */
    break;

  case 118:
#line 461 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  formal_parameter_section_list  3 %d %d %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 2024 "pascal.tab.c" /* glr.c:783  */
    break;

  case 119:
#line 463 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  formal_parameter_section_list  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 2030 "pascal.tab.c" /* glr.c:783  */
    break;

  case 120:
#line 468 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  formal_parameter_section  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 2036 "pascal.tab.c" /* glr.c:783  */
    break;

  case 121:
#line 470 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  formal_parameter_section  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 2042 "pascal.tab.c" /* glr.c:783  */
    break;

  case 122:
#line 472 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  formal_parameter_section  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 2048 "pascal.tab.c" /* glr.c:783  */
    break;

  case 123:
#line 474 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  formal_parameter_section  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 2054 "pascal.tab.c" /* glr.c:783  */
    break;

  case 124:
#line 479 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  value_parameter_specification  3 %d %d %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval),tok-1,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval)); printf("%d COLON 0\n",tok-1); tok-=1; }
#line 2060 "pascal.tab.c" /* glr.c:783  */
    break;

  case 125:
#line 484 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  variable_parameter_specification  4 %d %d %d %d\n",cnt,tok-1,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval),tok-2,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval)); printf("%d VAR 0\n",tok-1);printf("%d COLON 0\n",tok-2); tok-=2; }
#line 2066 "pascal.tab.c" /* glr.c:783  */
    break;

  case 126:
#line 489 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  procedural_parameter_specification  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 2072 "pascal.tab.c" /* glr.c:783  */
    break;

  case 127:
#line 494 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  functional_parameter_specification  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 2078 "pascal.tab.c" /* glr.c:783  */
    break;

  case 128:
#line 499 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  procedure_identification  2 %d %d\n",cnt,tok-1,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval)); printf("%d PROCEDURE 0\n",tok-1); tok-=1; }
#line 2084 "pascal.tab.c" /* glr.c:783  */
    break;

  case 129:
#line 504 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  procedure_block  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 2090 "pascal.tab.c" /* glr.c:783  */
    break;

  case 130:
#line 509 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  function_declaration  3 %d %d %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 2096 "pascal.tab.c" /* glr.c:783  */
    break;

  case 131:
#line 511 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  function_declaration  3 %d %d %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 2102 "pascal.tab.c" /* glr.c:783  */
    break;

  case 132:
#line 513 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  function_declaration  3 %d %d %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 2108 "pascal.tab.c" /* glr.c:783  */
    break;

  case 133:
#line 518 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  function_heading  4 %d %d %d %d\n",cnt,tok-1,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval),tok-2,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval)); printf("%d FUNCTION 0\n",tok-1);printf("%d COLON 0\n",tok-2); tok-=2; }
#line 2114 "pascal.tab.c" /* glr.c:783  */
    break;

  case 134:
#line 520 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  function_heading  5 %d %d %d %d %d\n",cnt,tok-1,(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval),(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval),tok-2,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval)); printf("%d FUNCTION 0\n",tok-1);printf("%d COLON 0\n",tok-2); tok-=2; }
#line 2120 "pascal.tab.c" /* glr.c:783  */
    break;

  case 135:
#line 525 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  result_type  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 2126 "pascal.tab.c" /* glr.c:783  */
    break;

  case 136:
#line 530 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  function_identification  2 %d %d\n",cnt,tok-1,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval)); printf("%d FUNCTION 0\n",tok-1); tok-=1; }
#line 2132 "pascal.tab.c" /* glr.c:783  */
    break;

  case 137:
#line 535 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  function_block  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 2138 "pascal.tab.c" /* glr.c:783  */
    break;

  case 138:
#line 540 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  statement_part  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 2144 "pascal.tab.c" /* glr.c:783  */
    break;

  case 139:
#line 545 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  compound_statement  3 %d %d %d\n",cnt,tok-1,(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval),tok-2); printf("%d PBEGIN 0\n",tok-1);printf("%d END 0\n",tok-2); tok-=2; }
#line 2150 "pascal.tab.c" /* glr.c:783  */
    break;

  case 140:
#line 550 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  statement_sequence  3 %d %d %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 2156 "pascal.tab.c" /* glr.c:783  */
    break;

  case 141:
#line 552 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  statement_sequence  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 2162 "pascal.tab.c" /* glr.c:783  */
    break;

  case 142:
#line 557 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  statement  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 2168 "pascal.tab.c" /* glr.c:783  */
    break;

  case 143:
#line 559 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  statement  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 2174 "pascal.tab.c" /* glr.c:783  */
    break;

  case 144:
#line 564 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  open_statement  3 %d %d %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval),tok-1,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval)); printf("%d COLON 0\n",tok-1); tok-=1; }
#line 2180 "pascal.tab.c" /* glr.c:783  */
    break;

  case 145:
#line 566 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  open_statement  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 2186 "pascal.tab.c" /* glr.c:783  */
    break;

  case 146:
#line 571 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  closed_statement  3 %d %d %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval),tok-1,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval)); printf("%d COLON 0\n",tok-1); tok-=1; }
#line 2192 "pascal.tab.c" /* glr.c:783  */
    break;

  case 147:
#line 573 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  closed_statement  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 2198 "pascal.tab.c" /* glr.c:783  */
    break;

  case 148:
#line 578 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  non_labeled_closed_statement  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 2204 "pascal.tab.c" /* glr.c:783  */
    break;

  case 149:
#line 580 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  non_labeled_closed_statement  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 2210 "pascal.tab.c" /* glr.c:783  */
    break;

  case 150:
#line 582 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  non_labeled_closed_statement  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 2216 "pascal.tab.c" /* glr.c:783  */
    break;

  case 151:
#line 584 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  non_labeled_closed_statement  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 2222 "pascal.tab.c" /* glr.c:783  */
    break;

  case 152:
#line 586 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  non_labeled_closed_statement  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 2228 "pascal.tab.c" /* glr.c:783  */
    break;

  case 153:
#line 588 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  non_labeled_closed_statement  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 2234 "pascal.tab.c" /* glr.c:783  */
    break;

  case 154:
#line 590 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  non_labeled_closed_statement  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 2240 "pascal.tab.c" /* glr.c:783  */
    break;

  case 155:
#line 592 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  non_labeled_closed_statement  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 2246 "pascal.tab.c" /* glr.c:783  */
    break;

  case 156:
#line 594 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  non_labeled_closed_statement  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 2252 "pascal.tab.c" /* glr.c:783  */
    break;

  case 157:
#line 596 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  non_labeled_closed_statement  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 2258 "pascal.tab.c" /* glr.c:783  */
    break;

  case 158:
#line 598 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  non_labeled_closed_statement  0\n",cnt);  tok-=0; }
#line 2264 "pascal.tab.c" /* glr.c:783  */
    break;

  case 159:
#line 603 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  non_labeled_open_statement  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 2270 "pascal.tab.c" /* glr.c:783  */
    break;

  case 160:
#line 605 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  non_labeled_open_statement  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 2276 "pascal.tab.c" /* glr.c:783  */
    break;

  case 161:
#line 607 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  non_labeled_open_statement  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 2282 "pascal.tab.c" /* glr.c:783  */
    break;

  case 162:
#line 609 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  non_labeled_open_statement  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 2288 "pascal.tab.c" /* glr.c:783  */
    break;

  case 163:
#line 614 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  repeat_statement  4 %d %d %d %d\n",cnt,tok-1,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval),tok-2,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval)); printf("%d REPEAT 0\n",tok-1);printf("%d UNTIL 0\n",tok-2); tok-=2; }
#line 2294 "pascal.tab.c" /* glr.c:783  */
    break;

  case 164:
#line 619 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  open_while_statement  4 %d %d %d %d\n",cnt,tok-1,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval),tok-2,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval)); printf("%d WHILE 0\n",tok-1);printf("%d DO 0\n",tok-2); tok-=2; }
#line 2300 "pascal.tab.c" /* glr.c:783  */
    break;

  case 165:
#line 624 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  closed_while_statement  4 %d %d %d %d\n",cnt,tok-1,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval),tok-2,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval)); printf("%d WHILE 0\n",tok-1);printf("%d DO 0\n",tok-2); tok-=2; }
#line 2306 "pascal.tab.c" /* glr.c:783  */
    break;

  case 166:
#line 629 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  open_for_statement  8 %d %d %d %d %d %d %d %d\n",cnt,tok-1,(((yyGLRStackItem const *)yyvsp)[YYFILL (-6)].yystate.yysemantics.yysval),tok-2,(((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval),(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval),(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval),tok-3,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval)); printf("%d FOR 0\n",tok-1);printf("%d ASSIGNMENT 0\n",tok-2);printf("%d DO 0\n",tok-3); tok-=3; }
#line 2312 "pascal.tab.c" /* glr.c:783  */
    break;

  case 167:
#line 634 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  closed_for_statement  8 %d %d %d %d %d %d %d %d\n",cnt,tok-1,(((yyGLRStackItem const *)yyvsp)[YYFILL (-6)].yystate.yysemantics.yysval),tok-2,(((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval),(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval),(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval),tok-3,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval)); printf("%d FOR 0\n",tok-1);printf("%d ASSIGNMENT 0\n",tok-2);printf("%d DO 0\n",tok-3); tok-=3; }
#line 2318 "pascal.tab.c" /* glr.c:783  */
    break;

  case 168:
#line 639 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  open_with_statement  4 %d %d %d %d\n",cnt,tok-1,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval),tok-2,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval)); printf("%d WITH 0\n",tok-1);printf("%d DO 0\n",tok-2); tok-=2; }
#line 2324 "pascal.tab.c" /* glr.c:783  */
    break;

  case 169:
#line 644 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  closed_with_statement  4 %d %d %d %d\n",cnt,tok-1,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval),tok-2,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval)); printf("%d WITH 0\n",tok-1);printf("%d DO 0\n",tok-2); tok-=2; }
#line 2330 "pascal.tab.c" /* glr.c:783  */
    break;

  case 170:
#line 649 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  open_if_statement  4 %d %d %d %d\n",cnt,tok-1,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval),tok-2,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval)); printf("%d IF 0\n",tok-1);printf("%d THEN 0\n",tok-2); tok-=2; }
#line 2336 "pascal.tab.c" /* glr.c:783  */
    break;

  case 171:
#line 651 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  open_if_statement  6 %d %d %d %d %d %d\n",cnt,tok-1,(((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval),tok-2,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval),tok-3,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval)); printf("%d IF 0\n",tok-1);printf("%d THEN 0\n",tok-2);printf("%d ELSE 0\n",tok-3); tok-=3; }
#line 2342 "pascal.tab.c" /* glr.c:783  */
    break;

  case 172:
#line 656 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  closed_if_statement  6 %d %d %d %d %d %d\n",cnt,tok-1,(((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval),tok-2,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval),tok-3,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval)); printf("%d IF 0\n",tok-1);printf("%d THEN 0\n",tok-2);printf("%d ELSE 0\n",tok-3); tok-=3; }
#line 2348 "pascal.tab.c" /* glr.c:783  */
    break;

  case 173:
#line 661 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  assignment_statement  3 %d %d %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval),tok-1,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval)); printf("%d ASSIGNMENT 0\n",tok-1); tok-=1; }
#line 2354 "pascal.tab.c" /* glr.c:783  */
    break;

  case 174:
#line 666 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  variable_access  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 2360 "pascal.tab.c" /* glr.c:783  */
    break;

  case 175:
#line 668 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  variable_access  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 2366 "pascal.tab.c" /* glr.c:783  */
    break;

  case 176:
#line 670 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  variable_access  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 2372 "pascal.tab.c" /* glr.c:783  */
    break;

  case 177:
#line 672 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  variable_access  2 %d %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval),tok-1); printf("%d UPARROW 0\n",tok-1); tok-=1; }
#line 2378 "pascal.tab.c" /* glr.c:783  */
    break;

  case 178:
#line 677 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  indexed_variable  4 %d %d %d %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval),tok-1,(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval),tok-2); printf("%d LBRAC 0\n",tok-1);printf("%d RBRAC 0\n",tok-2); tok-=2; }
#line 2384 "pascal.tab.c" /* glr.c:783  */
    break;

  case 179:
#line 682 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  index_expression_list  3 %d %d %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 2390 "pascal.tab.c" /* glr.c:783  */
    break;

  case 180:
#line 684 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  index_expression_list  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 2396 "pascal.tab.c" /* glr.c:783  */
    break;

  case 181:
#line 689 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  index_expression  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 2402 "pascal.tab.c" /* glr.c:783  */
    break;

  case 182:
#line 694 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  field_designator  3 %d %d %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval),tok-1,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval)); printf("%d DOT 0\n",tok-1); tok-=1; }
#line 2408 "pascal.tab.c" /* glr.c:783  */
    break;

  case 183:
#line 699 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  procedure_statement  2 %d %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 2414 "pascal.tab.c" /* glr.c:783  */
    break;

  case 184:
#line 701 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  procedure_statement  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 2420 "pascal.tab.c" /* glr.c:783  */
    break;

  case 185:
#line 706 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  params  3 %d %d %d\n",cnt,tok-1,(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval),tok-2); printf("%d LPAREN 0\n",tok-1);printf("%d RPAREN 0\n",tok-2); tok-=2; }
#line 2426 "pascal.tab.c" /* glr.c:783  */
    break;

  case 186:
#line 711 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  actual_parameter_list  3 %d %d %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 2432 "pascal.tab.c" /* glr.c:783  */
    break;

  case 187:
#line 713 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  actual_parameter_list  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 2438 "pascal.tab.c" /* glr.c:783  */
    break;

  case 188:
#line 718 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d    actual_parameter  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 2444 "pascal.tab.c" /* glr.c:783  */
    break;

  case 189:
#line 720 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d    actual_parameter  3 %d %d %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval),tok-1,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval)); printf("%d COLON 0\n",tok-1); tok-=1; }
#line 2450 "pascal.tab.c" /* glr.c:783  */
    break;

  case 190:
#line 722 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d    actual_parameter  5 %d %d %d %d %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval),tok-1,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval),tok-2,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval)); printf("%d COLON 0\n",tok-1);printf("%d COLON 0\n",tok-2); tok-=2; }
#line 2456 "pascal.tab.c" /* glr.c:783  */
    break;

  case 191:
#line 727 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  goto_statement  2 %d %d\n",cnt,tok-1,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval)); printf("%d GOTO 0\n",tok-1); tok-=1; }
#line 2462 "pascal.tab.c" /* glr.c:783  */
    break;

  case 192:
#line 732 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  case_statement  5 %d %d %d %d %d\n",cnt,tok-1,(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval),tok-2,(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval),tok-3); printf("%d CASE 0\n",tok-1);printf("%d OF 0\n",tok-2);printf("%d END 0\n",tok-3); tok-=3; }
#line 2468 "pascal.tab.c" /* glr.c:783  */
    break;

  case 193:
#line 734 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  case_statement  6 %d %d %d %d %d %d\n",cnt,tok-1,(((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval),tok-2,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval),tok-3); printf("%d CASE 0\n",tok-1);printf("%d OF 0\n",tok-2);printf("%d END 0\n",tok-3); tok-=3; }
#line 2474 "pascal.tab.c" /* glr.c:783  */
    break;

  case 194:
#line 736 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  case_statement  8 %d %d %d %d %d %d %d %d\n",cnt,tok-1,(((yyGLRStackItem const *)yyvsp)[YYFILL (-6)].yystate.yysemantics.yysval),tok-2,(((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval),(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval),(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval),tok-3); printf("%d CASE 0\n",tok-1);printf("%d OF 0\n",tok-2);printf("%d END 0\n",tok-3); tok-=3; }
#line 2480 "pascal.tab.c" /* glr.c:783  */
    break;

  case 195:
#line 738 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  case_statement  9 %d %d %d %d %d %d %d %d %d\n",cnt,tok-1,(((yyGLRStackItem const *)yyvsp)[YYFILL (-7)].yystate.yysemantics.yysval),tok-2,(((yyGLRStackItem const *)yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval),(((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval),(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval),(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval),tok-3); printf("%d CASE 0\n",tok-1);printf("%d OF 0\n",tok-2);printf("%d END 0\n",tok-3); tok-=3; }
#line 2486 "pascal.tab.c" /* glr.c:783  */
    break;

  case 196:
#line 743 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  case_index  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 2492 "pascal.tab.c" /* glr.c:783  */
    break;

  case 197:
#line 748 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  case_list_element_list  3 %d %d %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 2498 "pascal.tab.c" /* glr.c:783  */
    break;

  case 198:
#line 750 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  case_list_element_list  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 2504 "pascal.tab.c" /* glr.c:783  */
    break;

  case 199:
#line 755 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  case_list_element  3 %d %d %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval),tok-1,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval)); printf("%d COLON 0\n",tok-1); tok-=1; }
#line 2510 "pascal.tab.c" /* glr.c:783  */
    break;

  case 200:
#line 760 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  otherwisepart  1 %d\n",cnt,tok-1); printf("%d OTHERWISE 0\n",tok-1); tok-=1; }
#line 2516 "pascal.tab.c" /* glr.c:783  */
    break;

  case 201:
#line 762 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  otherwisepart  2 %d %d\n",cnt,tok-1,tok-2); printf("%d OTHERWISE 0\n",tok-1);printf("%d COLON 0\n",tok-2); tok-=2; }
#line 2522 "pascal.tab.c" /* glr.c:783  */
    break;

  case 202:
#line 767 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  control_variable  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 2528 "pascal.tab.c" /* glr.c:783  */
    break;

  case 203:
#line 772 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  initial_value  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 2534 "pascal.tab.c" /* glr.c:783  */
    break;

  case 204:
#line 777 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  direction  1 %d\n",cnt,tok-1); printf("%d TO 0\n",tok-1); tok-=1; }
#line 2540 "pascal.tab.c" /* glr.c:783  */
    break;

  case 205:
#line 779 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  direction  1 %d\n",cnt,tok-1); printf("%d DOWNTO 0\n",tok-1); tok-=1; }
#line 2546 "pascal.tab.c" /* glr.c:783  */
    break;

  case 206:
#line 784 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  final_value  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 2552 "pascal.tab.c" /* glr.c:783  */
    break;

  case 207:
#line 789 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  record_variable_list  3 %d %d %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 2558 "pascal.tab.c" /* glr.c:783  */
    break;

  case 208:
#line 791 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  record_variable_list  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 2564 "pascal.tab.c" /* glr.c:783  */
    break;

  case 209:
#line 796 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  boolean_expression  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 2570 "pascal.tab.c" /* glr.c:783  */
    break;

  case 210:
#line 801 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  expression  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 2576 "pascal.tab.c" /* glr.c:783  */
    break;

  case 211:
#line 803 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  expression  3 %d %d %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 2582 "pascal.tab.c" /* glr.c:783  */
    break;

  case 212:
#line 808 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  simple_expression  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 2588 "pascal.tab.c" /* glr.c:783  */
    break;

  case 213:
#line 810 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  simple_expression  3 %d %d %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 2594 "pascal.tab.c" /* glr.c:783  */
    break;

  case 214:
#line 815 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  term  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 2600 "pascal.tab.c" /* glr.c:783  */
    break;

  case 215:
#line 817 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  term  3 %d %d %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 2606 "pascal.tab.c" /* glr.c:783  */
    break;

  case 216:
#line 822 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  factor  2 %d %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 2612 "pascal.tab.c" /* glr.c:783  */
    break;

  case 217:
#line 824 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  factor  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 2618 "pascal.tab.c" /* glr.c:783  */
    break;

  case 218:
#line 829 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d          exponentiation  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 2624 "pascal.tab.c" /* glr.c:783  */
    break;

  case 219:
#line 831 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d          exponentiation  3 %d %d %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval),tok-1,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval)); printf("%d STARSTAR 0\n",tok-1); tok-=1; }
#line 2630 "pascal.tab.c" /* glr.c:783  */
    break;

  case 220:
#line 836 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  primary  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 2636 "pascal.tab.c" /* glr.c:783  */
    break;

  case 221:
#line 838 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  primary  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 2642 "pascal.tab.c" /* glr.c:783  */
    break;

  case 222:
#line 840 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  primary  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 2648 "pascal.tab.c" /* glr.c:783  */
    break;

  case 223:
#line 842 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  primary  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 2654 "pascal.tab.c" /* glr.c:783  */
    break;

  case 224:
#line 844 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  primary  3 %d %d %d\n",cnt,tok-1,(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval),tok-2); printf("%d LPAREN 0\n",tok-1);printf("%d RPAREN 0\n",tok-2); tok-=2; }
#line 2660 "pascal.tab.c" /* glr.c:783  */
    break;

  case 225:
#line 846 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  primary  2 %d %d\n",cnt,tok-1,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval)); printf("%d NOT 0\n",tok-1); tok-=1; }
#line 2666 "pascal.tab.c" /* glr.c:783  */
    break;

  case 226:
#line 851 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  unsigned_constant  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 2672 "pascal.tab.c" /* glr.c:783  */
    break;

  case 227:
#line 853 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  unsigned_constant  1 %d\n",cnt,tok-1); printf("%d CHARACTER_STRING 0\n",tok-1); tok-=1; }
#line 2678 "pascal.tab.c" /* glr.c:783  */
    break;

  case 228:
#line 855 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  unsigned_constant  1 %d\n",cnt,tok-1); printf("%d NIL 0\n",tok-1); tok-=1; }
#line 2684 "pascal.tab.c" /* glr.c:783  */
    break;

  case 229:
#line 860 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  unsigned_number  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 2690 "pascal.tab.c" /* glr.c:783  */
    break;

  case 230:
#line 862 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  unsigned_number  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 2696 "pascal.tab.c" /* glr.c:783  */
    break;

  case 231:
#line 867 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  unsigned_integer  1 %d\n",cnt,tok-1); printf("%d DIGSEQ 0\n",tok-1); tok-=1; }
#line 2702 "pascal.tab.c" /* glr.c:783  */
    break;

  case 232:
#line 872 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  unsigned_real  1 %d\n",cnt,tok-1); printf("%d REALNUMBER 0\n",tok-1); tok-=1; }
#line 2708 "pascal.tab.c" /* glr.c:783  */
    break;

  case 233:
#line 877 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d    function_designator  2 %d %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 2714 "pascal.tab.c" /* glr.c:783  */
    break;

  case 234:
#line 882 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  set_constructor  3 %d %d %d\n",cnt,tok-1,(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval),tok-2); printf("%d LBRAC 0\n",tok-1);printf("%d RBRAC 0\n",tok-2); tok-=2; }
#line 2720 "pascal.tab.c" /* glr.c:783  */
    break;

  case 235:
#line 884 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  set_constructor  2 %d %d\n",cnt,tok-1,tok-2); printf("%d LBRAC 0\n",tok-1);printf("%d RBRAC 0\n",tok-2); tok-=2; }
#line 2726 "pascal.tab.c" /* glr.c:783  */
    break;

  case 236:
#line 889 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  member_designator_list  3 %d %d %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 2732 "pascal.tab.c" /* glr.c:783  */
    break;

  case 237:
#line 891 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  member_designator_list  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 2738 "pascal.tab.c" /* glr.c:783  */
    break;

  case 238:
#line 896 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  member_designator  3 %d %d %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval),tok-1,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval)); printf("%d DOTDOT 0\n",tok-1); tok-=1; }
#line 2744 "pascal.tab.c" /* glr.c:783  */
    break;

  case 239:
#line 898 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  member_designator  1 %d\n",cnt,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval));  tok-=0; }
#line 2750 "pascal.tab.c" /* glr.c:783  */
    break;

  case 240:
#line 903 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  addop 1 %d\n",cnt,tok-1); printf("%d PLUS 0\n",tok-1); tok-=1; }
#line 2756 "pascal.tab.c" /* glr.c:783  */
    break;

  case 241:
#line 905 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  addop 1 %d\n",cnt,tok-1); printf("%d MINUS 0\n",tok-1); tok-=1; }
#line 2762 "pascal.tab.c" /* glr.c:783  */
    break;

  case 242:
#line 907 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  addop 1 %d\n",cnt,tok-1); printf("%d OR 0\n",tok-1); tok-=1; }
#line 2768 "pascal.tab.c" /* glr.c:783  */
    break;

  case 243:
#line 909 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  addop 1 %d\n",cnt,tok-1); printf("%d XOR 0\n",tok-1); tok-=1; }
#line 2774 "pascal.tab.c" /* glr.c:783  */
    break;

  case 244:
#line 914 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  mulop  1 %d\n",cnt,tok-1); printf("%d STAR 0\n",tok-1); tok-=1; }
#line 2780 "pascal.tab.c" /* glr.c:783  */
    break;

  case 245:
#line 916 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  mulop  1 %d\n",cnt,tok-1); printf("%d SLASH 0\n",tok-1); tok-=1; }
#line 2786 "pascal.tab.c" /* glr.c:783  */
    break;

  case 246:
#line 918 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  mulop  1 %d\n",cnt,tok-1); printf("%d DIV 0\n",tok-1); tok-=1; }
#line 2792 "pascal.tab.c" /* glr.c:783  */
    break;

  case 247:
#line 920 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  mulop  1 %d\n",cnt,tok-1); printf("%d MOD 0\n",tok-1); tok-=1; }
#line 2798 "pascal.tab.c" /* glr.c:783  */
    break;

  case 248:
#line 922 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  mulop  1 %d\n",cnt,tok-1); printf("%d AND 0\n",tok-1); tok-=1; }
#line 2804 "pascal.tab.c" /* glr.c:783  */
    break;

  case 249:
#line 924 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  mulop  1 %d\n",cnt,tok-1); printf("%d SHL 0\n",tok-1); tok-=1; }
#line 2810 "pascal.tab.c" /* glr.c:783  */
    break;

  case 250:
#line 926 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  mulop  1 %d\n",cnt,tok-1); printf("%d SHR 0\n",tok-1); tok-=1; }
#line 2816 "pascal.tab.c" /* glr.c:783  */
    break;

  case 251:
#line 931 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  relop  1 %d\n",cnt,tok-1); printf("%d EQUAL 0\n",tok-1); tok-=1; }
#line 2822 "pascal.tab.c" /* glr.c:783  */
    break;

  case 252:
#line 933 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  relop  1 %d\n",cnt,tok-1); printf("%d NOTEQUAL 0\n",tok-1); tok-=1; }
#line 2828 "pascal.tab.c" /* glr.c:783  */
    break;

  case 253:
#line 935 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  relop  1 %d\n",cnt,tok-1); printf("%d LT 0\n",tok-1); tok-=1; }
#line 2834 "pascal.tab.c" /* glr.c:783  */
    break;

  case 254:
#line 937 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  relop  1 %d\n",cnt,tok-1); printf("%d GT 0\n",tok-1); tok-=1; }
#line 2840 "pascal.tab.c" /* glr.c:783  */
    break;

  case 255:
#line 939 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  relop  1 %d\n",cnt,tok-1); printf("%d LE 0\n",tok-1); tok-=1; }
#line 2846 "pascal.tab.c" /* glr.c:783  */
    break;

  case 256:
#line 941 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  relop  1 %d\n",cnt,tok-1); printf("%d GE 0\n",tok-1); tok-=1; }
#line 2852 "pascal.tab.c" /* glr.c:783  */
    break;

  case 257:
#line 943 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  relop  1 %d\n",cnt,tok-1); printf("%d IN 0\n",tok-1); tok-=1; }
#line 2858 "pascal.tab.c" /* glr.c:783  */
    break;

  case 258:
#line 948 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  identifier  1 %d\n",cnt,tok-1); printf("%d IDENTIFIER 0\n",tok-1); tok-=1; }
#line 2864 "pascal.tab.c" /* glr.c:783  */
    break;

  case 259:
#line 953 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  semicolon  1 %d\n",cnt,tok-1); printf("%d SEMICOLON 0\n",tok-1); tok-=1; }
#line 2870 "pascal.tab.c" /* glr.c:783  */
    break;

  case 260:
#line 958 "pascal.y" /* glr.c:783  */
    { ((*yyvalp))=++cnt; printf("%d  comma  1 %d\n",cnt,tok-1); printf("%d COMMA 0\n",tok-1); tok-=1; }
#line 2876 "pascal.tab.c" /* glr.c:783  */
    break;


#line 2880 "pascal.tab.c" /* glr.c:783  */
      default: break;
    }

  return yyok;
# undef yyerrok
# undef YYABORT
# undef YYACCEPT
# undef YYERROR
# undef YYBACKUP
# undef yyclearin
# undef YYRECOVERING
}


static void
yyuserMerge (int yyn, YYSTYPE* yy0, YYSTYPE* yy1)
{
  YYUSE (yy0);
  YYUSE (yy1);

  switch (yyn)
    {

      default: break;
    }
}

                              /* Bison grammar-table manipulation.  */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}

/** Number of symbols composing the right hand side of rule #RULE.  */
static inline int
yyrhsLength (yyRuleNum yyrule)
{
  return yyr2[yyrule];
}

static void
yydestroyGLRState (char const *yymsg, yyGLRState *yys)
{
  if (yys->yyresolved)
    yydestruct (yymsg, yystos[yys->yylrState],
                &yys->yysemantics.yysval);
  else
    {
#if YYDEBUG
      if (yydebug)
        {
          if (yys->yysemantics.yyfirstVal)
            YYFPRINTF (stderr, "%s unresolved", yymsg);
          else
            YYFPRINTF (stderr, "%s incomplete", yymsg);
          YY_SYMBOL_PRINT ("", yystos[yys->yylrState], YY_NULLPTR, &yys->yyloc);
        }
#endif

      if (yys->yysemantics.yyfirstVal)
        {
          yySemanticOption *yyoption = yys->yysemantics.yyfirstVal;
          yyGLRState *yyrh;
          int yyn;
          for (yyrh = yyoption->yystate, yyn = yyrhsLength (yyoption->yyrule);
               yyn > 0;
               yyrh = yyrh->yypred, yyn -= 1)
            yydestroyGLRState (yymsg, yyrh);
        }
    }
}

/** Left-hand-side symbol for rule #YYRULE.  */
static inline yySymbol
yylhsNonterm (yyRuleNum yyrule)
{
  return yyr1[yyrule];
}

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-302)))

/** True iff LR state YYSTATE has only a default reduction (regardless
 *  of token).  */
static inline yybool
yyisDefaultedState (yyStateNum yystate)
{
  return yypact_value_is_default (yypact[yystate]);
}

/** The default reduction for YYSTATE, assuming it has one.  */
static inline yyRuleNum
yydefaultAction (yyStateNum yystate)
{
  return yydefact[yystate];
}

#define yytable_value_is_error(Yytable_value) \
  0

/** Set *YYACTION to the action to take in YYSTATE on seeing YYTOKEN.
 *  Result R means
 *    R < 0:  Reduce on rule -R.
 *    R = 0:  Error.
 *    R > 0:  Shift to state R.
 *  Set *YYCONFLICTS to a pointer into yyconfl to a 0-terminated list
 *  of conflicting reductions.
 */
static inline void
yygetLRActions (yyStateNum yystate, int yytoken,
                int* yyaction, const short int** yyconflicts)
{
  int yyindex = yypact[yystate] + yytoken;
  if (yypact_value_is_default (yypact[yystate])
      || yyindex < 0 || YYLAST < yyindex || yycheck[yyindex] != yytoken)
    {
      *yyaction = -yydefact[yystate];
      *yyconflicts = yyconfl;
    }
  else if (! yytable_value_is_error (yytable[yyindex]))
    {
      *yyaction = yytable[yyindex];
      *yyconflicts = yyconfl + yyconflp[yyindex];
    }
  else
    {
      *yyaction = 0;
      *yyconflicts = yyconfl + yyconflp[yyindex];
    }
}

/** Compute post-reduction state.
 * \param yystate   the current state
 * \param yysym     the nonterminal to push on the stack
 */
static inline yyStateNum
yyLRgotoState (yyStateNum yystate, yySymbol yysym)
{
  int yyr = yypgoto[yysym - YYNTOKENS] + yystate;
  if (0 <= yyr && yyr <= YYLAST && yycheck[yyr] == yystate)
    return yytable[yyr];
  else
    return yydefgoto[yysym - YYNTOKENS];
}

static inline yybool
yyisShiftAction (int yyaction)
{
  return 0 < yyaction;
}

static inline yybool
yyisErrorAction (int yyaction)
{
  return yyaction == 0;
}

                                /* GLRStates */

/** Return a fresh GLRStackItem in YYSTACKP.  The item is an LR state
 *  if YYISSTATE, and otherwise a semantic option.  Callers should call
 *  YY_RESERVE_GLRSTACK afterwards to make sure there is sufficient
 *  headroom.  */

static inline yyGLRStackItem*
yynewGLRStackItem (yyGLRStack* yystackp, yybool yyisState)
{
  yyGLRStackItem* yynewItem = yystackp->yynextFree;
  yystackp->yyspaceLeft -= 1;
  yystackp->yynextFree += 1;
  yynewItem->yystate.yyisState = yyisState;
  return yynewItem;
}

/** Add a new semantic action that will execute the action for rule
 *  YYRULE on the semantic values in YYRHS to the list of
 *  alternative actions for YYSTATE.  Assumes that YYRHS comes from
 *  stack #YYK of *YYSTACKP. */
static void
yyaddDeferredAction (yyGLRStack* yystackp, size_t yyk, yyGLRState* yystate,
                     yyGLRState* yyrhs, yyRuleNum yyrule)
{
  yySemanticOption* yynewOption =
    &yynewGLRStackItem (yystackp, yyfalse)->yyoption;
  YYASSERT (!yynewOption->yyisState);
  yynewOption->yystate = yyrhs;
  yynewOption->yyrule = yyrule;
  if (yystackp->yytops.yylookaheadNeeds[yyk])
    {
      yynewOption->yyrawchar = yychar;
      yynewOption->yyval = yylval;
    }
  else
    yynewOption->yyrawchar = YYEMPTY;
  yynewOption->yynext = yystate->yysemantics.yyfirstVal;
  yystate->yysemantics.yyfirstVal = yynewOption;

  YY_RESERVE_GLRSTACK (yystackp);
}

                                /* GLRStacks */

/** Initialize YYSET to a singleton set containing an empty stack.  */
static yybool
yyinitStateSet (yyGLRStateSet* yyset)
{
  yyset->yysize = 1;
  yyset->yycapacity = 16;
  yyset->yystates = (yyGLRState**) YYMALLOC (16 * sizeof yyset->yystates[0]);
  if (! yyset->yystates)
    return yyfalse;
  yyset->yystates[0] = YY_NULLPTR;
  yyset->yylookaheadNeeds =
    (yybool*) YYMALLOC (16 * sizeof yyset->yylookaheadNeeds[0]);
  if (! yyset->yylookaheadNeeds)
    {
      YYFREE (yyset->yystates);
      return yyfalse;
    }
  return yytrue;
}

static void yyfreeStateSet (yyGLRStateSet* yyset)
{
  YYFREE (yyset->yystates);
  YYFREE (yyset->yylookaheadNeeds);
}

/** Initialize *YYSTACKP to a single empty stack, with total maximum
 *  capacity for all stacks of YYSIZE.  */
static yybool
yyinitGLRStack (yyGLRStack* yystackp, size_t yysize)
{
  yystackp->yyerrState = 0;
  yynerrs = 0;
  yystackp->yyspaceLeft = yysize;
  yystackp->yyitems =
    (yyGLRStackItem*) YYMALLOC (yysize * sizeof yystackp->yynextFree[0]);
  if (!yystackp->yyitems)
    return yyfalse;
  yystackp->yynextFree = yystackp->yyitems;
  yystackp->yysplitPoint = YY_NULLPTR;
  yystackp->yylastDeleted = YY_NULLPTR;
  return yyinitStateSet (&yystackp->yytops);
}


#if YYSTACKEXPANDABLE
# define YYRELOC(YYFROMITEMS,YYTOITEMS,YYX,YYTYPE) \
  &((YYTOITEMS) - ((YYFROMITEMS) - (yyGLRStackItem*) (YYX)))->YYTYPE

/** If *YYSTACKP is expandable, extend it.  WARNING: Pointers into the
    stack from outside should be considered invalid after this call.
    We always expand when there are 1 or fewer items left AFTER an
    allocation, so that we can avoid having external pointers exist
    across an allocation.  */
static void
yyexpandGLRStack (yyGLRStack* yystackp)
{
  yyGLRStackItem* yynewItems;
  yyGLRStackItem* yyp0, *yyp1;
  size_t yynewSize;
  size_t yyn;
  size_t yysize = yystackp->yynextFree - yystackp->yyitems;
  if (YYMAXDEPTH - YYHEADROOM < yysize)
    yyMemoryExhausted (yystackp);
  yynewSize = 2*yysize;
  if (YYMAXDEPTH < yynewSize)
    yynewSize = YYMAXDEPTH;
  yynewItems = (yyGLRStackItem*) YYMALLOC (yynewSize * sizeof yynewItems[0]);
  if (! yynewItems)
    yyMemoryExhausted (yystackp);
  for (yyp0 = yystackp->yyitems, yyp1 = yynewItems, yyn = yysize;
       0 < yyn;
       yyn -= 1, yyp0 += 1, yyp1 += 1)
    {
      *yyp1 = *yyp0;
      if (*(yybool *) yyp0)
        {
          yyGLRState* yys0 = &yyp0->yystate;
          yyGLRState* yys1 = &yyp1->yystate;
          if (yys0->yypred != YY_NULLPTR)
            yys1->yypred =
              YYRELOC (yyp0, yyp1, yys0->yypred, yystate);
          if (! yys0->yyresolved && yys0->yysemantics.yyfirstVal != YY_NULLPTR)
            yys1->yysemantics.yyfirstVal =
              YYRELOC (yyp0, yyp1, yys0->yysemantics.yyfirstVal, yyoption);
        }
      else
        {
          yySemanticOption* yyv0 = &yyp0->yyoption;
          yySemanticOption* yyv1 = &yyp1->yyoption;
          if (yyv0->yystate != YY_NULLPTR)
            yyv1->yystate = YYRELOC (yyp0, yyp1, yyv0->yystate, yystate);
          if (yyv0->yynext != YY_NULLPTR)
            yyv1->yynext = YYRELOC (yyp0, yyp1, yyv0->yynext, yyoption);
        }
    }
  if (yystackp->yysplitPoint != YY_NULLPTR)
    yystackp->yysplitPoint = YYRELOC (yystackp->yyitems, yynewItems,
                                      yystackp->yysplitPoint, yystate);

  for (yyn = 0; yyn < yystackp->yytops.yysize; yyn += 1)
    if (yystackp->yytops.yystates[yyn] != YY_NULLPTR)
      yystackp->yytops.yystates[yyn] =
        YYRELOC (yystackp->yyitems, yynewItems,
                 yystackp->yytops.yystates[yyn], yystate);
  YYFREE (yystackp->yyitems);
  yystackp->yyitems = yynewItems;
  yystackp->yynextFree = yynewItems + yysize;
  yystackp->yyspaceLeft = yynewSize - yysize;
}
#endif

static void
yyfreeGLRStack (yyGLRStack* yystackp)
{
  YYFREE (yystackp->yyitems);
  yyfreeStateSet (&yystackp->yytops);
}

/** Assuming that YYS is a GLRState somewhere on *YYSTACKP, update the
 *  splitpoint of *YYSTACKP, if needed, so that it is at least as deep as
 *  YYS.  */
static inline void
yyupdateSplit (yyGLRStack* yystackp, yyGLRState* yys)
{
  if (yystackp->yysplitPoint != YY_NULLPTR && yystackp->yysplitPoint > yys)
    yystackp->yysplitPoint = yys;
}

/** Invalidate stack #YYK in *YYSTACKP.  */
static inline void
yymarkStackDeleted (yyGLRStack* yystackp, size_t yyk)
{
  if (yystackp->yytops.yystates[yyk] != YY_NULLPTR)
    yystackp->yylastDeleted = yystackp->yytops.yystates[yyk];
  yystackp->yytops.yystates[yyk] = YY_NULLPTR;
}

/** Undelete the last stack in *YYSTACKP that was marked as deleted.  Can
    only be done once after a deletion, and only when all other stacks have
    been deleted.  */
static void
yyundeleteLastStack (yyGLRStack* yystackp)
{
  if (yystackp->yylastDeleted == YY_NULLPTR || yystackp->yytops.yysize != 0)
    return;
  yystackp->yytops.yystates[0] = yystackp->yylastDeleted;
  yystackp->yytops.yysize = 1;
  YYDPRINTF ((stderr, "Restoring last deleted stack as stack #0.\n"));
  yystackp->yylastDeleted = YY_NULLPTR;
}

static inline void
yyremoveDeletes (yyGLRStack* yystackp)
{
  size_t yyi, yyj;
  yyi = yyj = 0;
  while (yyj < yystackp->yytops.yysize)
    {
      if (yystackp->yytops.yystates[yyi] == YY_NULLPTR)
        {
          if (yyi == yyj)
            {
              YYDPRINTF ((stderr, "Removing dead stacks.\n"));
            }
          yystackp->yytops.yysize -= 1;
        }
      else
        {
          yystackp->yytops.yystates[yyj] = yystackp->yytops.yystates[yyi];
          /* In the current implementation, it's unnecessary to copy
             yystackp->yytops.yylookaheadNeeds[yyi] since, after
             yyremoveDeletes returns, the parser immediately either enters
             deterministic operation or shifts a token.  However, it doesn't
             hurt, and the code might evolve to need it.  */
          yystackp->yytops.yylookaheadNeeds[yyj] =
            yystackp->yytops.yylookaheadNeeds[yyi];
          if (yyj != yyi)
            {
              YYDPRINTF ((stderr, "Rename stack %lu -> %lu.\n",
                          (unsigned long int) yyi, (unsigned long int) yyj));
            }
          yyj += 1;
        }
      yyi += 1;
    }
}

/** Shift to a new state on stack #YYK of *YYSTACKP, corresponding to LR
 * state YYLRSTATE, at input position YYPOSN, with (resolved) semantic
 * value *YYVALP and source location *YYLOCP.  */
static inline void
yyglrShift (yyGLRStack* yystackp, size_t yyk, yyStateNum yylrState,
            size_t yyposn,
            YYSTYPE* yyvalp)
{
  yyGLRState* yynewState = &yynewGLRStackItem (yystackp, yytrue)->yystate;

  yynewState->yylrState = yylrState;
  yynewState->yyposn = yyposn;
  yynewState->yyresolved = yytrue;
  yynewState->yypred = yystackp->yytops.yystates[yyk];
  yynewState->yysemantics.yysval = *yyvalp;
  yystackp->yytops.yystates[yyk] = yynewState;

  YY_RESERVE_GLRSTACK (yystackp);
}

/** Shift stack #YYK of *YYSTACKP, to a new state corresponding to LR
 *  state YYLRSTATE, at input position YYPOSN, with the (unresolved)
 *  semantic value of YYRHS under the action for YYRULE.  */
static inline void
yyglrShiftDefer (yyGLRStack* yystackp, size_t yyk, yyStateNum yylrState,
                 size_t yyposn, yyGLRState* yyrhs, yyRuleNum yyrule)
{
  yyGLRState* yynewState = &yynewGLRStackItem (yystackp, yytrue)->yystate;
  YYASSERT (yynewState->yyisState);

  yynewState->yylrState = yylrState;
  yynewState->yyposn = yyposn;
  yynewState->yyresolved = yyfalse;
  yynewState->yypred = yystackp->yytops.yystates[yyk];
  yynewState->yysemantics.yyfirstVal = YY_NULLPTR;
  yystackp->yytops.yystates[yyk] = yynewState;

  /* Invokes YY_RESERVE_GLRSTACK.  */
  yyaddDeferredAction (yystackp, yyk, yynewState, yyrhs, yyrule);
}

#if !YYDEBUG
# define YY_REDUCE_PRINT(Args)
#else
# define YY_REDUCE_PRINT(Args)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print Args;               \
} while (0)

/*----------------------------------------------------------------------.
| Report that stack #YYK of *YYSTACKP is going to be reduced by YYRULE. |
`----------------------------------------------------------------------*/

static inline void
yy_reduce_print (int yynormal, yyGLRStackItem* yyvsp, size_t yyk,
                 yyRuleNum yyrule)
{
  int yynrhs = yyrhsLength (yyrule);
  int yyi;
  YYFPRINTF (stderr, "Reducing stack %lu by rule %d (line %lu):\n",
             (unsigned long int) yyk, yyrule - 1,
             (unsigned long int) yyrline[yyrule]);
  if (! yynormal)
    yyfillin (yyvsp, 1, -yynrhs);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyvsp[yyi - yynrhs + 1].yystate.yylrState],
                       &yyvsp[yyi - yynrhs + 1].yystate.yysemantics.yysval
                                              );
      if (!yyvsp[yyi - yynrhs + 1].yystate.yyresolved)
        YYFPRINTF (stderr, " (unresolved)");
      YYFPRINTF (stderr, "\n");
    }
}
#endif

/** Pop the symbols consumed by reduction #YYRULE from the top of stack
 *  #YYK of *YYSTACKP, and perform the appropriate semantic action on their
 *  semantic values.  Assumes that all ambiguities in semantic values
 *  have been previously resolved.  Set *YYVALP to the resulting value,
 *  and *YYLOCP to the computed location (if any).  Return value is as
 *  for userAction.  */
static inline YYRESULTTAG
yydoAction (yyGLRStack* yystackp, size_t yyk, yyRuleNum yyrule,
            YYSTYPE* yyvalp)
{
  int yynrhs = yyrhsLength (yyrule);

  if (yystackp->yysplitPoint == YY_NULLPTR)
    {
      /* Standard special case: single stack.  */
      yyGLRStackItem* yyrhs = (yyGLRStackItem*) yystackp->yytops.yystates[yyk];
      YYASSERT (yyk == 0);
      yystackp->yynextFree -= yynrhs;
      yystackp->yyspaceLeft += yynrhs;
      yystackp->yytops.yystates[0] = & yystackp->yynextFree[-1].yystate;
      YY_REDUCE_PRINT ((1, yyrhs, yyk, yyrule));
      return yyuserAction (yyrule, yynrhs, yyrhs, yystackp,
                           yyvalp);
    }
  else
    {
      int yyi;
      yyGLRState* yys;
      yyGLRStackItem yyrhsVals[YYMAXRHS + YYMAXLEFT + 1];
      yys = yyrhsVals[YYMAXRHS + YYMAXLEFT].yystate.yypred
        = yystackp->yytops.yystates[yyk];
      for (yyi = 0; yyi < yynrhs; yyi += 1)
        {
          yys = yys->yypred;
          YYASSERT (yys);
        }
      yyupdateSplit (yystackp, yys);
      yystackp->yytops.yystates[yyk] = yys;
      YY_REDUCE_PRINT ((0, yyrhsVals + YYMAXRHS + YYMAXLEFT - 1, yyk, yyrule));
      return yyuserAction (yyrule, yynrhs, yyrhsVals + YYMAXRHS + YYMAXLEFT - 1,
                           yystackp, yyvalp);
    }
}

/** Pop items off stack #YYK of *YYSTACKP according to grammar rule YYRULE,
 *  and push back on the resulting nonterminal symbol.  Perform the
 *  semantic action associated with YYRULE and store its value with the
 *  newly pushed state, if YYFORCEEVAL or if *YYSTACKP is currently
 *  unambiguous.  Otherwise, store the deferred semantic action with
 *  the new state.  If the new state would have an identical input
 *  position, LR state, and predecessor to an existing state on the stack,
 *  it is identified with that existing state, eliminating stack #YYK from
 *  *YYSTACKP.  In this case, the semantic value is
 *  added to the options for the existing state's semantic value.
 */
static inline YYRESULTTAG
yyglrReduce (yyGLRStack* yystackp, size_t yyk, yyRuleNum yyrule,
             yybool yyforceEval)
{
  size_t yyposn = yystackp->yytops.yystates[yyk]->yyposn;

  if (yyforceEval || yystackp->yysplitPoint == YY_NULLPTR)
    {
      YYSTYPE yysval;

      YYRESULTTAG yyflag = yydoAction (yystackp, yyk, yyrule, &yysval);
      if (yyflag == yyerr && yystackp->yysplitPoint != YY_NULLPTR)
        {
          YYDPRINTF ((stderr, "Parse on stack %lu rejected by rule #%d.\n",
                     (unsigned long int) yyk, yyrule - 1));
        }
      if (yyflag != yyok)
        return yyflag;
      YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyrule], &yysval, &yyloc);
      yyglrShift (yystackp, yyk,
                  yyLRgotoState (yystackp->yytops.yystates[yyk]->yylrState,
                                 yylhsNonterm (yyrule)),
                  yyposn, &yysval);
    }
  else
    {
      size_t yyi;
      int yyn;
      yyGLRState* yys, *yys0 = yystackp->yytops.yystates[yyk];
      yyStateNum yynewLRState;

      for (yys = yystackp->yytops.yystates[yyk], yyn = yyrhsLength (yyrule);
           0 < yyn; yyn -= 1)
        {
          yys = yys->yypred;
          YYASSERT (yys);
        }
      yyupdateSplit (yystackp, yys);
      yynewLRState = yyLRgotoState (yys->yylrState, yylhsNonterm (yyrule));
      YYDPRINTF ((stderr,
                  "Reduced stack %lu by rule #%d; action deferred.  "
                  "Now in state %d.\n",
                  (unsigned long int) yyk, yyrule - 1, yynewLRState));
      for (yyi = 0; yyi < yystackp->yytops.yysize; yyi += 1)
        if (yyi != yyk && yystackp->yytops.yystates[yyi] != YY_NULLPTR)
          {
            yyGLRState *yysplit = yystackp->yysplitPoint;
            yyGLRState *yyp = yystackp->yytops.yystates[yyi];
            while (yyp != yys && yyp != yysplit && yyp->yyposn >= yyposn)
              {
                if (yyp->yylrState == yynewLRState && yyp->yypred == yys)
                  {
                    yyaddDeferredAction (yystackp, yyk, yyp, yys0, yyrule);
                    yymarkStackDeleted (yystackp, yyk);
                    YYDPRINTF ((stderr, "Merging stack %lu into stack %lu.\n",
                                (unsigned long int) yyk,
                                (unsigned long int) yyi));
                    return yyok;
                  }
                yyp = yyp->yypred;
              }
          }
      yystackp->yytops.yystates[yyk] = yys;
      yyglrShiftDefer (yystackp, yyk, yynewLRState, yyposn, yys0, yyrule);
    }
  return yyok;
}

static size_t
yysplitStack (yyGLRStack* yystackp, size_t yyk)
{
  if (yystackp->yysplitPoint == YY_NULLPTR)
    {
      YYASSERT (yyk == 0);
      yystackp->yysplitPoint = yystackp->yytops.yystates[yyk];
    }
  if (yystackp->yytops.yysize >= yystackp->yytops.yycapacity)
    {
      yyGLRState** yynewStates;
      yybool* yynewLookaheadNeeds;

      yynewStates = YY_NULLPTR;

      if (yystackp->yytops.yycapacity
          > (YYSIZEMAX / (2 * sizeof yynewStates[0])))
        yyMemoryExhausted (yystackp);
      yystackp->yytops.yycapacity *= 2;

      yynewStates =
        (yyGLRState**) YYREALLOC (yystackp->yytops.yystates,
                                  (yystackp->yytops.yycapacity
                                   * sizeof yynewStates[0]));
      if (yynewStates == YY_NULLPTR)
        yyMemoryExhausted (yystackp);
      yystackp->yytops.yystates = yynewStates;

      yynewLookaheadNeeds =
        (yybool*) YYREALLOC (yystackp->yytops.yylookaheadNeeds,
                             (yystackp->yytops.yycapacity
                              * sizeof yynewLookaheadNeeds[0]));
      if (yynewLookaheadNeeds == YY_NULLPTR)
        yyMemoryExhausted (yystackp);
      yystackp->yytops.yylookaheadNeeds = yynewLookaheadNeeds;
    }
  yystackp->yytops.yystates[yystackp->yytops.yysize]
    = yystackp->yytops.yystates[yyk];
  yystackp->yytops.yylookaheadNeeds[yystackp->yytops.yysize]
    = yystackp->yytops.yylookaheadNeeds[yyk];
  yystackp->yytops.yysize += 1;
  return yystackp->yytops.yysize-1;
}

/** True iff YYY0 and YYY1 represent identical options at the top level.
 *  That is, they represent the same rule applied to RHS symbols
 *  that produce the same terminal symbols.  */
static yybool
yyidenticalOptions (yySemanticOption* yyy0, yySemanticOption* yyy1)
{
  if (yyy0->yyrule == yyy1->yyrule)
    {
      yyGLRState *yys0, *yys1;
      int yyn;
      for (yys0 = yyy0->yystate, yys1 = yyy1->yystate,
           yyn = yyrhsLength (yyy0->yyrule);
           yyn > 0;
           yys0 = yys0->yypred, yys1 = yys1->yypred, yyn -= 1)
        if (yys0->yyposn != yys1->yyposn)
          return yyfalse;
      return yytrue;
    }
  else
    return yyfalse;
}

/** Assuming identicalOptions (YYY0,YYY1), destructively merge the
 *  alternative semantic values for the RHS-symbols of YYY1 and YYY0.  */
static void
yymergeOptionSets (yySemanticOption* yyy0, yySemanticOption* yyy1)
{
  yyGLRState *yys0, *yys1;
  int yyn;
  for (yys0 = yyy0->yystate, yys1 = yyy1->yystate,
       yyn = yyrhsLength (yyy0->yyrule);
       yyn > 0;
       yys0 = yys0->yypred, yys1 = yys1->yypred, yyn -= 1)
    {
      if (yys0 == yys1)
        break;
      else if (yys0->yyresolved)
        {
          yys1->yyresolved = yytrue;
          yys1->yysemantics.yysval = yys0->yysemantics.yysval;
        }
      else if (yys1->yyresolved)
        {
          yys0->yyresolved = yytrue;
          yys0->yysemantics.yysval = yys1->yysemantics.yysval;
        }
      else
        {
          yySemanticOption** yyz0p = &yys0->yysemantics.yyfirstVal;
          yySemanticOption* yyz1 = yys1->yysemantics.yyfirstVal;
          while (yytrue)
            {
              if (yyz1 == *yyz0p || yyz1 == YY_NULLPTR)
                break;
              else if (*yyz0p == YY_NULLPTR)
                {
                  *yyz0p = yyz1;
                  break;
                }
              else if (*yyz0p < yyz1)
                {
                  yySemanticOption* yyz = *yyz0p;
                  *yyz0p = yyz1;
                  yyz1 = yyz1->yynext;
                  (*yyz0p)->yynext = yyz;
                }
              yyz0p = &(*yyz0p)->yynext;
            }
          yys1->yysemantics.yyfirstVal = yys0->yysemantics.yyfirstVal;
        }
    }
}

/** Y0 and Y1 represent two possible actions to take in a given
 *  parsing state; return 0 if no combination is possible,
 *  1 if user-mergeable, 2 if Y0 is preferred, 3 if Y1 is preferred.  */
static int
yypreference (yySemanticOption* y0, yySemanticOption* y1)
{
  yyRuleNum r0 = y0->yyrule, r1 = y1->yyrule;
  int p0 = yydprec[r0], p1 = yydprec[r1];

  if (p0 == p1)
    {
      if (yymerger[r0] == 0 || yymerger[r0] != yymerger[r1])
        return 0;
      else
        return 1;
    }
  if (p0 == 0 || p1 == 0)
    return 0;
  if (p0 < p1)
    return 3;
  if (p1 < p0)
    return 2;
  return 0;
}

static YYRESULTTAG yyresolveValue (yyGLRState* yys,
                                   yyGLRStack* yystackp);


/** Resolve the previous YYN states starting at and including state YYS
 *  on *YYSTACKP. If result != yyok, some states may have been left
 *  unresolved possibly with empty semantic option chains.  Regardless
 *  of whether result = yyok, each state has been left with consistent
 *  data so that yydestroyGLRState can be invoked if necessary.  */
static YYRESULTTAG
yyresolveStates (yyGLRState* yys, int yyn,
                 yyGLRStack* yystackp)
{
  if (0 < yyn)
    {
      YYASSERT (yys->yypred);
      YYCHK (yyresolveStates (yys->yypred, yyn-1, yystackp));
      if (! yys->yyresolved)
        YYCHK (yyresolveValue (yys, yystackp));
    }
  return yyok;
}

/** Resolve the states for the RHS of YYOPT on *YYSTACKP, perform its
 *  user action, and return the semantic value and location in *YYVALP
 *  and *YYLOCP.  Regardless of whether result = yyok, all RHS states
 *  have been destroyed (assuming the user action destroys all RHS
 *  semantic values if invoked).  */
static YYRESULTTAG
yyresolveAction (yySemanticOption* yyopt, yyGLRStack* yystackp,
                 YYSTYPE* yyvalp)
{
  yyGLRStackItem yyrhsVals[YYMAXRHS + YYMAXLEFT + 1];
  int yynrhs = yyrhsLength (yyopt->yyrule);
  YYRESULTTAG yyflag =
    yyresolveStates (yyopt->yystate, yynrhs, yystackp);
  if (yyflag != yyok)
    {
      yyGLRState *yys;
      for (yys = yyopt->yystate; yynrhs > 0; yys = yys->yypred, yynrhs -= 1)
        yydestroyGLRState ("Cleanup: popping", yys);
      return yyflag;
    }

  yyrhsVals[YYMAXRHS + YYMAXLEFT].yystate.yypred = yyopt->yystate;
  {
    int yychar_current = yychar;
    YYSTYPE yylval_current = yylval;
    yychar = yyopt->yyrawchar;
    yylval = yyopt->yyval;
    yyflag = yyuserAction (yyopt->yyrule, yynrhs,
                           yyrhsVals + YYMAXRHS + YYMAXLEFT - 1,
                           yystackp, yyvalp);
    yychar = yychar_current;
    yylval = yylval_current;
  }
  return yyflag;
}

#if YYDEBUG
static void
yyreportTree (yySemanticOption* yyx, int yyindent)
{
  int yynrhs = yyrhsLength (yyx->yyrule);
  int yyi;
  yyGLRState* yys;
  yyGLRState* yystates[1 + YYMAXRHS];
  yyGLRState yyleftmost_state;

  for (yyi = yynrhs, yys = yyx->yystate; 0 < yyi; yyi -= 1, yys = yys->yypred)
    yystates[yyi] = yys;
  if (yys == YY_NULLPTR)
    {
      yyleftmost_state.yyposn = 0;
      yystates[0] = &yyleftmost_state;
    }
  else
    yystates[0] = yys;

  if (yyx->yystate->yyposn < yys->yyposn + 1)
    YYFPRINTF (stderr, "%*s%s -> <Rule %d, empty>\n",
               yyindent, "", yytokenName (yylhsNonterm (yyx->yyrule)),
               yyx->yyrule - 1);
  else
    YYFPRINTF (stderr, "%*s%s -> <Rule %d, tokens %lu .. %lu>\n",
               yyindent, "", yytokenName (yylhsNonterm (yyx->yyrule)),
               yyx->yyrule - 1, (unsigned long int) (yys->yyposn + 1),
               (unsigned long int) yyx->yystate->yyposn);
  for (yyi = 1; yyi <= yynrhs; yyi += 1)
    {
      if (yystates[yyi]->yyresolved)
        {
          if (yystates[yyi-1]->yyposn+1 > yystates[yyi]->yyposn)
            YYFPRINTF (stderr, "%*s%s <empty>\n", yyindent+2, "",
                       yytokenName (yystos[yystates[yyi]->yylrState]));
          else
            YYFPRINTF (stderr, "%*s%s <tokens %lu .. %lu>\n", yyindent+2, "",
                       yytokenName (yystos[yystates[yyi]->yylrState]),
                       (unsigned long int) (yystates[yyi-1]->yyposn + 1),
                       (unsigned long int) yystates[yyi]->yyposn);
        }
      else
        yyreportTree (yystates[yyi]->yysemantics.yyfirstVal, yyindent+2);
    }
}
#endif

static YYRESULTTAG
yyreportAmbiguity (yySemanticOption* yyx0,
                   yySemanticOption* yyx1)
{
  YYUSE (yyx0);
  YYUSE (yyx1);

#if YYDEBUG
  YYFPRINTF (stderr, "Ambiguity detected.\n");
  YYFPRINTF (stderr, "Option 1,\n");
  yyreportTree (yyx0, 2);
  YYFPRINTF (stderr, "\nOption 2,\n");
  yyreportTree (yyx1, 2);
  YYFPRINTF (stderr, "\n");
#endif

  yyerror (YY_("syntax is ambiguous"));
  return yyabort;
}

/** Resolve the ambiguity represented in state YYS in *YYSTACKP,
 *  perform the indicated actions, and set the semantic value of YYS.
 *  If result != yyok, the chain of semantic options in YYS has been
 *  cleared instead or it has been left unmodified except that
 *  redundant options may have been removed.  Regardless of whether
 *  result = yyok, YYS has been left with consistent data so that
 *  yydestroyGLRState can be invoked if necessary.  */
static YYRESULTTAG
yyresolveValue (yyGLRState* yys, yyGLRStack* yystackp)
{
  yySemanticOption* yyoptionList = yys->yysemantics.yyfirstVal;
  yySemanticOption* yybest = yyoptionList;
  yySemanticOption** yypp;
  yybool yymerge = yyfalse;
  YYSTYPE yysval;
  YYRESULTTAG yyflag;

  for (yypp = &yyoptionList->yynext; *yypp != YY_NULLPTR; )
    {
      yySemanticOption* yyp = *yypp;

      if (yyidenticalOptions (yybest, yyp))
        {
          yymergeOptionSets (yybest, yyp);
          *yypp = yyp->yynext;
        }
      else
        {
          switch (yypreference (yybest, yyp))
            {
            case 0:
              return yyreportAmbiguity (yybest, yyp);
              break;
            case 1:
              yymerge = yytrue;
              break;
            case 2:
              break;
            case 3:
              yybest = yyp;
              yymerge = yyfalse;
              break;
            default:
              /* This cannot happen so it is not worth a YYASSERT (yyfalse),
                 but some compilers complain if the default case is
                 omitted.  */
              break;
            }
          yypp = &yyp->yynext;
        }
    }

  if (yymerge)
    {
      yySemanticOption* yyp;
      int yyprec = yydprec[yybest->yyrule];
      yyflag = yyresolveAction (yybest, yystackp, &yysval);
      if (yyflag == yyok)
        for (yyp = yybest->yynext; yyp != YY_NULLPTR; yyp = yyp->yynext)
          {
            if (yyprec == yydprec[yyp->yyrule])
              {
                YYSTYPE yysval_other;
                yyflag = yyresolveAction (yyp, yystackp, &yysval_other);
                if (yyflag != yyok)
                  {
                    yydestruct ("Cleanup: discarding incompletely merged value for",
                                yystos[yys->yylrState],
                                &yysval);
                    break;
                  }
                yyuserMerge (yymerger[yyp->yyrule], &yysval, &yysval_other);
              }
          }
    }
  else
    yyflag = yyresolveAction (yybest, yystackp, &yysval);

  if (yyflag == yyok)
    {
      yys->yyresolved = yytrue;
      yys->yysemantics.yysval = yysval;
    }
  else
    yys->yysemantics.yyfirstVal = YY_NULLPTR;
  return yyflag;
}

static YYRESULTTAG
yyresolveStack (yyGLRStack* yystackp)
{
  if (yystackp->yysplitPoint != YY_NULLPTR)
    {
      yyGLRState* yys;
      int yyn;

      for (yyn = 0, yys = yystackp->yytops.yystates[0];
           yys != yystackp->yysplitPoint;
           yys = yys->yypred, yyn += 1)
        continue;
      YYCHK (yyresolveStates (yystackp->yytops.yystates[0], yyn, yystackp
                             ));
    }
  return yyok;
}

static void
yycompressStack (yyGLRStack* yystackp)
{
  yyGLRState* yyp, *yyq, *yyr;

  if (yystackp->yytops.yysize != 1 || yystackp->yysplitPoint == YY_NULLPTR)
    return;

  for (yyp = yystackp->yytops.yystates[0], yyq = yyp->yypred, yyr = YY_NULLPTR;
       yyp != yystackp->yysplitPoint;
       yyr = yyp, yyp = yyq, yyq = yyp->yypred)
    yyp->yypred = yyr;

  yystackp->yyspaceLeft += yystackp->yynextFree - yystackp->yyitems;
  yystackp->yynextFree = ((yyGLRStackItem*) yystackp->yysplitPoint) + 1;
  yystackp->yyspaceLeft -= yystackp->yynextFree - yystackp->yyitems;
  yystackp->yysplitPoint = YY_NULLPTR;
  yystackp->yylastDeleted = YY_NULLPTR;

  while (yyr != YY_NULLPTR)
    {
      yystackp->yynextFree->yystate = *yyr;
      yyr = yyr->yypred;
      yystackp->yynextFree->yystate.yypred = &yystackp->yynextFree[-1].yystate;
      yystackp->yytops.yystates[0] = &yystackp->yynextFree->yystate;
      yystackp->yynextFree += 1;
      yystackp->yyspaceLeft -= 1;
    }
}

static YYRESULTTAG
yyprocessOneStack (yyGLRStack* yystackp, size_t yyk,
                   size_t yyposn)
{
  while (yystackp->yytops.yystates[yyk] != YY_NULLPTR)
    {
      yyStateNum yystate = yystackp->yytops.yystates[yyk]->yylrState;
      YYDPRINTF ((stderr, "Stack %lu Entering state %d\n",
                  (unsigned long int) yyk, yystate));

      YYASSERT (yystate != YYFINAL);

      if (yyisDefaultedState (yystate))
        {
          YYRESULTTAG yyflag;
          yyRuleNum yyrule = yydefaultAction (yystate);
          if (yyrule == 0)
            {
              YYDPRINTF ((stderr, "Stack %lu dies.\n",
                          (unsigned long int) yyk));
              yymarkStackDeleted (yystackp, yyk);
              return yyok;
            }
          yyflag = yyglrReduce (yystackp, yyk, yyrule, yyimmediate[yyrule]);
          if (yyflag == yyerr)
            {
              YYDPRINTF ((stderr,
                          "Stack %lu dies "
                          "(predicate failure or explicit user error).\n",
                          (unsigned long int) yyk));
              yymarkStackDeleted (yystackp, yyk);
              return yyok;
            }
          if (yyflag != yyok)
            return yyflag;
        }
      else
        {
          yySymbol yytoken;
          int yyaction;
          const short int* yyconflicts;

          yystackp->yytops.yylookaheadNeeds[yyk] = yytrue;
          if (yychar == YYEMPTY)
            {
              YYDPRINTF ((stderr, "Reading a token: "));
              yychar = yylex ();
            }

          if (yychar <= YYEOF)
            {
              yychar = yytoken = YYEOF;
              YYDPRINTF ((stderr, "Now at end of input.\n"));
            }
          else
            {
              yytoken = YYTRANSLATE (yychar);
              YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
            }

          yygetLRActions (yystate, yytoken, &yyaction, &yyconflicts);

          while (*yyconflicts != 0)
            {
              YYRESULTTAG yyflag;
              size_t yynewStack = yysplitStack (yystackp, yyk);
              YYDPRINTF ((stderr, "Splitting off stack %lu from %lu.\n",
                          (unsigned long int) yynewStack,
                          (unsigned long int) yyk));
              yyflag = yyglrReduce (yystackp, yynewStack,
                                    *yyconflicts,
                                    yyimmediate[*yyconflicts]);
              if (yyflag == yyok)
                YYCHK (yyprocessOneStack (yystackp, yynewStack,
                                          yyposn));
              else if (yyflag == yyerr)
                {
                  YYDPRINTF ((stderr, "Stack %lu dies.\n",
                              (unsigned long int) yynewStack));
                  yymarkStackDeleted (yystackp, yynewStack);
                }
              else
                return yyflag;
              yyconflicts += 1;
            }

          if (yyisShiftAction (yyaction))
            break;
          else if (yyisErrorAction (yyaction))
            {
              YYDPRINTF ((stderr, "Stack %lu dies.\n",
                          (unsigned long int) yyk));
              yymarkStackDeleted (yystackp, yyk);
              break;
            }
          else
            {
              YYRESULTTAG yyflag = yyglrReduce (yystackp, yyk, -yyaction,
                                                yyimmediate[-yyaction]);
              if (yyflag == yyerr)
                {
                  YYDPRINTF ((stderr,
                              "Stack %lu dies "
                              "(predicate failure or explicit user error).\n",
                              (unsigned long int) yyk));
                  yymarkStackDeleted (yystackp, yyk);
                  break;
                }
              else if (yyflag != yyok)
                return yyflag;
            }
        }
    }
  return yyok;
}

static void
yyreportSyntaxError (yyGLRStack* yystackp)
{
  if (yystackp->yyerrState != 0)
    return;
#if ! YYERROR_VERBOSE
  yyerror (YY_("syntax error"));
#else
  {
  yySymbol yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);
  size_t yysize0 = yytnamerr (YY_NULLPTR, yytokenName (yytoken));
  size_t yysize = yysize0;
  yybool yysize_overflow = yyfalse;
  char* yymsg = YY_NULLPTR;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected").  */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[yystackp->yytops.yystates[0]->yylrState];
      yyarg[yycount++] = yytokenName (yytoken);
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for this
             state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;
          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytokenName (yyx);
                {
                  size_t yysz = yysize + yytnamerr (YY_NULLPTR, yytokenName (yyx));
                  yysize_overflow |= yysz < yysize;
                  yysize = yysz;
                }
              }
        }
    }

  switch (yycount)
    {
#define YYCASE_(N, S)                   \
      case N:                           \
        yyformat = S;                   \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  {
    size_t yysz = yysize + strlen (yyformat);
    yysize_overflow |= yysz < yysize;
    yysize = yysz;
  }

  if (!yysize_overflow)
    yymsg = (char *) YYMALLOC (yysize);

  if (yymsg)
    {
      char *yyp = yymsg;
      int yyi = 0;
      while ((*yyp = *yyformat))
        {
          if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
            {
              yyp += yytnamerr (yyp, yyarg[yyi++]);
              yyformat += 2;
            }
          else
            {
              yyp++;
              yyformat++;
            }
        }
      yyerror (yymsg);
      YYFREE (yymsg);
    }
  else
    {
      yyerror (YY_("syntax error"));
      yyMemoryExhausted (yystackp);
    }
  }
#endif /* YYERROR_VERBOSE */
  yynerrs += 1;
}

/* Recover from a syntax error on *YYSTACKP, assuming that *YYSTACKP->YYTOKENP,
   yylval, and yylloc are the syntactic category, semantic value, and location
   of the lookahead.  */
static void
yyrecoverSyntaxError (yyGLRStack* yystackp)
{
  size_t yyk;
  int yyj;

  if (yystackp->yyerrState == 3)
    /* We just shifted the error token and (perhaps) took some
       reductions.  Skip tokens until we can proceed.  */
    while (yytrue)
      {
        yySymbol yytoken;
        if (yychar == YYEOF)
          yyFail (yystackp, YY_NULLPTR);
        if (yychar != YYEMPTY)
          {
            yytoken = YYTRANSLATE (yychar);
            yydestruct ("Error: discarding",
                        yytoken, &yylval);
          }
        YYDPRINTF ((stderr, "Reading a token: "));
        yychar = yylex ();
        if (yychar <= YYEOF)
          {
            yychar = yytoken = YYEOF;
            YYDPRINTF ((stderr, "Now at end of input.\n"));
          }
        else
          {
            yytoken = YYTRANSLATE (yychar);
            YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
          }
        yyj = yypact[yystackp->yytops.yystates[0]->yylrState];
        if (yypact_value_is_default (yyj))
          return;
        yyj += yytoken;
        if (yyj < 0 || YYLAST < yyj || yycheck[yyj] != yytoken)
          {
            if (yydefact[yystackp->yytops.yystates[0]->yylrState] != 0)
              return;
          }
        else if (! yytable_value_is_error (yytable[yyj]))
          return;
      }

  /* Reduce to one stack.  */
  for (yyk = 0; yyk < yystackp->yytops.yysize; yyk += 1)
    if (yystackp->yytops.yystates[yyk] != YY_NULLPTR)
      break;
  if (yyk >= yystackp->yytops.yysize)
    yyFail (yystackp, YY_NULLPTR);
  for (yyk += 1; yyk < yystackp->yytops.yysize; yyk += 1)
    yymarkStackDeleted (yystackp, yyk);
  yyremoveDeletes (yystackp);
  yycompressStack (yystackp);

  /* Now pop stack until we find a state that shifts the error token.  */
  yystackp->yyerrState = 3;
  while (yystackp->yytops.yystates[0] != YY_NULLPTR)
    {
      yyGLRState *yys = yystackp->yytops.yystates[0];
      yyj = yypact[yys->yylrState];
      if (! yypact_value_is_default (yyj))
        {
          yyj += YYTERROR;
          if (0 <= yyj && yyj <= YYLAST && yycheck[yyj] == YYTERROR
              && yyisShiftAction (yytable[yyj]))
            {
              /* Shift the error token.  */
              YY_SYMBOL_PRINT ("Shifting", yystos[yytable[yyj]],
                               &yylval, &yyerrloc);
              yyglrShift (yystackp, 0, yytable[yyj],
                          yys->yyposn, &yylval);
              yys = yystackp->yytops.yystates[0];
              break;
            }
        }
      if (yys->yypred != YY_NULLPTR)
        yydestroyGLRState ("Error: popping", yys);
      yystackp->yytops.yystates[0] = yys->yypred;
      yystackp->yynextFree -= 1;
      yystackp->yyspaceLeft += 1;
    }
  if (yystackp->yytops.yystates[0] == YY_NULLPTR)
    yyFail (yystackp, YY_NULLPTR);
}

#define YYCHK1(YYE)                                                          \
  do {                                                                       \
    switch (YYE) {                                                           \
    case yyok:                                                               \
      break;                                                                 \
    case yyabort:                                                            \
      goto yyabortlab;                                                       \
    case yyaccept:                                                           \
      goto yyacceptlab;                                                      \
    case yyerr:                                                              \
      goto yyuser_error;                                                     \
    default:                                                                 \
      goto yybuglab;                                                         \
    }                                                                        \
  } while (0)

/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
  int yyresult;
  yyGLRStack yystack;
  yyGLRStack* const yystackp = &yystack;
  size_t yyposn;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY;
  yylval = yyval_default;

  if (! yyinitGLRStack (yystackp, YYINITDEPTH))
    goto yyexhaustedlab;
  switch (YYSETJMP (yystack.yyexception_buffer))
    {
    case 0: break;
    case 1: goto yyabortlab;
    case 2: goto yyexhaustedlab;
    default: goto yybuglab;
    }
  yyglrShift (&yystack, 0, 0, 0, &yylval);
  yyposn = 0;

  while (yytrue)
    {
      /* For efficiency, we have two loops, the first of which is
         specialized to deterministic operation (single stack, no
         potential ambiguity).  */
      /* Standard mode */
      while (yytrue)
        {
          yyRuleNum yyrule;
          int yyaction;
          const short int* yyconflicts;

          yyStateNum yystate = yystack.yytops.yystates[0]->yylrState;
          YYDPRINTF ((stderr, "Entering state %d\n", yystate));
          if (yystate == YYFINAL)
            goto yyacceptlab;
          if (yyisDefaultedState (yystate))
            {
              yyrule = yydefaultAction (yystate);
              if (yyrule == 0)
                {

                  yyreportSyntaxError (&yystack);
                  goto yyuser_error;
                }
              YYCHK1 (yyglrReduce (&yystack, 0, yyrule, yytrue));
            }
          else
            {
              yySymbol yytoken;
              if (yychar == YYEMPTY)
                {
                  YYDPRINTF ((stderr, "Reading a token: "));
                  yychar = yylex ();
                }

              if (yychar <= YYEOF)
                {
                  yychar = yytoken = YYEOF;
                  YYDPRINTF ((stderr, "Now at end of input.\n"));
                }
              else
                {
                  yytoken = YYTRANSLATE (yychar);
                  YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
                }

              yygetLRActions (yystate, yytoken, &yyaction, &yyconflicts);
              if (*yyconflicts != 0)
                break;
              if (yyisShiftAction (yyaction))
                {
                  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
                  yychar = YYEMPTY;
                  yyposn += 1;
                  yyglrShift (&yystack, 0, yyaction, yyposn, &yylval);
                  if (0 < yystack.yyerrState)
                    yystack.yyerrState -= 1;
                }
              else if (yyisErrorAction (yyaction))
                {

                  yyreportSyntaxError (&yystack);
                  goto yyuser_error;
                }
              else
                YYCHK1 (yyglrReduce (&yystack, 0, -yyaction, yytrue));
            }
        }

      while (yytrue)
        {
          yySymbol yytoken_to_shift;
          size_t yys;

          for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
            yystackp->yytops.yylookaheadNeeds[yys] = yychar != YYEMPTY;

          /* yyprocessOneStack returns one of three things:

              - An error flag.  If the caller is yyprocessOneStack, it
                immediately returns as well.  When the caller is finally
                yyparse, it jumps to an error label via YYCHK1.

              - yyok, but yyprocessOneStack has invoked yymarkStackDeleted
                (&yystack, yys), which sets the top state of yys to NULL.  Thus,
                yyparse's following invocation of yyremoveDeletes will remove
                the stack.

              - yyok, when ready to shift a token.

             Except in the first case, yyparse will invoke yyremoveDeletes and
             then shift the next token onto all remaining stacks.  This
             synchronization of the shift (that is, after all preceding
             reductions on all stacks) helps prevent double destructor calls
             on yylval in the event of memory exhaustion.  */

          for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
            YYCHK1 (yyprocessOneStack (&yystack, yys, yyposn));
          yyremoveDeletes (&yystack);
          if (yystack.yytops.yysize == 0)
            {
              yyundeleteLastStack (&yystack);
              if (yystack.yytops.yysize == 0)
                yyFail (&yystack, YY_("syntax error"));
              YYCHK1 (yyresolveStack (&yystack));
              YYDPRINTF ((stderr, "Returning to deterministic operation.\n"));

              yyreportSyntaxError (&yystack);
              goto yyuser_error;
            }

          /* If any yyglrShift call fails, it will fail after shifting.  Thus,
             a copy of yylval will already be on stack 0 in the event of a
             failure in the following loop.  Thus, yychar is set to YYEMPTY
             before the loop to make sure the user destructor for yylval isn't
             called twice.  */
          yytoken_to_shift = YYTRANSLATE (yychar);
          yychar = YYEMPTY;
          yyposn += 1;
          for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
            {
              int yyaction;
              const short int* yyconflicts;
              yyStateNum yystate = yystack.yytops.yystates[yys]->yylrState;
              yygetLRActions (yystate, yytoken_to_shift, &yyaction,
                              &yyconflicts);
              /* Note that yyconflicts were handled by yyprocessOneStack.  */
              YYDPRINTF ((stderr, "On stack %lu, ", (unsigned long int) yys));
              YY_SYMBOL_PRINT ("shifting", yytoken_to_shift, &yylval, &yylloc);
              yyglrShift (&yystack, yys, yyaction, yyposn,
                          &yylval);
              YYDPRINTF ((stderr, "Stack %lu now in state #%d\n",
                          (unsigned long int) yys,
                          yystack.yytops.yystates[yys]->yylrState));
            }

          if (yystack.yytops.yysize == 1)
            {
              YYCHK1 (yyresolveStack (&yystack));
              YYDPRINTF ((stderr, "Returning to deterministic operation.\n"));
              yycompressStack (&yystack);
              break;
            }
        }
      continue;
    yyuser_error:
      yyrecoverSyntaxError (&yystack);
      yyposn = yystack.yytops.yystates[0]->yyposn;
    }

 yyacceptlab:
  yyresult = 0;
  goto yyreturn;

 yybuglab:
  YYASSERT (yyfalse);
  goto yyabortlab;

 yyabortlab:
  yyresult = 1;
  goto yyreturn;

 yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;

 yyreturn:
  if (yychar != YYEMPTY)
    yydestruct ("Cleanup: discarding lookahead",
                YYTRANSLATE (yychar), &yylval);

  /* If the stack is well-formed, pop the stack until it is empty,
     destroying its entries as we go.  But free the stack regardless
     of whether it is well-formed.  */
  if (yystack.yyitems)
    {
      yyGLRState** yystates = yystack.yytops.yystates;
      if (yystates)
        {
          size_t yysize = yystack.yytops.yysize;
          size_t yyk;
          for (yyk = 0; yyk < yysize; yyk += 1)
            if (yystates[yyk])
              {
                while (yystates[yyk])
                  {
                    yyGLRState *yys = yystates[yyk];
                  if (yys->yypred != YY_NULLPTR)
                      yydestroyGLRState ("Cleanup: popping", yys);
                    yystates[yyk] = yys->yypred;
                    yystack.yynextFree -= 1;
                    yystack.yyspaceLeft += 1;
                  }
                break;
              }
        }
      yyfreeGLRStack (&yystack);
    }

  return yyresult;
}

/* DEBUGGING ONLY */
#if YYDEBUG
static void
yy_yypstack (yyGLRState* yys)
{
  if (yys->yypred)
    {
      yy_yypstack (yys->yypred);
      YYFPRINTF (stderr, " -> ");
    }
  YYFPRINTF (stderr, "%d@%lu", yys->yylrState,
             (unsigned long int) yys->yyposn);
}

static void
yypstates (yyGLRState* yyst)
{
  if (yyst == YY_NULLPTR)
    YYFPRINTF (stderr, "<null>");
  else
    yy_yypstack (yyst);
  YYFPRINTF (stderr, "\n");
}

static void
yypstack (yyGLRStack* yystackp, size_t yyk)
{
  yypstates (yystackp->yytops.yystates[yyk]);
}

#define YYINDEX(YYX)                                                         \
    ((YYX) == YY_NULLPTR ? -1 : (yyGLRStackItem*) (YYX) - yystackp->yyitems)


static void
yypdumpstack (yyGLRStack* yystackp)
{
  yyGLRStackItem* yyp;
  size_t yyi;
  for (yyp = yystackp->yyitems; yyp < yystackp->yynextFree; yyp += 1)
    {
      YYFPRINTF (stderr, "%3lu. ",
                 (unsigned long int) (yyp - yystackp->yyitems));
      if (*(yybool *) yyp)
        {
          YYASSERT (yyp->yystate.yyisState);
          YYASSERT (yyp->yyoption.yyisState);
          YYFPRINTF (stderr, "Res: %d, LR State: %d, posn: %lu, pred: %ld",
                     yyp->yystate.yyresolved, yyp->yystate.yylrState,
                     (unsigned long int) yyp->yystate.yyposn,
                     (long int) YYINDEX (yyp->yystate.yypred));
          if (! yyp->yystate.yyresolved)
            YYFPRINTF (stderr, ", firstVal: %ld",
                       (long int) YYINDEX (yyp->yystate
                                             .yysemantics.yyfirstVal));
        }
      else
        {
          YYASSERT (!yyp->yystate.yyisState);
          YYASSERT (!yyp->yyoption.yyisState);
          YYFPRINTF (stderr, "Option. rule: %d, state: %ld, next: %ld",
                     yyp->yyoption.yyrule - 1,
                     (long int) YYINDEX (yyp->yyoption.yystate),
                     (long int) YYINDEX (yyp->yyoption.yynext));
        }
      YYFPRINTF (stderr, "\n");
    }
  YYFPRINTF (stderr, "Tops:");
  for (yyi = 0; yyi < yystackp->yytops.yysize; yyi += 1)
    YYFPRINTF (stderr, "%lu: %ld; ", (unsigned long int) yyi,
               (long int) YYINDEX (yystackp->yytops.yystates[yyi]));
  YYFPRINTF (stderr, "\n");
}
#endif

#undef yylval
#undef yychar
#undef yynerrs



#line 961 "pascal.y" /* glr.c:2551  */



extern int line_no;
extern char *yytext;

int yyerror(s)
char *s;
{
        fprintf(stderr, "%s: at or before '%s', line %d\n", 
                        s, yytext, line_no);
	return 1;
}


main (void)
{
	return yyparse();
}


