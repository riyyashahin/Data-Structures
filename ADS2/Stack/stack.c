#include<assert.h>
#include<stddef.h>
#include"stack.h"
#include<stdio.h>

Stack stack_new(uint32_t size)
{
	size=(size>0 && size<MAX_DEPTH)?size:MAX_DEPTH;
	Stack s={size,-1,{0}};
	return s;
}

uint32_t stack_full(const Stack *stk)
{
	assert(stk!=NULL);
	return (stk->top+1==stk->size);
}

uint32_t stack_empty(const Stack *stk)
{
	assert(stk!=NULL);
	return(stk->top==-1);
}

Stack* stack_push(Stack *stk,float element,StackResult *res)
{
	assert(stk!=NULL);
	
	if(stk->top+1<stk->size)
	{
		stk->data[++stk->top]=element;
		res->data=element;
		res->status=STACK_OK;
	}
	assert(res->status==STACK_OK || (stk->top+1==stk->size));
	return stk;
}

Stack* stack_pop(Stack *stk,StackResult *res)
{
	assert(stk!=NULL);
	if(stk->top>-1)
	{
		res->data=stk->data[stk->top];
		res->status=STACK_OK;
		--stk->top;
	}
	else
	{
		res->status=STACK_EMPTY;
	}
	assert(res->status==STACK_OK || stk->top==-1);
	return stk;
}


void stack_display(Stack *stk)
{
		
	while(stk->top!=-1)
	{
		
		printf("%f\n", stk->data[stk->top]);
		--stk->top;
	}
}
