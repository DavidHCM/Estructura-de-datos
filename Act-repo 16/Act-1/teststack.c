#include <stdio.h>
#include "stack.h"
#include "datatypes.h"

int main() {

    STACK s1 = stack_create(); // Creo el Stack

    //int arr[] = {1,2,3,4,5,6,7};
    //int *num;
    //float *num;
    char *num;


    for(int i = 0 ; i< 7;i++)
    {
        stack_push(s1,char_create(i));
    }

    while(!stack_empty(s1))
    {
        num = stack_pop(s1);
        printf("%c\n",*num);
    }

    stack_destroy(s1);


    return 0;
}
