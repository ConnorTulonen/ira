#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
/*
This portion of the code handles lexical analysis
it handles the behaviors of symbol tables
Symbol tables are defined as hash tables
*/
typedef struct Token Token;
struct Token{
	char identity, scope, tokentype;
	int linenumber;
};
int hashfunction(){
 return 7;
}
void allocateToken(Token* Token,char identity, char scope, char tokentype, int linenumber){
	Token* item = (Token*) malloc(sizeof(Token));
	item->identity = identity;
	item->scope = scope;
	item->tokentype = tokentype;
	item->linenumber = linenumber;
}
void allocateSymbolTable(Token* Token,char identity, char scope, char tokentype, int linenumber){
	allocateToken(Token,identity,scope,tokentype,linenumber)
	Token* SymbolTable = (Token*) calloc(hashfunction(),sizeof(Token));
}
int main(){
    
}
