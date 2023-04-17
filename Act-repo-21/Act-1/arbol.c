#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Arboles binarios

struct STRTNODE {
    int num;
    struct STRTNODE *left;
    struct STRTNODE *right;
};

int treeinsert(struct STRTNODE **root,int n);
void tree_inorder(struct STRTNODE *root);
void tree_preorder(struct STRTNODE *root);
void tree_postorder(struct STRTNODE *root);

int main()
{
    int i,n;
    struct STRTNODE *root=NULL;

    srand(time(NULL));

    printf("Numeros generados\n");
    for(i=0;i<15;i++)
    {
        n= rand() % 100;
        printf("%d\t",n);
        if(!treeinsert(&root,n))
            printf("(Repetido %d)\t",n);
    }

    printf("\nNodo raiz = %d\n",root->num);

    printf("\nRecorrido en inorden\n");
    tree_inorder(root);

    printf("\nRecorrido en preorden\n");
    tree_preorder(root);

    printf("\nRecorrido en postorder\n");
    tree_postorder(root);

}

int treeinsert(struct STRTNODE **root,int n)
{
    int retval = 0;
    if(*root==NULL)
    {
        *root = malloc(sizeof(struct STRTNODE));
        (*root)->num = n;
        (*root)->left = NULL;
        (*root)->right = NULL;
        retval = 1;
    }
    else if(n < (*root)->num)
        retval = treeinsert(&(*root)->left,n);
    else if(n > (*root)->num)
        retval = treeinsert(&(*root)->right,n);

    return retval;
}

void tree_inorder(struct STRTNODE *root)
{
    if(root!=NULL)
    {
        tree_inorder(root->left);
        printf("%d\t",root->num);
        tree_inorder(root->right);
    }
}

void tree_preorder(struct STRTNODE *root)
{
    if(root!=NULL)
    {
        printf("%d\t",root->num);
        tree_preorder(root->left);
        tree_preorder(root->right);
    }
}

void tree_postorder(struct STRTNODE *root)
{
    if(root!=NULL)
    {
        tree_postorder(root->left);
        tree_postorder(root->right);
        printf("%d\t",root->num);
    }
}
