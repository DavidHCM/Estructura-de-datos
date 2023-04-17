#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Arboles binarios

struct STRTNODE
{
    int num;
    struct STRTNODE *left,*right;
};



int main()
{
    int i=0,n=0;
    struct STRTNODE *root=NULL;
    srand(time(NULL));

    for(i=0;i<15;i++)
    {
        n = rand() % 100;
        printf("%d\t",n);
        treeinsert(&root,i);
    }

    return 0;
}