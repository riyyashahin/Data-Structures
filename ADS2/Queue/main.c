#include <stdio.h>
#include <stdlib.h>
#include "queue.c"
#include<assert.h>

int main()
{
   Queue queue = queue_new(3);
   Queue *q = &queue;

   Queue_Result res;

   q = queue_add(q,10,&res);
    //queue_display(q);
   assert(q->count==1);
   assert(q->data[q->head-1] == 10);
	q = queue_add(q,20,&res);
	//queue_display(q);
   q = queue_add(q,30,&res);
    //queue_display(q);
   // assert(q->data[q->head-1]==30);
    assert(q->data[q->tail]==10);

    q = queue_delete(q,&res);
    queue_display(q);
    //assert(res.data==10);
    //assert(q->data[q->tail]==20);
    
    return 0;
}
