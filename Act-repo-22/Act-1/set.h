
#ifndef ESTRUCTURA_DE_DATOS_CLASS_SET_H
#define ESTRUCTURA_DE_DATOS_CLASS_SET_H
#include <stdio.h>
#include <stdlib.h>
#include "datatypes.h"

struct STRTNODE {
    TYPE elem;
    struct STRTNODE *left;
    struct STRTNODE *right;
};


struct STRSET
{
    struct STRTNODE *tree_root;
    int size;
    COMPAREFUNC cf;
    PRINTFUNC pf;
};

typedef struct STRSET *SET;

SET set_create(COMPAREFUNC cf,PRINTFUNC pf);
void set_add(SET set,TYPE e);
TYPE tree_insert(struct STRTNODE **root,TYPE n,COMPAREFUNC cf);


#endif //ESTRUCTURA_DE_DATOS_CLASS_SET_H
