#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include"stack.h"

void init(){
    st.top = -1;
}

bool isEmpty(){
    if(st.top == -1){
        return true;
    }else{
        return false;
    }
}

bool isFull(){
    if(st.top == MAX_SIZE-1){
        return true;
    }else{
        return false;
    }
}

void push(char item){
    if(isFull()){
            printf("Stack is full");
    }else{
        st.top++;
        st.arr[st.top] = item;
    }
}

void pop(){
    if(isEmpty()){
        printf("Stack is empty");
    }else{
        st.top--;
    }
}

char gettop(){
    return st.arr[st.top];
}

bool ArePair(char opening,char closing)
{
	if(opening == '(' && closing == ')') return true;
	else if(opening == '{' && closing == '}') return true;
	else if(opening == '[' && closing == ']') return true;
	return false;
}



