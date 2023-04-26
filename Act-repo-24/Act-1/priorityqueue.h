
#ifndef ACT_1_PRIORITYQUEUE_H
#define ACT_1_PRIORITYQUEUE_H
#include "datatypes.h"
#define parent(n) ((n-1)/2)
#define left(n) (n*2+1)
#define right(n) (n*2+2)

struct STRPRIORITYQUEUE{
    TYPE *arr;
    int size;
    int max_size;
    COMPAREFUNC cf;
    PRINTFUNC pf;
};

typedef struct STRPRIORITYQUEUE *PRIORITYQUEUE;

PRIORITYQUEUE priorityqueue_create(int max_size,COMPAREFUNC cf,PRINTFUNC pf);
void priorityqueue_offer(PRIORITYQUEUE pq, TYPE data);
void swap(TYPE *a,TYPE *b);
TYPE priority_poll(PRIORITYQUEUE pq);


#endif //ACT_1_PRIORITYQUEUE_H
