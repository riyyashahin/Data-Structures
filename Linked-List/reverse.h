#include <stdint.h>

struct node {
   int data;
   struct node *next;
};

struct node *start = NULL;
void insert_at_begin(int);
void insert_at_end(int);
void traverse();
void delete_from_begin();
void delete_from_end();
void search_item(int value);
void count_list();
int count = 0;
int findmin(struct node *);
int findmax(struct node *);
void insertNodeAtMiddle(int , int);
void reverselist();
