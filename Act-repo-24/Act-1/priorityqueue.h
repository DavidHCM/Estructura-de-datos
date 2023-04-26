
#ifndef ACT_1_PRIORITYQUEUE_H
#define ACT_1_PRIORITYQUEUE_H
#include "datatypes.h"

struct STRPRIORITYQUEUE{
    TYPE *arr;
    int size;
    int max_size;
    COMPAREFUNC cf;
    PRINTFUNC pf;
};

typedef struct STRPRIORITYQUEUE *PRIORITYQUEUE;

PRIORITYQUEUE priorityqueue_create(int max_size,COMPAREFUNC cf,PRINTFUNC pf);
void priorityqueue_offer();


#endif //ACT_1_PRIORITYQUEUE_H
