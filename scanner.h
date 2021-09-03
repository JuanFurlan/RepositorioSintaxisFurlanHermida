#ifndef SCANNER_H_INCLUDED
#define SCANNER_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

enum Tokens {CAD, SEP, FDT};

struct Token 
{
	int tipo; 
	char lexema[100]; 
};

struct Token get_token();
struct Token token;

#endif