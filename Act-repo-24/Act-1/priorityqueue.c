#include "priorityqueue.h"

PRIORITYQUEUE priorityqueue_create(int max_size,COMPAREFUNC cf,PRINTFUNC pf)
{
    PRIORITYQUEUE newpq = malloc(sizeof (struct STRPRIORITYQUEUE));
    newpq->max_size = max_size;
    newpq->arr = malloc(max_size * sizeof (TYPE));
    newpq->size = 0;
    newpq->cf = cf;
    newpq->pf = pf;



    return newpq;
}

void priorityqueue_offer(PRIORITYQUEUE pq, TYPE data)
{
    int idx = pq->size;


    pq->arr[idx] = data;
    pq->size = pq->size + 1;

    //Comparacion entre el elemento y el padre, y de ser  negativo  retorna 0, de lo contrario positivo y los cambia al ser menor
    while(idx > 0 && pq->cf(pq->arr[idx],pq->arr[parent(idx)]) < 0)
    {
        swap(&(pq->arr[data]),&(pq->arr[parent(data)]));
        data = parent(data);
    }

}