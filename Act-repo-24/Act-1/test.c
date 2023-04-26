#include <stdio.h>
#include "priorityqueue.h"
#define FIN -1

int main() {
    PRIORITYQUEUE pq1 = priorityqueue_create(100,compints,printints);
    int nums[] = {10,12,5,7,9,19,6,8,17,23,29,2,5};
    int i = 0;
    while(nums[i]!= FIN)
    {
        priorityqueue_offer(pq1,nums[i]);

    }

    return 0;
}
