
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
int tree_insert(struct STRTNODE **root,TYPE n,COMPAREFUNC cf);
int set_size(SET set);
void tree_print(int level,struct STRTNODE *root,PRINTFUNC pf);
void set_print(SET set);

#endif //ESTRUCTURA_DE_DATOS_CLASS_SET_H
