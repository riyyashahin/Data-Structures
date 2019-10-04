#include<stdio.h> 

struct Stack 
{ 
	int top; 
	unsigned capacity; 
	int* array; 
}; 

struct Stack* createStack( unsigned  ); 
int isEmpty(struct Stack* );
char peek(struct Stack*); 
char pop(struct Stack* );
void push(struct Stack* , char ); 
int evaluatePostfix(char* );
 

