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
void treeinorder(struct STRTNODE *root);

int main()
{
    int i=0,n=0;
    struct STRTNODE *root=NULL;
    srand(time(NULL));

    printf("Numeros generados: \n");
    for(i=0;i<15;i++)
    {
        n = rand() % 100;
        printf("%d\t",n);
        treeinsert(&root,n);
    }

    printf("El nodo raiz es: %d\n", root->num);

    printf("Recorriedo en inorden\t");
    treeinorder(root);

    printf("\nRecorrido en orden");


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

        treeinsert(&(*root)->right,n);
    }
    else if(n < (*root)->num)
    {

        treeinsert(&(*root)->left,n);
    }


}

void treeinorder(struct STRTNODE *root)
{
    if(root != NULL)
    {
        treeinorder(root->left);
        printf("%d\t",root->num);
        treeinorder(root->right);
    }
}
