#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAX_SIZE 100

struct Stack{
    int top;
    char arr[MAX_SIZE];
} st;


bool isEmpty();
bool isFull();
void push(char);
char pop();
char gettop();
bool ArePair(char ,char );




