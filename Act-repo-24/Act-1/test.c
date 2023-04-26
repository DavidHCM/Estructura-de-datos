#include <stdio.h>
#include "priorityqueue.h"
#define FIN -1

int compints(TYPE n1,TYPE n2);
void printints(TYPE num);

int main() {
    PRIORITYQUEUE pq1 = priorityqueue_create(100,compints,printints);
    int nums[] = {10,12,5,7,9,19,6,8,17,23,29,2,5,FIN};
    int i = 0;
    while(nums[i]!= FIN)
    {
        priorityqueue_offer(pq1, int_create(nums[i]));
        i++;
    }
    int *n;
    for(int j=0;j<13;j++)
    {
        n = priority_poll(pq1);
        printf("%d\t",*n);
    }
    
    return 0;
}


int compints(TYPE n1,TYPE n2)
{
    int t1 = *((int *) n1);
    int t2 = *((int *) n2);
    return t1 - t2;
}

void printints(TYPE num)
{
    int n = (*(int *) num);
    printf("%d\t",n);
}