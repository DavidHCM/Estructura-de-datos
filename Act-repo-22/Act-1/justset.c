#include <stdio.h>
#include <string.h>
#include "set.h"

int comparador_enteros(TYPE a,TYPE b);
int color_code(char *color_name);
int comparador_colores(TYPE color1,TYPE color2);
void print_entero(TYPE data);
void print_color(TYPE data);

int main()
{
    SET s1 = set_create(comparador_colores,print_color);
    set_add(s1,"ROJO");
    set_add(s1,"NEGRO");
    set_add(s1,"VERDE");
    set_add(s1,"AZUL");

    printf("Tamano: %d", set_size(s1));
    set_print(s1);
}

/*
 * Esta función regresa
 * 	Un valor positivo si a es mayor que b
 * 	Un valor negativo si a es menor que b
 * 	0 si a y b son iguales
 */
int comparador_enteros(TYPE a,TYPE b)
{
    int ia = *((int *) a);
    int ib = *((int *) b);
    return ia - ib;
}

int color_code(char *color_name)
{
    int retval = 0;
    if(strcmp(color_name,"NEGRO")==0)
        retval = 0;
    if(strcmp(color_name,"ROJO")==0)
        retval = 1;
    if(strcmp(color_name,"VERDE")==0)
        retval = 2;
    if(strcmp(color_name,"AZUL")==0)
        retval = 3;

    return retval;
}

int comparador_colores(TYPE color1,TYPE color2)
{
    return(color_code(color1) - color_code(color2));
}

void print_entero(TYPE data)
{
    printf("%d\n", *((int *)data));
}

void print_color(TYPE data)
{
    printf("\n{");
    printf("\"color\":\"%s\"",(char *) data);
    printf("}");
}
