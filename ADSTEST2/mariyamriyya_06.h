#ifndef _INCLUDED_SLIST_
#define _INCLUDED_SLIST_
#include<stdint.h>
typedef struct _node_ Node;
typedef struct _slist_ slist;
struct _node_{
	uint32_t time;
	uint32_t planeno;
	uint32_t torl;
	Node *next;
	};

struct _slist_{
	Node *head;
	Node *tail;
	uint32_t length;
	};

/*public interfaces for user*/
slist slist_new();
uint32_t slist_length(const slist *list);
uint32_t slist_lookup(const slist *list, uint32_t key);
slist* slist_add_head(slist *list,uint32_t element,uint32_t element1,uint32_t element2);
slist* slist_add_tail(slist *list,uint32_t element,uint32_t element1,uint32_t element2);
slist* slist_delete_head(slist *list);
slist* slist_delete_tail(slist *tail);
void traverse(slist *list);
void sec(slist *list);
#endif
 
