
#ifndef ESTRUCTURA_DE_DATOS_CLASS_SET_H
#define ESTRUCTURA_DE_DATOS_CLASS_SET_H
#include <stdio.h>
#include "datatypes.h"

struct STRTNODE {
    int num;
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


#endif //ESTRUCTURA_DE_DATOS_CLASS_SET_H
