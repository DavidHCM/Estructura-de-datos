#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Arboles binarios

struct STRTNODE
{
    int num;
    struct STRTNODE *left,*right;
};

void treeinsert(struct STRTNODE **root,int n);

int main()
{
    int i=0,n=0;
    struct STRTNODE *root=NULL;
    srand(time(NULL));

    for(i=0;i<15;i++)
    {
        n = rand() % 100;
        printf("%d\t",n);
        treeinsert(&root,n);
    }

    return 0;
}


void treeinsert(struct STRTNODE **root,int n)
{
    if(*root == NULL)
    {
        *root = malloc(sizeof(struct STRTNODE));
        (*root)->num = n;
        (*root)->left = NULL;
        (*root)->right = NULL;
    }
    else  if(n > (*root)->num)
    {
    }
    else if(n < (*root)->num)
    {

    }
    else
    {
        
    }

}
