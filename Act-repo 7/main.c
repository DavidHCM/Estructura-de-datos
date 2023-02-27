#include <stdio.h>
//Importante llamar stdlib.h
#include <stdlib.h>
//Inlcude para el memset:
#include <string.h>

//---------------------------
// Memoria dinamica
//---------------------------

//--MALLOC--
//El espacio que se asgina no esta inicializado.
//Ademas si malloc no encuentra unaa cantidad de memoria pedida te retornara NULL.
//Siempre verificar que el espacio de memoria que pedi si me lo den.
//Para verificarlo hay que ver que malloc no haya retornado NULL.
//Y si es error usar " fprintf(stderr,"Error en la asginacion de memoria"); donde te escribe el error en un archivo.

//--CALLOC--
//La funcion de calloc es parecida a malloc pero se escribe diferente, por ejemplo calloc(100,sizeof(int));
//Una ventaja es que calloc si te inicializa la memoria reservada en 0.
//Sintaxis de calloc: void *calloc(size_t,sizeof());
//He igual si no hay memoria se mantiene en NULL.

//--REALLOC--
//Sintaxis> void *reallloc(apuntador a realocar,sizeof);
//Puedes perder datos al regresar NULL y si no hay espacio te da NULL.
//Tener cuidado de no tener igualada a la misma variable como aputnador nuevo para no perder los datos.

//Ejemplos:

//===========Primer ejemplo==========
/*
int main() {
   int *p1,*p2;

   //malloc inicializa con basura los elementos:
    p1 = malloc(100*sizeof(int));
    if(p1 == NULL){
        fprintf(stderr,"Fallo asignacion de memeoria");
       // memset(p1,0,100*sizeof(int));
        exit(1);
    }

    //calloc si inicializa en 0 los elementos:
    p2 = calloc(100,sizeof(int));
    if(p2 == NULL){
        fprintf(stderr,"Fallo asignacion de memeoria");
        exit(1);
    }





    printf("\n");

    printf("Contenido de los datos  apuntados por p2: \n");
    for(int i = 0;i<100;i++){
        printf("%d\t",*p2);
        p2++;
    }



    //Se libera la memoria, solo se puede poner un arumento al liberar la memoria.
    free(p1);
    free(p2);




    return 0;
}
*/

//===========Segundo ejemplo==========

//Matriz con memoria dinamica:

/*
#define ROWS 3
#define COLS 4

void printmat(int **m,int rows, int cols){
    int i,j;
    for(i=0;i<rows;i++){
        printf("\n");
        for(j=0;j<cols;j++){
            printf("%d\t",m[i][j]);
        }
    }
    printf("\n");
}

int main(){
    int **mat;
    int ren,col;
    mat = malloc(ROWS*sizeof(int *));

    if(mat ==NULL){
        fprintf(stderr,"Fallo asignacion de memeoria");
        exit(1);
    }

    //Pedir memoria a cada renglon:
    for(ren=0;ren<ROWS;ren++){
        mat[ren] = malloc(COLS * sizeof(int ));
    }

    for(ren=0;ren<ROWS;ren++){
        for(col=0;col<COLS;col++){
            mat[ren][col] = 10*(ren+1)+col+1;
        }
    }

    printmat(mat,ROWS,COLS);

    return 0;
}

 */

int main(){


    return 0;
}