#include<stdlib.h>
#include<stddef.h>
#include<assert.h>
#include"slist.h"
#include<stdio.h>

slist slist_new()
{
slist s={NULL,NULL,0};
return s;
}

static Node* slist_new_node(uint32_t element,uint32_t element1,uint32_t element2)
{
	Node *new_node=(Node*)malloc(sizeof(Node));
	new_node->time=element;
	new_node->planeno=element1;
	new_node->torl=element2;
	new_node->next=NULL;
	return new_node;
}
slist* slist_add_head(slist *list, uint32_t element,uint32_t element1,uint32_t element2)
{
assert(list!=NULL);
Node *new_node=slist_new_node(element,element1,element2);
new_node->next=list->head;
list->head=new_node;
if(list->tail==NULL){
list->tail=new_node;
}
++list->length;
assert((list->length==1 && list->head==list->tail)||(list->length>0 && list->head!=list->tail));
return list;
}
uint32_t slist_length(const slist *list)
{
assert(list!=NULL);
return list->length;
}

uint32_t slist_lookup(const slist*list, uint32_t key)
{
assert(list!=NULL);
Node *cur;
for(cur=list->head;cur!=NULL;cur=cur->next)
{
if(cur->time==key){
break;
}
}
return(cur!=NULL);
}

slist* slist_delete_head(slist *list)
{assert(list!=NULL);
Node *temp;
if(list->head!=NULL){
temp=list->head;
list->head=list->head->next;
if(list->head==NULL){
list->tail=NULL;
}
--list->length;
free(temp);
}
return list;
}

slist* slist_add_tail(slist *list,uint32_t element,uint32_t element1,uint32_t element2)
{
assert(list!=NULL);
Node *new_node=slist_new_node(element,element1,element2);
if(list->tail!=NULL){
list->tail->next=new_node;
list->tail=new_node;
}
else
{
list->tail=list->head=new_node;
}
++list->length;
return list;
}

slist* slist_delete_tail(slist *list)
{
assert(list!=NULL);
Node *cur,*tail;
tail=list->tail;
for(cur=list->head;cur->next!=tail;cur=cur->next)
{
list->tail=cur;
cur->next=NULL;
}
if(list->tail==NULL){
list->head=NULL;
--list->length;

}
return list;
}

void traverse(slist *list) {
	assert(list!=NULL);
   Node *t;   
   t=list->head;
   while (t->next != NULL) {
      printf("%d\t", t->time);
      printf("%d\t", t->planeno);
      printf("%d\n\n", t->torl);
      t = t->next;
   }
   printf("%d\t", t->time);
   printf("%d\t", t->planeno);
   printf("%d\n", t->torl);
}

void sec(slist *list){
	assert(list!=NULL);
	Node *t;
	t=list->head;
	for(t=list->head;t!=NULL;t=t->next)
	{
		if(t->time>1150)
		{
			if(t->torl==0){

				printf("%d ",t->time);
				printf("Landing\n");
			}
			else{
				printf("%d ",t->time);
				printf("Takeoff\n");
			}

		}
	}
	
}

