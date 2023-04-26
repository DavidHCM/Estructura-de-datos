#include "priorityqueue.h"

PRIORITYQUEUE priorityqueue_create(int max_size,COMPAREFUNC cf,PRINTFUNC pf)
{
    PRIORITYQUEUE newpq = malloc(sizeof (struct STRPRIORITYQUEUE));

    // Inicializar todos los elementos del arreglo en null
    for(int j=0;j<max_size;j++)
    {
        newpq->arr[j] = NULL;
    }

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
        swap(&(pq->arr[idx]),&(pq->arr[parent(idx)]));
        idx = parent(idx);
    }

}


void swap(TYPE *a,TYPE *b)
{
    TYPE temp = *a;
    *a = *b;
    *b = temp;
}

TYPE priority_poll(PRIORITYQUEUE pq)
{
    TYPE retval;
    int ilast,ielem,imin;
    if(pq->size==0)
        retval = NULL;
    else
    {
        retval = pq->arr[0];
        pq->size--;
        ilast = pq->size - 1;

        // Poner el último elemento al principio
        pq->arr[0] = pq->arr[ilast];
        ielem=0;
        while(left(ielem)<pq->size)
        {
            imin = left(ielem);

            // Tiene hijo derecho y ademas el hijo derecho
            // es más pequeño que el izquierdo

            if(right(ielem) < pq->size && pq->cf( pq->arr[right(ielem)],pq->arr[left(ielem)])  < 1)
                imin = right(ielem);

            if(pq->cf(pq->arr[ielem],pq->arr[imin]) > 0)
                swap(&pq->arr[ielem],&pq->arr[imin]);

            ielem = imin;
        }

    }

    return retval;
}