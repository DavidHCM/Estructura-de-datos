#include "set.h"

// Funciones de arbol

TYPE tree_insert(struct STRTNODE **root,TYPE n,COMPAREFUNC cf)
{
    TYPE retval = 0;
    if(*root==NULL)
    {
        *root = malloc(sizeof(struct STRTNODE));
        (*root)->elem = n;
        (*root)->left = NULL;
        (*root)->right = NULL;
        retval = (TYPE) 1;
    }
    else if(cf(n,(*root)->elem)<0)
    {
        retval = tree_insert(&(*root)->left, n, cf);
    }
    else if(cf(n,(*root)->elem)>0)
    {
        retval = tree_insert(&(*root)->right,n,cf);
    }
    return retval;
}

// Funciones de manejo de SET

SET set_create(COMPAREFUNC cf,PRINTFUNC pf)
{
    SET new_set = malloc(sizeof (struct STRSET));
    new_set->tree_root = NULL; // Inicia vacio el arbol
    new_set->size = 0;
    new_set->cf = cf;
    new_set->pf = pf;

    return new_set;
}

void set_add(SET set,TYPE e)
{
    if(tree_insert(&set->tree_root,e,set->cf))
    {
        set->size += 1;

    }
}

