#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMBLOQUE 10

int main() {
    //Ejemplo de realloc
    int *ptr,*ptr_new;
    int memoria_asginada = TAMBLOQUE;

    //Asignacion inicial:
    ptr = malloc(memoria_asginada * sizeof(int ));
    if(ptr == NULL)
    {
        fprintf(stderr, "Error al asignar memoria\n");
        exit(1);
    }

    srand(time(NULL));
    int i;
    for(i=0;i<5+rand()%100;i++)
    {
        // Estoy tratando de escribir en memoria no asignada.

        //Aqui estoy indicando si llego a dar el cierto numero de iteraciones y llego hasta el punto que me quedo sin memoria, entonce solicito asi
        //Hasta el punto que llego donde di las iteraciones pero no llegue al diez, o tambien si truena.
        if(i>=memoria_asginada)
        {
            memoria_asginada += TAMBLOQUE;
            ptr_new = realloc(ptr,memoria_asginada * sizeof(int ));
            printf("ptr= %p, ptr_new= %p\n",ptr,ptr_new);
            if(ptr_new == NULL)
            {
                fprintf(stderr,"Error al asignar memoria.\n");
                exit(1);
            }
            ptr = ptr_new;
        }
        ptr[i] = i;
    }

    //Imprimir los datos guardados en memoria dinamica
    for(i=0;i<memoria_asginada;i++)
    {
        printf("%d\t",ptr[i]);
    }
    free(ptr);


    return 0;
}
