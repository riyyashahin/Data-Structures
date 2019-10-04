#include<stdio.h> 
#include"postfix.c"

int main() 
{ 
	char exp[] = "54-98+/-8"; 
	printf ("postfix evaluation: %d", evaluatePostfix(exp)); 
	return 0; 
} 

