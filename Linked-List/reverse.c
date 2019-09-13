#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include "reverse.h"

void insert_at_begin(int x) {
   struct node *t;

   t = (struct node*)malloc(sizeof(struct node));
   count++;

   if (start == NULL) {
      start = t;
      start->data = x;
      start->next = NULL;
      return;
   }

   t->data = x;
   t->next = start;
   start = t;

}

void insert_at_end(int x) {
   struct node *t, *temp;

   t = (struct node*)malloc(sizeof(struct node));
   count++;

   if (start == NULL) {
      start = t;
      start->data = x;
      start->next = NULL;
      return;
   }

   temp = start;

   while (temp->next != NULL)
      temp = temp->next;

   temp->next = t;
   t->data    = x;
   t->next    = NULL;
}

void traverse() {
   struct node *t;

   t = start;

   if (t == NULL) {
      printf("Linked list is empty.\n");
      return;
   }

   printf("There are %d elements in linked list.\n", count);

   while (t->next != NULL) {
      printf("%d\n", t->data);
      t = t->next;
   }
   printf("%d\n", t->data);
}

void delete_from_begin() {
   struct node *t;
   int n;

   if (start == NULL) {
      printf("Linked list is already empty.\n");
      return;
   }

   n = start->data;
   t = start->next;
   free(start);
   start = t;
   count--;

   printf("%d deleted from beginning successfully.\n", n);
}

void delete_from_end() {
   struct node *t, *u;
   int n;

   if (start == NULL) {
      printf("Linked list is already empty.\n");
      return;
   }

   count--;

   if (start->next == NULL) {
      n = start->data;
      free(start);
      start = NULL;
      printf("%d deleted from end successfully.\n", n);
      return;
   }

   t = start;

   while (t->next != NULL) {
      u = t;
      t = t->next;
   }

   n = t->data;
   u->next = NULL;
   free(t);

   printf("%d deleted from end successfully.\n", n);
}
void search_item(int value)
{
   struct node *searchNode = start;
    int flag = 0;

    while(searchNode!=NULL)
    {
        if(searchNode->data==value)
        {
            printf("%d is present in this list. \n", value);
            flag = 1;
            break;
        }
        else
            searchNode = searchNode->next;
    }

    if(flag==0)
        printf("Item not found\n");

}
void count_list()
{

printf("the total elements are %d\n",count);
}
int findmin(struct node *start)
{
	int min=start->data;
	while(start!=NULL)
	{
		if(start->data < min)
		   min = start->data;
		start=start->next;
	}
	return min;
}
int findmax(struct node *start)
{
	int max=start->data;
	while(start!=NULL)
	{
		if(start->data > max)
		   max = start->data;
		start=start->next;
	}
	return max;
}
void insertNodeAtMiddle(int data, int position)
{
    int i;
    struct node *newNode, *temp;

    newNode = (struct node*)malloc(sizeof(struct node));

    if(newNode == NULL)
    {
        printf("Unable to allocate memory.");
    }
    else
    {
        newNode->data = data; // Link data part
        newNode->next = NULL;

        temp = start;

        for(i=2; i<=position-1; i++)
        {
            temp = temp->next;

            if(temp == NULL)
                break;
        }

        if(temp != NULL)
        {

            newNode->next = temp->next;


            temp->next = newNode;

            printf("DATA INSERTED SUCCESSFULLY\n");
        }
        else
        {
            printf("UNABLE TO INSERT DATA AT THE GIVEN POSITION\n");
        }
    }
}
void reverselist()
{
    struct node *prevNode, *curNode;

    if(start!= NULL)
    {
        prevNode = start;
        curNode = start->next;
        start = start->next;

        prevNode->next = NULL; // Make first node as last node

        while(start != NULL)
        {
            start = start->next;
            curNode->next = prevNode;

            prevNode = curNode;
            curNode = start;
        }

        start = prevNode; // Make last node as head

        printf("SUCCESSFULLY REVERSED LIST\n");
    }
}

