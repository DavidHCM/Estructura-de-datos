#include <stdio.h>
#include <string.h>
#include "set.h"
#include "datatypes.h"

int comparador_enteros(TYPE a,TYPE b);
int comparador_colores(TYPE *color1,TYPE *color2);

int main()
{
    SET s1 = set_create();
    return 0;
}


// Esto puede regresar un valor positivo si a es mayor que b
// Un valor negativo si la es es menor que b
// 0 si a y b son iguales

int comparador_enteros(TYPE a,TYPE b)
{
    int ia = *((int *) a);
    int ib = *((int *) b);
    return a - b;
}

int comparador_colores(TYPE *color1,TYPE *color2)
{
    int retval=0;
    if((strcmp(color_name,"negro"))
    {
        retval = 1;
    }
    if((strcmp(color_name,"negro"))
    {
        retval = 2;
    }
    if((strcmp(color_name,"negro"))
    {
        retval = 3;
    }
    return retval;
}

int comparador_colores(TYPE *color1,TYPE *color2)
{

}