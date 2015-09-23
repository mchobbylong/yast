%{
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

%}

%token AND ARRAY ASSIGNMENT CASE CHARACTER_STRING
%token COLON COMMA CONST DIGSEQ DIV DO DOT DOTDOT
%token DOWNTO ELSE END EQUAL EXTERNAL FOR FORWARD
%token FUNCTION GE GOTO GT IDENTIFIER IF IN LABEL LBRAC
%token LE LPAREN LT MINUS MOD NIL NOT NOTEQUAL OF OR
%token OTHERWISE PACKED PBEGIN PFILE PLUS PROCEDURE
%token PROGRAM RBRAC REALNUMBER RECORD REPEAT RPAREN
%token SEMICOLON SET SLASH STAR STARSTAR THEN
%token TO TYPE UNTIL USES UPARROW VAR WHILE WITH
%token XOR SHL SHR


%glr-parser
%%
 file     :
	program          %dprec 1
	{ $$=++cnt; printf("%d  file     1 %d\n",cnt,$1);  tok-=0; }
	| module          %dprec 2
	{ $$=++cnt; printf("%d  file     1 %d\n",cnt,$1);  tok-=0; }
	;

 program  :
	program_heading semicolon block DOT          %dprec 1
	{ $$=++cnt; printf("%d  program  4 %d %d %d %d\n",cnt,$1,$2,$3,tok-1); printf("%d DOT 0\n",tok-1); tok-=1; }
	| block DOT          %dprec 2
	{ $$=++cnt; printf("%d  program  2 %d %d\n",cnt,$1,tok-1); printf("%d DOT 0\n",tok-1); tok-=1; }
	;

 program_heading  :
	PROGRAM identifier          %dprec 1
	{ $$=++cnt; printf("%d  program_heading  2 %d %d\n",cnt,tok-1,$2); printf("%d PROGRAM 0\n",tok-1); tok-=1; }
	| PROGRAM identifier LPAREN identifier_list RPAREN          %dprec 2
	{ $$=++cnt; printf("%d  program_heading  5 %d %d %d %d %d\n",cnt,tok-1,$2,tok-2,$4,tok-3); printf("%d PROGRAM 0\n",tok-1);printf("%d LPAREN 0\n",tok-2);printf("%d RPAREN 0\n",tok-3); tok-=3; }
	;

 identifier_list  :
	identifier_list COMMA identifier          %dprec 1
	{ $$=++cnt; printf("%d  identifier_list  3 %d %d %d\n",cnt,$1,tok-1,$3); printf("%d COMMA 0\n",tok-1); tok-=1; }
	| identifier          %dprec 2
	{ $$=++cnt; printf("%d  identifier_list  1 %d\n",cnt,$1);  tok-=0; }
	;

 block  :
	uses_declaration_part         label_declaration_part         constant_definition_part         type_definition_part         variable_declaration_part         procedure_and_function_declaration_part         statement_part          %dprec 1
	{ $$=++cnt; printf("%d  block  7 %d %d %d %d %d %d %d\n",cnt,$1,$2,$3,$4,$5,$6,$7);  tok-=0; }
	;

 module  :
	constant_definition_part         type_definition_part         variable_declaration_part         procedure_and_function_declaration_part          %dprec 1
	{ $$=++cnt; printf("%d  module  4 %d %d %d %d\n",cnt,$1,$2,$3,$4);  tok-=0; }
	;

 uses_declaration_part  :
	USES identifier semicolon          %dprec 1
	{ $$=++cnt; printf("%d  uses_declaration_part  3 %d %d %d\n",cnt,tok-1,$2,$3); printf("%d USES 0\n",tok-1); tok-=1; }
	|          %dprec 2
	{ $$=++cnt; printf("%d  uses_declaration_part  0\n",cnt);  tok-=0; }
	;

 label_declaration_part  :
	LABEL label_list semicolon          %dprec 1
	{ $$=++cnt; printf("%d  label_declaration_part  3 %d %d %d\n",cnt,tok-1,$2,$3); printf("%d LABEL 0\n",tok-1); tok-=1; }
	|          %dprec 2
	{ $$=++cnt; printf("%d  label_declaration_part  0\n",cnt);  tok-=0; }
	;

 label_list  :
	label_list comma label          %dprec 1
	{ $$=++cnt; printf("%d  label_list  3 %d %d %d\n",cnt,$1,$2,$3);  tok-=0; }
	| label          %dprec 2
	{ $$=++cnt; printf("%d  label_list  1 %d\n",cnt,$1);  tok-=0; }
	;

 label  :
	DIGSEQ          %dprec 1
	{ $$=++cnt; printf("%d  label  1 %d\n",cnt,tok-1); printf("%d DIGSEQ 0\n",tok-1); tok-=1; }
	;

 constant_definition_part  :
	CONST constant_list          %dprec 1
	{ $$=++cnt; printf("%d  constant_definition_part  2 %d %d\n",cnt,tok-1,$2); printf("%d CONST 0\n",tok-1); tok-=1; }
	|          %dprec 2
	{ $$=++cnt; printf("%d  constant_definition_part  0\n",cnt);  tok-=0; }
	;

 constant_list  :
	constant_list constant_definition          %dprec 1
	{ $$=++cnt; printf("%d  constant_list  2 %d %d\n",cnt,$1,$2);  tok-=0; }
	| constant_definition          %dprec 2
	{ $$=++cnt; printf("%d  constant_list  1 %d\n",cnt,$1);  tok-=0; }
	;

 constant_definition  :
	identifier EQUAL cexpression semicolon          %dprec 1
	{ $$=++cnt; printf("%d  constant_definition  4 %d %d %d %d\n",cnt,$1,tok-1,$3,$4); printf("%d EQUAL 0\n",tok-1); tok-=1; }
	;

 cexpression  :
	csimple_expression          %dprec 1
	{ $$=++cnt; printf("%d  cexpression  1 %d\n",cnt,$1);  tok-=0; }
	| csimple_expression relop csimple_expression          %dprec 2
	{ $$=++cnt; printf("%d  cexpression  3 %d %d %d\n",cnt,$1,$2,$3);  tok-=0; }
	;

 csimple_expression  :
	cterm          %dprec 1
	{ $$=++cnt; printf("%d  csimple_expression  1 %d\n",cnt,$1);  tok-=0; }
	| csimple_expression addop cterm          %dprec 2
	{ $$=++cnt; printf("%d  csimple_expression  3 %d %d %d\n",cnt,$1,$2,$3);  tok-=0; }
	;

 cterm  :
	cfactor          %dprec 1
	{ $$=++cnt; printf("%d  cterm  1 %d\n",cnt,$1);  tok-=0; }
	| cterm mulop cfactor          %dprec 2
	{ $$=++cnt; printf("%d  cterm  3 %d %d %d\n",cnt,$1,$2,$3);  tok-=0; }
	;

 cfactor  :
	sign cfactor          %dprec 1
	{ $$=++cnt; printf("%d  cfactor  2 %d %d\n",cnt,$1,$2);  tok-=0; }
	| cexponentiation          %dprec 2
	{ $$=++cnt; printf("%d  cfactor  1 %d\n",cnt,$1);  tok-=0; }
	;

 cexponentiation  :
	cprimary          %dprec 1
	{ $$=++cnt; printf("%d  cexponentiation  1 %d\n",cnt,$1);  tok-=0; }
	| cprimary STARSTAR cexponentiation          %dprec 2
	{ $$=++cnt; printf("%d  cexponentiation  3 %d %d %d\n",cnt,$1,tok-1,$3); printf("%d STARSTAR 0\n",tok-1); tok-=1; }
	;

 cprimary  :
	identifier          %dprec 1
	{ $$=++cnt; printf("%d  cprimary  1 %d\n",cnt,$1);  tok-=0; }
	| LPAREN cexpression RPAREN          %dprec 2
	{ $$=++cnt; printf("%d  cprimary  3 %d %d %d\n",cnt,tok-1,$2,tok-2); printf("%d LPAREN 0\n",tok-1);printf("%d RPAREN 0\n",tok-2); tok-=2; }
	| unsigned_constant          %dprec 3
	{ $$=++cnt; printf("%d  cprimary  1 %d\n",cnt,$1);  tok-=0; }
	| NOT cprimary          %dprec 4
	{ $$=++cnt; printf("%d  cprimary  2 %d %d\n",cnt,tok-1,$2); printf("%d NOT 0\n",tok-1); tok-=1; }
	;

 constant  :
	non_string          %dprec 1
	{ $$=++cnt; printf("%d  constant  1 %d\n",cnt,$1);  tok-=0; }
	| sign non_string          %dprec 2
	{ $$=++cnt; printf("%d  constant  2 %d %d\n",cnt,$1,$2);  tok-=0; }
	| CHARACTER_STRING          %dprec 3
	{ $$=++cnt; printf("%d  constant  1 %d\n",cnt,tok-1); printf("%d CHARACTER_STRING 0\n",tok-1); tok-=1; }
	;

 sign  :
	PLUS          %dprec 1
	{ $$=++cnt; printf("%d  sign  1 %d\n",cnt,tok-1); printf("%d PLUS 0\n",tok-1); tok-=1; }
	| MINUS          %dprec 2
	{ $$=++cnt; printf("%d  sign  1 %d\n",cnt,tok-1); printf("%d MINUS 0\n",tok-1); tok-=1; }
	;

 non_string  :
	DIGSEQ          %dprec 1
	{ $$=++cnt; printf("%d  non_string  1 %d\n",cnt,tok-1); printf("%d DIGSEQ 0\n",tok-1); tok-=1; }
	| identifier          %dprec 2
	{ $$=++cnt; printf("%d  non_string  1 %d\n",cnt,$1);  tok-=0; }
	| REALNUMBER          %dprec 3
	{ $$=++cnt; printf("%d  non_string  1 %d\n",cnt,tok-1); printf("%d REALNUMBER 0\n",tok-1); tok-=1; }
	;

 type_definition_part  :
	TYPE type_definition_list          %dprec 1
	{ $$=++cnt; printf("%d  type_definition_part  2 %d %d\n",cnt,tok-1,$2); printf("%d TYPE 0\n",tok-1); tok-=1; }
	|          %dprec 2
	{ $$=++cnt; printf("%d  type_definition_part  0\n",cnt);  tok-=0; }
	;

 type_definition_list  :
	type_definition_list type_definition          %dprec 1
	{ $$=++cnt; printf("%d  type_definition_list  2 %d %d\n",cnt,$1,$2);  tok-=0; }
	| type_definition          %dprec 2
	{ $$=++cnt; printf("%d  type_definition_list  1 %d\n",cnt,$1);  tok-=0; }
	;

 type_definition  :
	identifier EQUAL type_denoter semicolon          %dprec 1
	{ $$=++cnt; printf("%d  type_definition  4 %d %d %d %d\n",cnt,$1,tok-1,$3,$4); printf("%d EQUAL 0\n",tok-1); tok-=1; }
	;

 type_denoter  :
	identifier          %dprec 1
	{ $$=++cnt; printf("%d  type_denoter  1 %d\n",cnt,$1);  tok-=0; }
	| new_type          %dprec 2
	{ $$=++cnt; printf("%d  type_denoter  1 %d\n",cnt,$1);  tok-=0; }
	;

 new_type  :
	new_ordinal_type          %dprec 1
	{ $$=++cnt; printf("%d  new_type  1 %d\n",cnt,$1);  tok-=0; }
	| new_structured_type          %dprec 2
	{ $$=++cnt; printf("%d  new_type  1 %d\n",cnt,$1);  tok-=0; }
	| new_pointer_type          %dprec 3
	{ $$=++cnt; printf("%d  new_type  1 %d\n",cnt,$1);  tok-=0; }
	;

 new_ordinal_type  :
	enumerated_type          %dprec 1
	{ $$=++cnt; printf("%d  new_ordinal_type  1 %d\n",cnt,$1);  tok-=0; }
	| subrange_type          %dprec 2
	{ $$=++cnt; printf("%d  new_ordinal_type  1 %d\n",cnt,$1);  tok-=0; }
	;

 enumerated_type  :
	LPAREN identifier_list RPAREN          %dprec 1
	{ $$=++cnt; printf("%d  enumerated_type  3 %d %d %d\n",cnt,tok-1,$2,tok-2); printf("%d LPAREN 0\n",tok-1);printf("%d RPAREN 0\n",tok-2); tok-=2; }
	;

 subrange_type  :
	constant DOTDOT constant          %dprec 1
	{ $$=++cnt; printf("%d  subrange_type  3 %d %d %d\n",cnt,$1,tok-1,$3); printf("%d DOTDOT 0\n",tok-1); tok-=1; }
	;

 new_structured_type  :
	structured_type          %dprec 1
	{ $$=++cnt; printf("%d  new_structured_type  1 %d\n",cnt,$1);  tok-=0; }
	| PACKED structured_type          %dprec 2
	{ $$=++cnt; printf("%d  new_structured_type  2 %d %d\n",cnt,tok-1,$2); printf("%d PACKED 0\n",tok-1); tok-=1; }
	;

 structured_type  :
	array_type          %dprec 1
	{ $$=++cnt; printf("%d  structured_type  1 %d\n",cnt,$1);  tok-=0; }
	| record_type          %dprec 2
	{ $$=++cnt; printf("%d  structured_type  1 %d\n",cnt,$1);  tok-=0; }
	| set_type          %dprec 3
	{ $$=++cnt; printf("%d  structured_type  1 %d\n",cnt,$1);  tok-=0; }
	| file_type          %dprec 4
	{ $$=++cnt; printf("%d  structured_type  1 %d\n",cnt,$1);  tok-=0; }
	;

 array_type  :
	ARRAY LBRAC index_list RBRAC OF component_type          %dprec 1
	{ $$=++cnt; printf("%d  array_type  6 %d %d %d %d %d %d\n",cnt,tok-1,tok-2,$3,tok-3,tok-4,$6); printf("%d ARRAY 0\n",tok-1);printf("%d LBRAC 0\n",tok-2);printf("%d RBRAC 0\n",tok-3);printf("%d OF 0\n",tok-4); tok-=4; }
	;

 index_list  :
	index_list comma index_type          %dprec 1
	{ $$=++cnt; printf("%d  index_list  3 %d %d %d\n",cnt,$1,$2,$3);  tok-=0; }
	| index_type          %dprec 2
	{ $$=++cnt; printf("%d  index_list  1 %d\n",cnt,$1);  tok-=0; }
	;

 index_type  :
	ordinal_type  %dprec 1
	{ $$=++cnt; printf("%d  index_type  1 %d\n",cnt,$1);  tok-=0; }
	;

 ordinal_type  :
	new_ordinal_type          %dprec 1
	{ $$=++cnt; printf("%d  ordinal_type  1 %d\n",cnt,$1);  tok-=0; }
	| identifier          %dprec 2
	{ $$=++cnt; printf("%d  ordinal_type  1 %d\n",cnt,$1);  tok-=0; }
	;

 component_type  :
	type_denoter  %dprec 1
	{ $$=++cnt; printf("%d  component_type  1 %d\n",cnt,$1);  tok-=0; }
	;

 record_type  :
	RECORD record_section_list END          %dprec 1
	{ $$=++cnt; printf("%d  record_type  3 %d %d %d\n",cnt,tok-1,$2,tok-2); printf("%d RECORD 0\n",tok-1);printf("%d END 0\n",tok-2); tok-=2; }
	| RECORD record_section_list semicolon variant_part END          %dprec 2
	{ $$=++cnt; printf("%d  record_type  5 %d %d %d %d %d\n",cnt,tok-1,$2,$3,$4,tok-2); printf("%d RECORD 0\n",tok-1);printf("%d END 0\n",tok-2); tok-=2; }
	| RECORD variant_part END          %dprec 3
	{ $$=++cnt; printf("%d  record_type  3 %d %d %d\n",cnt,tok-1,$2,tok-2); printf("%d RECORD 0\n",tok-1);printf("%d END 0\n",tok-2); tok-=2; }
	;

 record_section_list  :
	record_section_list semicolon record_section          %dprec 1
	{ $$=++cnt; printf("%d  record_section_list  3 %d %d %d\n",cnt,$1,$2,$3);  tok-=0; }
	| record_section          %dprec 2
	{ $$=++cnt; printf("%d  record_section_list  1 %d\n",cnt,$1);  tok-=0; }
	;

 record_section  :
	identifier_list COLON type_denoter          %dprec 1
	{ $$=++cnt; printf("%d  record_section  3 %d %d %d\n",cnt,$1,tok-1,$3); printf("%d COLON 0\n",tok-1); tok-=1; }
	;

 variant_part  :
	CASE variant_selector OF variant_list semicolon          %dprec 1
	{ $$=++cnt; printf("%d  variant_part  5 %d %d %d %d %d\n",cnt,tok-1,$2,tok-2,$4,$5); printf("%d CASE 0\n",tok-1);printf("%d OF 0\n",tok-2); tok-=2; }
	| CASE variant_selector OF variant_list          %dprec 2
	{ $$=++cnt; printf("%d  variant_part  4 %d %d %d %d\n",cnt,tok-1,$2,tok-2,$4); printf("%d CASE 0\n",tok-1);printf("%d OF 0\n",tok-2); tok-=2; }
	|          %dprec 3
	{ $$=++cnt; printf("%d  variant_part  0\n",cnt);  tok-=0; }
	;

 variant_selector  :
	tag_field COLON tag_type          %dprec 1
	{ $$=++cnt; printf("%d  variant_selector  3 %d %d %d\n",cnt,$1,tok-1,$3); printf("%d COLON 0\n",tok-1); tok-=1; }
	| tag_type          %dprec 2
	{ $$=++cnt; printf("%d  variant_selector  1 %d\n",cnt,$1);  tok-=0; }
	;

 variant_list  :
	variant_list semicolon variant          %dprec 1
	{ $$=++cnt; printf("%d  variant_list  3 %d %d %d\n",cnt,$1,$2,$3);  tok-=0; }
	| variant          %dprec 2
	{ $$=++cnt; printf("%d  variant_list  1 %d\n",cnt,$1);  tok-=0; }
	;

 variant  :
	case_constant_list COLON LPAREN record_section_list RPAREN          %dprec 1
	{ $$=++cnt; printf("%d  variant  5 %d %d %d %d %d\n",cnt,$1,tok-1,tok-2,$4,tok-3); printf("%d COLON 0\n",tok-1);printf("%d LPAREN 0\n",tok-2);printf("%d RPAREN 0\n",tok-3); tok-=3; }
	| case_constant_list COLON LPAREN record_section_list semicolon                 variant_part RPAREN          %dprec 2
	{ $$=++cnt; printf("%d  variant  7 %d %d %d %d %d %d %d\n",cnt,$1,tok-1,tok-2,$4,$5,$6,tok-3); printf("%d COLON 0\n",tok-1);printf("%d LPAREN 0\n",tok-2);printf("%d RPAREN 0\n",tok-3); tok-=3; }
	| case_constant_list COLON LPAREN variant_part RPAREN          %dprec 3
	{ $$=++cnt; printf("%d  variant  5 %d %d %d %d %d\n",cnt,$1,tok-1,tok-2,$4,tok-3); printf("%d COLON 0\n",tok-1);printf("%d LPAREN 0\n",tok-2);printf("%d RPAREN 0\n",tok-3); tok-=3; }
	;

 case_constant_list  :
	case_constant_list comma case_constant          %dprec 1
	{ $$=++cnt; printf("%d  case_constant_list  3 %d %d %d\n",cnt,$1,$2,$3);  tok-=0; }
	| case_constant          %dprec 2
	{ $$=++cnt; printf("%d  case_constant_list  1 %d\n",cnt,$1);  tok-=0; }
	;

 case_constant  :
	constant          %dprec 1
	{ $$=++cnt; printf("%d  case_constant  1 %d\n",cnt,$1);  tok-=0; }
	| constant DOTDOT constant          %dprec 2
	{ $$=++cnt; printf("%d  case_constant  3 %d %d %d\n",cnt,$1,tok-1,$3); printf("%d DOTDOT 0\n",tok-1); tok-=1; }
	;

 tag_field  :
	identifier  %dprec 1
	{ $$=++cnt; printf("%d  tag_field  1 %d\n",cnt,$1);  tok-=0; }
	;

 tag_type  :
	identifier  %dprec 1
	{ $$=++cnt; printf("%d  tag_type  1 %d\n",cnt,$1);  tok-=0; }
	;

 set_type  :
	SET OF base_type          %dprec 1
	{ $$=++cnt; printf("%d  set_type  3 %d %d %d\n",cnt,tok-1,tok-2,$3); printf("%d SET 0\n",tok-1);printf("%d OF 0\n",tok-2); tok-=2; }
	;

 base_type  :
	ordinal_type  %dprec 1
	{ $$=++cnt; printf("%d  base_type  1 %d\n",cnt,$1);  tok-=0; }
	;

 file_type  :
	PFILE OF component_type          %dprec 1
	{ $$=++cnt; printf("%d  file_type  3 %d %d %d\n",cnt,tok-1,tok-2,$3); printf("%d PFILE 0\n",tok-1);printf("%d OF 0\n",tok-2); tok-=2; }
	;

 new_pointer_type  :
	UPARROW domain_type          %dprec 1
	{ $$=++cnt; printf("%d  new_pointer_type  2 %d %d\n",cnt,tok-1,$2); printf("%d UPARROW 0\n",tok-1); tok-=1; }
	;

 domain_type  :
	identifier  %dprec 1
	{ $$=++cnt; printf("%d  domain_type  1 %d\n",cnt,$1);  tok-=0; }
	;

 variable_declaration_part  :
	VAR variable_declaration_list semicolon          %dprec 1
	{ $$=++cnt; printf("%d  variable_declaration_part  3 %d %d %d\n",cnt,tok-1,$2,$3); printf("%d VAR 0\n",tok-1); tok-=1; }
	|          %dprec 2
	{ $$=++cnt; printf("%d  variable_declaration_part  0\n",cnt);  tok-=0; }
	;

 variable_declaration_list  :
	          variable_declaration_list semicolon variable_declaration          %dprec 1
	{ $$=++cnt; printf("%d  variable_declaration_list  3 %d %d %d\n",cnt,$1,$2,$3);  tok-=0; }
	| variable_declaration          %dprec 2
	{ $$=++cnt; printf("%d  variable_declaration_list  1 %d\n",cnt,$1);  tok-=0; }
	;

 variable_declaration  :
	identifier_list COLON type_denoter          %dprec 1
	{ $$=++cnt; printf("%d  variable_declaration  3 %d %d %d\n",cnt,$1,tok-1,$3); printf("%d COLON 0\n",tok-1); tok-=1; }
	;

 procedure_and_function_declaration_part  :
	          proc_or_func_declaration_list semicolon          %dprec 1
	{ $$=++cnt; printf("%d  procedure_and_function_declaration_part  2 %d %d\n",cnt,$1,$2);  tok-=0; }
	|          %dprec 2
	{ $$=++cnt; printf("%d  procedure_and_function_declaration_part  0\n",cnt);  tok-=0; }
	;

 proc_or_func_declaration_list  :
	          proc_or_func_declaration_list semicolon proc_or_func_declaration          %dprec 1
	{ $$=++cnt; printf("%d  proc_or_func_declaration_list  3 %d %d %d\n",cnt,$1,$2,$3);  tok-=0; }
	| proc_or_func_declaration          %dprec 2
	{ $$=++cnt; printf("%d  proc_or_func_declaration_list  1 %d\n",cnt,$1);  tok-=0; }
	;

 proc_or_func_declaration  :
	procedure_declaration          %dprec 1
	{ $$=++cnt; printf("%d  proc_or_func_declaration  1 %d\n",cnt,$1);  tok-=0; }
	| function_declaration          %dprec 2
	{ $$=++cnt; printf("%d  proc_or_func_declaration  1 %d\n",cnt,$1);  tok-=0; }
	;

 procedure_declaration  :
	procedure_heading semicolon directive          %dprec 1
	{ $$=++cnt; printf("%d  procedure_declaration  3 %d %d %d\n",cnt,$1,$2,$3);  tok-=0; }
	| procedure_heading semicolon procedure_block          %dprec 2
	{ $$=++cnt; printf("%d  procedure_declaration  3 %d %d %d\n",cnt,$1,$2,$3);  tok-=0; }
	;

 procedure_heading  :
	procedure_identification          %dprec 1
	{ $$=++cnt; printf("%d  procedure_heading  1 %d\n",cnt,$1);  tok-=0; }
	| procedure_identification formal_parameter_list          %dprec 2
	{ $$=++cnt; printf("%d  procedure_heading  2 %d %d\n",cnt,$1,$2);  tok-=0; }
	;

 directive  :
	FORWARD          %dprec 1
	{ $$=++cnt; printf("%d  directive  1 %d\n",cnt,tok-1); printf("%d FORWARD 0\n",tok-1); tok-=1; }
	| EXTERNAL          %dprec 2
	{ $$=++cnt; printf("%d  directive  1 %d\n",cnt,tok-1); printf("%d EXTERNAL 0\n",tok-1); tok-=1; }
	;

 formal_parameter_list  :
	LPAREN formal_parameter_section_list RPAREN  %dprec 1
	{ $$=++cnt; printf("%d  formal_parameter_list  3 %d %d %d\n",cnt,tok-1,$2,tok-2); printf("%d LPAREN 0\n",tok-1);printf("%d RPAREN 0\n",tok-2); tok-=2; }
	;

 formal_parameter_section_list  :
	           formal_parameter_section_list semicolon formal_parameter_section          %dprec 1
	{ $$=++cnt; printf("%d  formal_parameter_section_list  3 %d %d %d\n",cnt,$1,$2,$3);  tok-=0; }
	| formal_parameter_section          %dprec 2
	{ $$=++cnt; printf("%d  formal_parameter_section_list  1 %d\n",cnt,$1);  tok-=0; }
	;

 formal_parameter_section  :
	value_parameter_specification          %dprec 1
	{ $$=++cnt; printf("%d  formal_parameter_section  1 %d\n",cnt,$1);  tok-=0; }
	| variable_parameter_specification          %dprec 2
	{ $$=++cnt; printf("%d  formal_parameter_section  1 %d\n",cnt,$1);  tok-=0; }
	| procedural_parameter_specification          %dprec 3
	{ $$=++cnt; printf("%d  formal_parameter_section  1 %d\n",cnt,$1);  tok-=0; }
	| functional_parameter_specification          %dprec 4
	{ $$=++cnt; printf("%d  formal_parameter_section  1 %d\n",cnt,$1);  tok-=0; }
	;

 value_parameter_specification  :
	identifier_list COLON identifier          %dprec 1
	{ $$=++cnt; printf("%d  value_parameter_specification  3 %d %d %d\n",cnt,$1,tok-1,$3); printf("%d COLON 0\n",tok-1); tok-=1; }
	;

 variable_parameter_specification  :
	VAR identifier_list COLON identifier          %dprec 1
	{ $$=++cnt; printf("%d  variable_parameter_specification  4 %d %d %d %d\n",cnt,tok-1,$2,tok-2,$4); printf("%d VAR 0\n",tok-1);printf("%d COLON 0\n",tok-2); tok-=2; }
	;

 procedural_parameter_specification  :
	procedure_heading  %dprec 1
	{ $$=++cnt; printf("%d  procedural_parameter_specification  1 %d\n",cnt,$1);  tok-=0; }
	;

 functional_parameter_specification  :
	function_heading  %dprec 1
	{ $$=++cnt; printf("%d  functional_parameter_specification  1 %d\n",cnt,$1);  tok-=0; }
	;

 procedure_identification  :
	PROCEDURE identifier  %dprec 1
	{ $$=++cnt; printf("%d  procedure_identification  2 %d %d\n",cnt,tok-1,$2); printf("%d PROCEDURE 0\n",tok-1); tok-=1; }
	;

 procedure_block  :
	block  %dprec 1
	{ $$=++cnt; printf("%d  procedure_block  1 %d\n",cnt,$1);  tok-=0; }
	;

 function_declaration  :
	function_heading semicolon directive          %dprec 1
	{ $$=++cnt; printf("%d  function_declaration  3 %d %d %d\n",cnt,$1,$2,$3);  tok-=0; }
	| function_identification semicolon function_block          %dprec 2
	{ $$=++cnt; printf("%d  function_declaration  3 %d %d %d\n",cnt,$1,$2,$3);  tok-=0; }
	| function_heading semicolon function_block          %dprec 3
	{ $$=++cnt; printf("%d  function_declaration  3 %d %d %d\n",cnt,$1,$2,$3);  tok-=0; }
	;

 function_heading  :
	FUNCTION identifier COLON result_type          %dprec 1
	{ $$=++cnt; printf("%d  function_heading  4 %d %d %d %d\n",cnt,tok-1,$2,tok-2,$4); printf("%d FUNCTION 0\n",tok-1);printf("%d COLON 0\n",tok-2); tok-=2; }
	| FUNCTION identifier formal_parameter_list COLON result_type          %dprec 2
	{ $$=++cnt; printf("%d  function_heading  5 %d %d %d %d %d\n",cnt,tok-1,$2,$3,tok-2,$5); printf("%d FUNCTION 0\n",tok-1);printf("%d COLON 0\n",tok-2); tok-=2; }
	;

 result_type  :
	identifier  %dprec 1
	{ $$=++cnt; printf("%d  result_type  1 %d\n",cnt,$1);  tok-=0; }
	;

 function_identification  :
	FUNCTION identifier  %dprec 1
	{ $$=++cnt; printf("%d  function_identification  2 %d %d\n",cnt,tok-1,$2); printf("%d FUNCTION 0\n",tok-1); tok-=1; }
	;

 function_block  :
	block  %dprec 1
	{ $$=++cnt; printf("%d  function_block  1 %d\n",cnt,$1);  tok-=0; }
	;

 statement_part  :
	compound_statement  %dprec 1
	{ $$=++cnt; printf("%d  statement_part  1 %d\n",cnt,$1);  tok-=0; }
	;

 compound_statement  :
	PBEGIN statement_sequence END  %dprec 1
	{ $$=++cnt; printf("%d  compound_statement  3 %d %d %d\n",cnt,tok-1,$2,tok-2); printf("%d PBEGIN 0\n",tok-1);printf("%d END 0\n",tok-2); tok-=2; }
	;

 statement_sequence  :
	statement_sequence semicolon statement          %dprec 1
	{ $$=++cnt; printf("%d  statement_sequence  3 %d %d %d\n",cnt,$1,$2,$3);  tok-=0; }
	| statement          %dprec 2
	{ $$=++cnt; printf("%d  statement_sequence  1 %d\n",cnt,$1);  tok-=0; }
	;

 statement  :
	open_statement          %dprec 1
	{ $$=++cnt; printf("%d  statement  1 %d\n",cnt,$1);  tok-=0; }
	| closed_statement          %dprec 2
	{ $$=++cnt; printf("%d  statement  1 %d\n",cnt,$1);  tok-=0; }
	;

 open_statement  :
	label COLON non_labeled_open_statement          %dprec 1
	{ $$=++cnt; printf("%d  open_statement  3 %d %d %d\n",cnt,$1,tok-1,$3); printf("%d COLON 0\n",tok-1); tok-=1; }
	| non_labeled_open_statement          %dprec 2
	{ $$=++cnt; printf("%d  open_statement  1 %d\n",cnt,$1);  tok-=0; }
	;

 closed_statement  :
	label COLON non_labeled_closed_statement          %dprec 1
	{ $$=++cnt; printf("%d  closed_statement  3 %d %d %d\n",cnt,$1,tok-1,$3); printf("%d COLON 0\n",tok-1); tok-=1; }
	| non_labeled_closed_statement          %dprec 2
	{ $$=++cnt; printf("%d  closed_statement  1 %d\n",cnt,$1);  tok-=0; }
	;

 non_labeled_closed_statement  :
	assignment_statement          %dprec 1
	{ $$=++cnt; printf("%d  non_labeled_closed_statement  1 %d\n",cnt,$1);  tok-=0; }
	| procedure_statement          %dprec 2
	{ $$=++cnt; printf("%d  non_labeled_closed_statement  1 %d\n",cnt,$1);  tok-=0; }
	| goto_statement          %dprec 3
	{ $$=++cnt; printf("%d  non_labeled_closed_statement  1 %d\n",cnt,$1);  tok-=0; }
	| compound_statement          %dprec 4
	{ $$=++cnt; printf("%d  non_labeled_closed_statement  1 %d\n",cnt,$1);  tok-=0; }
	| case_statement          %dprec 5
	{ $$=++cnt; printf("%d  non_labeled_closed_statement  1 %d\n",cnt,$1);  tok-=0; }
	| repeat_statement          %dprec 6
	{ $$=++cnt; printf("%d  non_labeled_closed_statement  1 %d\n",cnt,$1);  tok-=0; }
	| closed_with_statement          %dprec 7
	{ $$=++cnt; printf("%d  non_labeled_closed_statement  1 %d\n",cnt,$1);  tok-=0; }
	| closed_if_statement          %dprec 8
	{ $$=++cnt; printf("%d  non_labeled_closed_statement  1 %d\n",cnt,$1);  tok-=0; }
	| closed_while_statement          %dprec 9
	{ $$=++cnt; printf("%d  non_labeled_closed_statement  1 %d\n",cnt,$1);  tok-=0; }
	| closed_for_statement          %dprec 10
	{ $$=++cnt; printf("%d  non_labeled_closed_statement  1 %d\n",cnt,$1);  tok-=0; }
	|          %dprec 11
	{ $$=++cnt; printf("%d  non_labeled_closed_statement  0\n",cnt);  tok-=0; }
	;

 non_labeled_open_statement  :
	open_with_statement          %dprec 1
	{ $$=++cnt; printf("%d  non_labeled_open_statement  1 %d\n",cnt,$1);  tok-=0; }
	| open_if_statement          %dprec 2
	{ $$=++cnt; printf("%d  non_labeled_open_statement  1 %d\n",cnt,$1);  tok-=0; }
	| open_while_statement          %dprec 3
	{ $$=++cnt; printf("%d  non_labeled_open_statement  1 %d\n",cnt,$1);  tok-=0; }
	| open_for_statement          %dprec 4
	{ $$=++cnt; printf("%d  non_labeled_open_statement  1 %d\n",cnt,$1);  tok-=0; }
	;

 repeat_statement  :
	REPEAT statement_sequence UNTIL boolean_expression          %dprec 1
	{ $$=++cnt; printf("%d  repeat_statement  4 %d %d %d %d\n",cnt,tok-1,$2,tok-2,$4); printf("%d REPEAT 0\n",tok-1);printf("%d UNTIL 0\n",tok-2); tok-=2; }
	;

 open_while_statement  :
	WHILE boolean_expression DO open_statement          %dprec 1
	{ $$=++cnt; printf("%d  open_while_statement  4 %d %d %d %d\n",cnt,tok-1,$2,tok-2,$4); printf("%d WHILE 0\n",tok-1);printf("%d DO 0\n",tok-2); tok-=2; }
	;

 closed_while_statement  :
	WHILE boolean_expression DO closed_statement          %dprec 1
	{ $$=++cnt; printf("%d  closed_while_statement  4 %d %d %d %d\n",cnt,tok-1,$2,tok-2,$4); printf("%d WHILE 0\n",tok-1);printf("%d DO 0\n",tok-2); tok-=2; }
	;

 open_for_statement  :
	FOR control_variable ASSIGNMENT initial_value direction                         final_value DO open_statement          %dprec 1
	{ $$=++cnt; printf("%d  open_for_statement  8 %d %d %d %d %d %d %d %d\n",cnt,tok-1,$2,tok-2,$4,$5,$6,tok-3,$8); printf("%d FOR 0\n",tok-1);printf("%d ASSIGNMENT 0\n",tok-2);printf("%d DO 0\n",tok-3); tok-=3; }
	;

 closed_for_statement  :
	FOR control_variable ASSIGNMENT initial_value direction                         final_value DO closed_statement          %dprec 1
	{ $$=++cnt; printf("%d  closed_for_statement  8 %d %d %d %d %d %d %d %d\n",cnt,tok-1,$2,tok-2,$4,$5,$6,tok-3,$8); printf("%d FOR 0\n",tok-1);printf("%d ASSIGNMENT 0\n",tok-2);printf("%d DO 0\n",tok-3); tok-=3; }
	;

 open_with_statement  :
	WITH record_variable_list DO open_statement          %dprec 1
	{ $$=++cnt; printf("%d  open_with_statement  4 %d %d %d %d\n",cnt,tok-1,$2,tok-2,$4); printf("%d WITH 0\n",tok-1);printf("%d DO 0\n",tok-2); tok-=2; }
	;

 closed_with_statement  :
	WITH record_variable_list DO closed_statement          %dprec 1
	{ $$=++cnt; printf("%d  closed_with_statement  4 %d %d %d %d\n",cnt,tok-1,$2,tok-2,$4); printf("%d WITH 0\n",tok-1);printf("%d DO 0\n",tok-2); tok-=2; }
	;

 open_if_statement  :
	IF boolean_expression THEN statement          %dprec 1
	{ $$=++cnt; printf("%d  open_if_statement  4 %d %d %d %d\n",cnt,tok-1,$2,tok-2,$4); printf("%d IF 0\n",tok-1);printf("%d THEN 0\n",tok-2); tok-=2; }
	| IF boolean_expression THEN closed_statement ELSE open_statement          %dprec 2
	{ $$=++cnt; printf("%d  open_if_statement  6 %d %d %d %d %d %d\n",cnt,tok-1,$2,tok-2,$4,tok-3,$6); printf("%d IF 0\n",tok-1);printf("%d THEN 0\n",tok-2);printf("%d ELSE 0\n",tok-3); tok-=3; }
	;

 closed_if_statement  :
	IF boolean_expression THEN closed_statement                         ELSE closed_statement          %dprec 1
	{ $$=++cnt; printf("%d  closed_if_statement  6 %d %d %d %d %d %d\n",cnt,tok-1,$2,tok-2,$4,tok-3,$6); printf("%d IF 0\n",tok-1);printf("%d THEN 0\n",tok-2);printf("%d ELSE 0\n",tok-3); tok-=3; }
	;

 assignment_statement  :
	variable_access ASSIGNMENT expression          %dprec 1
	{ $$=++cnt; printf("%d  assignment_statement  3 %d %d %d\n",cnt,$1,tok-1,$3); printf("%d ASSIGNMENT 0\n",tok-1); tok-=1; }
	;

 variable_access  :
	identifier          %dprec 1
	{ $$=++cnt; printf("%d  variable_access  1 %d\n",cnt,$1);  tok-=0; }
	| indexed_variable          %dprec 2
	{ $$=++cnt; printf("%d  variable_access  1 %d\n",cnt,$1);  tok-=0; }
	| field_designator          %dprec 3
	{ $$=++cnt; printf("%d  variable_access  1 %d\n",cnt,$1);  tok-=0; }
	| variable_access UPARROW          %dprec 4
	{ $$=++cnt; printf("%d  variable_access  2 %d %d\n",cnt,$1,tok-1); printf("%d UPARROW 0\n",tok-1); tok-=1; }
	;

 indexed_variable  :
	variable_access LBRAC index_expression_list RBRAC          %dprec 1
	{ $$=++cnt; printf("%d  indexed_variable  4 %d %d %d %d\n",cnt,$1,tok-1,$3,tok-2); printf("%d LBRAC 0\n",tok-1);printf("%d RBRAC 0\n",tok-2); tok-=2; }
	;

 index_expression_list  :
	index_expression_list comma index_expression          %dprec 1
	{ $$=++cnt; printf("%d  index_expression_list  3 %d %d %d\n",cnt,$1,$2,$3);  tok-=0; }
	| index_expression          %dprec 2
	{ $$=++cnt; printf("%d  index_expression_list  1 %d\n",cnt,$1);  tok-=0; }
	;

 index_expression  :
	expression  %dprec 1
	{ $$=++cnt; printf("%d  index_expression  1 %d\n",cnt,$1);  tok-=0; }
	;

 field_designator  :
	variable_access DOT identifier          %dprec 1
	{ $$=++cnt; printf("%d  field_designator  3 %d %d %d\n",cnt,$1,tok-1,$3); printf("%d DOT 0\n",tok-1); tok-=1; }
	;

 procedure_statement  :
	identifier params          %dprec 1
	{ $$=++cnt; printf("%d  procedure_statement  2 %d %d\n",cnt,$1,$2);  tok-=0; }
	| identifier          %dprec 2
	{ $$=++cnt; printf("%d  procedure_statement  1 %d\n",cnt,$1);  tok-=0; }
	;

 params  :
	LPAREN actual_parameter_list RPAREN  %dprec 1
	{ $$=++cnt; printf("%d  params  3 %d %d %d\n",cnt,tok-1,$2,tok-2); printf("%d LPAREN 0\n",tok-1);printf("%d RPAREN 0\n",tok-2); tok-=2; }
	;

 actual_parameter_list  :
	actual_parameter_list comma actual_parameter          %dprec 1
	{ $$=++cnt; printf("%d  actual_parameter_list  3 %d %d %d\n",cnt,$1,$2,$3);  tok-=0; }
	| actual_parameter          %dprec 2
	{ $$=++cnt; printf("%d  actual_parameter_list  1 %d\n",cnt,$1);  tok-=0; }
	;

   actual_parameter  :
	expression          %dprec 1
	{ $$=++cnt; printf("%d    actual_parameter  1 %d\n",cnt,$1);  tok-=0; }
	| expression COLON expression          %dprec 2
	{ $$=++cnt; printf("%d    actual_parameter  3 %d %d %d\n",cnt,$1,tok-1,$3); printf("%d COLON 0\n",tok-1); tok-=1; }
	| expression COLON expression COLON expression          %dprec 3
	{ $$=++cnt; printf("%d    actual_parameter  5 %d %d %d %d %d\n",cnt,$1,tok-1,$3,tok-2,$5); printf("%d COLON 0\n",tok-1);printf("%d COLON 0\n",tok-2); tok-=2; }
	;

 goto_statement  :
	GOTO label          %dprec 1
	{ $$=++cnt; printf("%d  goto_statement  2 %d %d\n",cnt,tok-1,$2); printf("%d GOTO 0\n",tok-1); tok-=1; }
	;

 case_statement  :
	CASE case_index OF case_list_element_list END          %dprec 1
	{ $$=++cnt; printf("%d  case_statement  5 %d %d %d %d %d\n",cnt,tok-1,$2,tok-2,$4,tok-3); printf("%d CASE 0\n",tok-1);printf("%d OF 0\n",tok-2);printf("%d END 0\n",tok-3); tok-=3; }
	| CASE case_index OF case_list_element_list semicolon END          %dprec 2
	{ $$=++cnt; printf("%d  case_statement  6 %d %d %d %d %d %d\n",cnt,tok-1,$2,tok-2,$4,$5,tok-3); printf("%d CASE 0\n",tok-1);printf("%d OF 0\n",tok-2);printf("%d END 0\n",tok-3); tok-=3; }
	| CASE case_index OF case_list_element_list semicolon                         otherwisepart statement END          %dprec 3
	{ $$=++cnt; printf("%d  case_statement  8 %d %d %d %d %d %d %d %d\n",cnt,tok-1,$2,tok-2,$4,$5,$6,$7,tok-3); printf("%d CASE 0\n",tok-1);printf("%d OF 0\n",tok-2);printf("%d END 0\n",tok-3); tok-=3; }
	| CASE case_index OF case_list_element_list semicolon                         otherwisepart statement semicolon END          %dprec 4
	{ $$=++cnt; printf("%d  case_statement  9 %d %d %d %d %d %d %d %d %d\n",cnt,tok-1,$2,tok-2,$4,$5,$6,$7,$8,tok-3); printf("%d CASE 0\n",tok-1);printf("%d OF 0\n",tok-2);printf("%d END 0\n",tok-3); tok-=3; }
	;

 case_index  :
	expression  %dprec 1
	{ $$=++cnt; printf("%d  case_index  1 %d\n",cnt,$1);  tok-=0; }
	;

 case_list_element_list  :
	case_list_element_list semicolon case_list_element          %dprec 1
	{ $$=++cnt; printf("%d  case_list_element_list  3 %d %d %d\n",cnt,$1,$2,$3);  tok-=0; }
	| case_list_element          %dprec 2
	{ $$=++cnt; printf("%d  case_list_element_list  1 %d\n",cnt,$1);  tok-=0; }
	;

 case_list_element  :
	case_constant_list COLON statement          %dprec 1
	{ $$=++cnt; printf("%d  case_list_element  3 %d %d %d\n",cnt,$1,tok-1,$3); printf("%d COLON 0\n",tok-1); tok-=1; }
	;

 otherwisepart  :
	OTHERWISE          %dprec 1
	{ $$=++cnt; printf("%d  otherwisepart  1 %d\n",cnt,tok-1); printf("%d OTHERWISE 0\n",tok-1); tok-=1; }
	| OTHERWISE COLON          %dprec 2
	{ $$=++cnt; printf("%d  otherwisepart  2 %d %d\n",cnt,tok-1,tok-2); printf("%d OTHERWISE 0\n",tok-1);printf("%d COLON 0\n",tok-2); tok-=2; }
	;

 control_variable  :
	identifier  %dprec 1
	{ $$=++cnt; printf("%d  control_variable  1 %d\n",cnt,$1);  tok-=0; }
	;

 initial_value  :
	expression  %dprec 1
	{ $$=++cnt; printf("%d  initial_value  1 %d\n",cnt,$1);  tok-=0; }
	;

 direction  :
	TO          %dprec 1
	{ $$=++cnt; printf("%d  direction  1 %d\n",cnt,tok-1); printf("%d TO 0\n",tok-1); tok-=1; }
	| DOWNTO          %dprec 2
	{ $$=++cnt; printf("%d  direction  1 %d\n",cnt,tok-1); printf("%d DOWNTO 0\n",tok-1); tok-=1; }
	;

 final_value  :
	expression  %dprec 1
	{ $$=++cnt; printf("%d  final_value  1 %d\n",cnt,$1);  tok-=0; }
	;

 record_variable_list  :
	record_variable_list comma variable_access          %dprec 1
	{ $$=++cnt; printf("%d  record_variable_list  3 %d %d %d\n",cnt,$1,$2,$3);  tok-=0; }
	| variable_access          %dprec 2
	{ $$=++cnt; printf("%d  record_variable_list  1 %d\n",cnt,$1);  tok-=0; }
	;

 boolean_expression  :
	expression  %dprec 1
	{ $$=++cnt; printf("%d  boolean_expression  1 %d\n",cnt,$1);  tok-=0; }
	;

 expression  :
	simple_expression          %dprec 1
	{ $$=++cnt; printf("%d  expression  1 %d\n",cnt,$1);  tok-=0; }
	| simple_expression relop simple_expression          %dprec 2
	{ $$=++cnt; printf("%d  expression  3 %d %d %d\n",cnt,$1,$2,$3);  tok-=0; }
	;

 simple_expression  :
	term          %dprec 1
	{ $$=++cnt; printf("%d  simple_expression  1 %d\n",cnt,$1);  tok-=0; }
	| simple_expression addop term          %dprec 2
	{ $$=++cnt; printf("%d  simple_expression  3 %d %d %d\n",cnt,$1,$2,$3);  tok-=0; }
	;

 term  :
	factor          %dprec 1
	{ $$=++cnt; printf("%d  term  1 %d\n",cnt,$1);  tok-=0; }
	| term mulop factor          %dprec 2
	{ $$=++cnt; printf("%d  term  3 %d %d %d\n",cnt,$1,$2,$3);  tok-=0; }
	;

 factor  :
	sign factor          %dprec 1
	{ $$=++cnt; printf("%d  factor  2 %d %d\n",cnt,$1,$2);  tok-=0; }
	| exponentiation          %dprec 2
	{ $$=++cnt; printf("%d  factor  1 %d\n",cnt,$1);  tok-=0; }
	;

         exponentiation  :
	primary          %dprec 1
	{ $$=++cnt; printf("%d          exponentiation  1 %d\n",cnt,$1);  tok-=0; }
	| primary STARSTAR exponentiation          %dprec 2
	{ $$=++cnt; printf("%d          exponentiation  3 %d %d %d\n",cnt,$1,tok-1,$3); printf("%d STARSTAR 0\n",tok-1); tok-=1; }
	;

 primary  :
	variable_access          %dprec 1
	{ $$=++cnt; printf("%d  primary  1 %d\n",cnt,$1);  tok-=0; }
	| unsigned_constant          %dprec 2
	{ $$=++cnt; printf("%d  primary  1 %d\n",cnt,$1);  tok-=0; }
	| function_designator          %dprec 3
	{ $$=++cnt; printf("%d  primary  1 %d\n",cnt,$1);  tok-=0; }
	| set_constructor          %dprec 4
	{ $$=++cnt; printf("%d  primary  1 %d\n",cnt,$1);  tok-=0; }
	| LPAREN expression RPAREN          %dprec 5
	{ $$=++cnt; printf("%d  primary  3 %d %d %d\n",cnt,tok-1,$2,tok-2); printf("%d LPAREN 0\n",tok-1);printf("%d RPAREN 0\n",tok-2); tok-=2; }
	| NOT primary          %dprec 6
	{ $$=++cnt; printf("%d  primary  2 %d %d\n",cnt,tok-1,$2); printf("%d NOT 0\n",tok-1); tok-=1; }
	;

 unsigned_constant  :
	unsigned_number          %dprec 1
	{ $$=++cnt; printf("%d  unsigned_constant  1 %d\n",cnt,$1);  tok-=0; }
	| CHARACTER_STRING          %dprec 2
	{ $$=++cnt; printf("%d  unsigned_constant  1 %d\n",cnt,tok-1); printf("%d CHARACTER_STRING 0\n",tok-1); tok-=1; }
	| NIL          %dprec 3
	{ $$=++cnt; printf("%d  unsigned_constant  1 %d\n",cnt,tok-1); printf("%d NIL 0\n",tok-1); tok-=1; }
	;

 unsigned_number  :
	unsigned_integer  %dprec 1
	{ $$=++cnt; printf("%d  unsigned_number  1 %d\n",cnt,$1);  tok-=0; }
	| unsigned_real  %dprec 2
	{ $$=++cnt; printf("%d  unsigned_number  1 %d\n",cnt,$1);  tok-=0; }
	;

 unsigned_integer  :
	DIGSEQ          %dprec 1
	{ $$=++cnt; printf("%d  unsigned_integer  1 %d\n",cnt,tok-1); printf("%d DIGSEQ 0\n",tok-1); tok-=1; }
	;

 unsigned_real  :
	REALNUMBER          %dprec 1
	{ $$=++cnt; printf("%d  unsigned_real  1 %d\n",cnt,tok-1); printf("%d REALNUMBER 0\n",tok-1); tok-=1; }
	;

   function_designator  :
	identifier params          %dprec 1
	{ $$=++cnt; printf("%d    function_designator  2 %d %d\n",cnt,$1,$2);  tok-=0; }
	;

 set_constructor  :
	LBRAC member_designator_list RBRAC          %dprec 1
	{ $$=++cnt; printf("%d  set_constructor  3 %d %d %d\n",cnt,tok-1,$2,tok-2); printf("%d LBRAC 0\n",tok-1);printf("%d RBRAC 0\n",tok-2); tok-=2; }
	| LBRAC RBRAC          %dprec 2
	{ $$=++cnt; printf("%d  set_constructor  2 %d %d\n",cnt,tok-1,tok-2); printf("%d LBRAC 0\n",tok-1);printf("%d RBRAC 0\n",tok-2); tok-=2; }
	;

 member_designator_list  :
	member_designator_list comma member_designator          %dprec 1
	{ $$=++cnt; printf("%d  member_designator_list  3 %d %d %d\n",cnt,$1,$2,$3);  tok-=0; }
	| member_designator          %dprec 2
	{ $$=++cnt; printf("%d  member_designator_list  1 %d\n",cnt,$1);  tok-=0; }
	;

 member_designator  :
	member_designator DOTDOT expression          %dprec 1
	{ $$=++cnt; printf("%d  member_designator  3 %d %d %d\n",cnt,$1,tok-1,$3); printf("%d DOTDOT 0\n",tok-1); tok-=1; }
	| expression          %dprec 2
	{ $$=++cnt; printf("%d  member_designator  1 %d\n",cnt,$1);  tok-=0; }
	;

 addop :
	PLUS          %dprec 1
	{ $$=++cnt; printf("%d  addop 1 %d\n",cnt,tok-1); printf("%d PLUS 0\n",tok-1); tok-=1; }
	| MINUS          %dprec 2
	{ $$=++cnt; printf("%d  addop 1 %d\n",cnt,tok-1); printf("%d MINUS 0\n",tok-1); tok-=1; }
	| OR          %dprec 3
	{ $$=++cnt; printf("%d  addop 1 %d\n",cnt,tok-1); printf("%d OR 0\n",tok-1); tok-=1; }
	| XOR          %dprec 4
	{ $$=++cnt; printf("%d  addop 1 %d\n",cnt,tok-1); printf("%d XOR 0\n",tok-1); tok-=1; }
	;

 mulop  :
	STAR          %dprec 1
	{ $$=++cnt; printf("%d  mulop  1 %d\n",cnt,tok-1); printf("%d STAR 0\n",tok-1); tok-=1; }
	| SLASH          %dprec 2
	{ $$=++cnt; printf("%d  mulop  1 %d\n",cnt,tok-1); printf("%d SLASH 0\n",tok-1); tok-=1; }
	| DIV          %dprec 3
	{ $$=++cnt; printf("%d  mulop  1 %d\n",cnt,tok-1); printf("%d DIV 0\n",tok-1); tok-=1; }
	| MOD          %dprec 4
	{ $$=++cnt; printf("%d  mulop  1 %d\n",cnt,tok-1); printf("%d MOD 0\n",tok-1); tok-=1; }
	| AND          %dprec 5
	{ $$=++cnt; printf("%d  mulop  1 %d\n",cnt,tok-1); printf("%d AND 0\n",tok-1); tok-=1; }
	| SHL          %dprec 6
	{ $$=++cnt; printf("%d  mulop  1 %d\n",cnt,tok-1); printf("%d SHL 0\n",tok-1); tok-=1; }
	| SHR          %dprec 7
	{ $$=++cnt; printf("%d  mulop  1 %d\n",cnt,tok-1); printf("%d SHR 0\n",tok-1); tok-=1; }
	;

 relop  :
	EQUAL          %dprec 1
	{ $$=++cnt; printf("%d  relop  1 %d\n",cnt,tok-1); printf("%d EQUAL 0\n",tok-1); tok-=1; }
	| NOTEQUAL          %dprec 2
	{ $$=++cnt; printf("%d  relop  1 %d\n",cnt,tok-1); printf("%d NOTEQUAL 0\n",tok-1); tok-=1; }
	| LT          %dprec 3
	{ $$=++cnt; printf("%d  relop  1 %d\n",cnt,tok-1); printf("%d LT 0\n",tok-1); tok-=1; }
	| GT          %dprec 4
	{ $$=++cnt; printf("%d  relop  1 %d\n",cnt,tok-1); printf("%d GT 0\n",tok-1); tok-=1; }
	| LE          %dprec 5
	{ $$=++cnt; printf("%d  relop  1 %d\n",cnt,tok-1); printf("%d LE 0\n",tok-1); tok-=1; }
	| GE          %dprec 6
	{ $$=++cnt; printf("%d  relop  1 %d\n",cnt,tok-1); printf("%d GE 0\n",tok-1); tok-=1; }
	| IN          %dprec 7
	{ $$=++cnt; printf("%d  relop  1 %d\n",cnt,tok-1); printf("%d IN 0\n",tok-1); tok-=1; }
	;

 identifier  :
	IDENTIFIER          %dprec 1
	{ $$=++cnt; printf("%d  identifier  1 %d\n",cnt,tok-1); printf("%d IDENTIFIER 0\n",tok-1); tok-=1; }
	;

 semicolon  :
	SEMICOLON          %dprec 1
	{ $$=++cnt; printf("%d  semicolon  1 %d\n",cnt,tok-1); printf("%d SEMICOLON 0\n",tok-1); tok-=1; }
	;

 comma  :
	COMMA          %dprec 1
	{ $$=++cnt; printf("%d  comma  1 %d\n",cnt,tok-1); printf("%d COMMA 0\n",tok-1); tok-=1; }
	;

%%


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


