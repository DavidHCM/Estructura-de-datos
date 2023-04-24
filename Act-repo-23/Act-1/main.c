#include <stdio.h>
#define MAX_HEAP 100
#define padre(n) ((n-1)/2)

int heap[MAX_HEAP];
int size = 0;

void heap_offer(int num);
void swap(int *a,int *b);

int main()
{
    int arr[] = {22,13,15,17,8,26,29,5,14,19,2,7,20,13,29};
    int i;

    for(i=0;i<15;i++)
    {
        heap_offer(arr[i]);
    }

    for(i=0;i<15;i++)
    {
        printf("%d\t",heap[i]);
    }

    return 0;
}

void heap_offer(int num)
{
    int elem = size;
    // size inicia en 0
    heap[elem] = num;
    size++;

    while(elem>0 && heap[elem]<heap[padre(elem)])
    {
        swap(&heap[elem],&heap[padre(elem)]);
        elem = padre(elem);
    }
}

void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

