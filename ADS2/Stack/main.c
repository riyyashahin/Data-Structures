#include<assert.h>
#include"stack_1.c"

void test_empty_stack()
{
	Stack s=stack_new(2);
	Stack *stk=&s;
	assert(stack_full(stk)==0);
	assert(stack_empty(stk)==1);
}

void test_two_element_stack()
{
	Stack s=stack_new(3);
	Stack *stk=&s;
	StackResult res;
	stk=stack_push(stk,10,&res);
	
	
	assert(res.status==STACK_OK && res.data==10);
	//stack_display(stk);
	stk=stack_push(stk,20,&res);
	
	//stack_display(stk);
	stk=stack_push(stk,30,&res);
	stack_display(stk);
	
	
	
}

int main()
{
	test_empty_stack();
	test_two_element_stack();
	return 0;
}
