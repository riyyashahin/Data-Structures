#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include"stack.c"

void main()
{
    char in_expr[MAX_SIZE];
    int length=0,i,j;

    init();

    printf("Enter an expression:");
    gets(in_expr);

    length = strlen(in_expr);

    for(i=0;i<length;i++){
        if(in_expr[i] == '(' || in_expr[i] == '{' || in_expr[i] == '['){
                push(in_expr[i]);
        }else if(in_expr[i] == ')' || in_expr[i] == '}' || in_expr[i] == ']'){
            char a = gettop();
            printf("%c",a);
            if(isEmpty() || !ArePair(gettop(),in_expr[i])){
                printf("\nNot a Balanced expression");
                return 0;
            }else{
                pop();
            }
        }
    }
    if(isEmpty()){
        printf("\nBalanced");
    }else{
        printf("\nNot a Balanced expression");
    }
}
