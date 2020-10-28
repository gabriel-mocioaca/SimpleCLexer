#include <stdio.h>
#include "symbols.h"
#include <errno.h>

extern FILE* yyin;
extern int yylex(void);
const char* lexUnits[] = {  "END",
							"INT",
							"LONG",
							"DOUBLE",
							"SHORT",
							"UNSIGNED",
							"CHAR",
							"VOID",
							"VOLATILE",
							"WHILE",
							"FLOAT",
							"IF",
							"ELSE",
							"RETURN",
							"CONSTANT",
							"STRING_LITERAL",
							"ASSIGN",
							"ADD",
							"SUBSTRACT",
							"IDENTIFIER",
							"END_OF_INSTRUCTION",
							"BREAK",
							"CASE",
							"CONST",
							"CONTINUE",
							"DEFAULT",
							"DO",
							"ENUM",
							"EXTERN",
							"FOR",
							"GOTO",
							"REGISTER",
							"SIGNED",
							"SIZEOF",				,
							"STATIC",
							"STRUCT",
							"SWITCH",
							"TYPEDEF",
							"UNION",
							"ELLIPSIS",
							"RIGHT_ASSIGN",
							"LEFT_ASSIGN",
							"ADD_ASSIGN",
							"SUB_ASSIGN",
							"SUB_ASSIGN",
							"MUL_ASSIGN",
							"DIV_ASSIGN",
							"MOD_ASSIGN",
							"AND_ASSIGN",
							"XOR_ASSIGN",
							"OR_ASSIGN",
							"RIGHT_OP",
							"LEFT_OP",
							"INC_OP",
							"DEC_OP",
							"PTR_OP",
							"AND_OP",
							"OR_OP",
							"LE_OP",
							"GE_OP",
						    "EQ_OP",
							"NE_OP",
							"COMMA",
							"DOT",
							"BIN_AND",
							"NOT",
						    "BIN_COMPL",
							"MULTIPLY",
							"DIVIDE",
							"MODULO",
							"LESS",
							"GREATER",
							"BIN_XOR",
							"BIN_OR",
						    "AUTO",
						    "__BOOL",
							"__COMPLEX",
							"__IMAGINARY"
							};

	int main()				   			
{						   			
	int tokenValue = 0;
	yyin = fopen("input.csrc", "rt");
	if (yyin != NULL)
	{
		while ((tokenValue = yylex()) != 0)
		{
			printf(" -> TOKEN ID: %d; Token Value: %s \n", tokenValue, lexUnits[tokenValue - 1]);
		}
	}
	else
	{
		printf("Input file can't be accessed: %d", errno);
	}

}