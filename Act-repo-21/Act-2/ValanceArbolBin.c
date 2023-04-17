/*
 * arbol.c
 *
 *  Created on: 8 nov 2022
 *      Author: jluis
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct TREENODE {
    int num;
    struct TREENODE *left;
    struct TREENODE *right;
};

#define TAM 15

void tinsert(struct TREENODE **root,int n);
void printtabs(int level);
void trecorre(struct TREENODE *root,int level);
int max(int a,int b);
int theight(struct TREENODE *root);
void tlrotate(struct TREENODE **root);
void trrotate(struct TREENODE **root);

int main()
{
    int i;
    struct TREENODE *tree_root = NULL;
    int num;

    srand(time(NULL));

    for(i=0;i<TAM;i++)
    {
        num = rand()%1000;
        printf("Insertando %d\n",num);
        tinsert(&tree_root,num);
    }

    trecorre(tree_root,0);

    printf("Altura = %d\n",theight(tree_root));
}


void tinsert(struct TREENODE **root,int n)
{
    int difheight;

    if(*root==NULL)
    {
        *root = malloc(sizeof(struct TREENODE));
        (*root)->num = n;
        (*root)->left = NULL;
        (*root)->right = NULL;
    }
    else if(n < (*root)->num)
        tinsert(&((*root)->left),n);
    else if(n > (*root)->num)
        tinsert(&((*root)->right),n);

    // Checar las alturas para rotar
    difheight=theight((*root)->left)-theight((*root)->right);

    if(difheight>1) // Si es más profundo del lado izquierdo
        // Rotar a la derecha
        trrotate(root);


    if(difheight<-1) // Si es más profundo del lado derecho
        // Rotar a la izquierda
        tlrotate(root);
}

void trecorre(struct TREENODE *root,int level)
{
    if(root!=NULL)
    {
        trecorre(root->right,level+1);
        printtabs(level);
        printf("%d\n",root->num);
        trecorre(root->left,level+1);
    }
}


void printtabs(int level)
{
    int i;
    for(i=0;i<level;i++)
        printf("\t");
}

int max(int a,int b)
{
    if(b>a)
        a=b;
    return(a);
}

int theight(struct TREENODE *root)
{
    int retval=0;
    int lheight,rheight;
    if(root!=NULL)
    {
        lheight = theight(root->left);
        rheight = theight(root->right);

        retval = max(lheight,rheight) + 1;
    }
    return retval;
}


void trrotate(struct TREENODE **root)
{
    struct TREENODE *nroot = (*root)->left;
    struct TREENODE *nright = (*root);
    nright->left = nroot->right;
    nroot->right = nright;

    *root = nroot;
}



void tlrotate(struct TREENODE **root)
{
    struct TREENODE *nroot = (*root)->right;
    struct TREENODE *nleft = (*root);
    nleft->right = nroot->left;
    nroot->left = nleft;

    *root = nroot;
}
