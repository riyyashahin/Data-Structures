#include <assert.h>
#include<stdio.h>
#include "bst.c"

void test_addition()
{
	BST b = bst_new();
	BST *bst = &b;
	bst = bst_add_node(bst, 50);
	assert (bst_count(bst) == 1);
	
	bst = bst_add_node(bst, 30);
	bst = bst_add_node(bst, 70);
	bst = bst_add_node(bst, 90);
	bst = bst_add_node(bst, 10);
	bst = bst_add_node(bst, 15);
	bst = bst_add_node(bst, 100);
	assert (bst_count(bst) == 7);

	uint32_t count=bst_count(bst);
	printf("Count ");
	printf("%d\n",count);
	
	int32_t key=100;
	uint32_t search=bst_lookup(bst, key);
	if(search==1)
	printf("%d is present\n",key);
	else
	printf("%d is not present\n",key );

    printf("Inorder\n");
	in_order(bst);
	printf("\n");

	printf("Preorder\n");
	pre_order(bst);
	printf("\n");

	printf("Postorder\n");
	post_order(bst);
	printf("\n");
	
	printf("Ascending Order\n");
	ascending(bst);
	printf("\n");
	
	printf("Descending Order\n");
	descending(bst);
	printf("\n");
	assert (bst_lookup(bst, 30));
	printf("Height of tree : ");
	height(bst);
	
	printf("\nNumber of terminal nodes : ");
	countTerminal(bst);
	
	printf("\n Maximum Element : ");
	maximum(bst);
	
	printf("\n Minimum Element : ");
	minimum(bst);
   
}

void test_deletion()
{
	BST b = bst_new();
	BST *bst = &b;
	bst = bst_add_node(bst, 50);
	assert (bst_count(bst) == 1);
	
	bst = bst_add_node(bst, 30);
	bst = bst_add_node(bst, 70);

	bst_delete(bst, 20);
}

int main()
{
	test_addition();
	test_deletion();
	return 0;
}
