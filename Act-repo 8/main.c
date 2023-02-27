/*
 * matdin.c
 *
 *  Created on: 15 feb 2023
 *      Author: jluis
 */
#include <stdio.h>
#include <stdlib.h>

#define ROWS 3
#define COLS 4

void printmat(int **m,int rows,int cols);

int main()
{
    int **mat;
    int ren,col;

    int totmem = 0;
    int memres;

    memres = ROWS * sizeof(int *);
    mat = malloc(memres);
    if(mat==NULL)
    {
        fprintf(stderr,"Error al solicitar memoria\n");
        exit(1);
    }
    totmem = totmem + memres;

    // Pedir memoria para cada renglón
    for(ren=0;ren<ROWS;ren++)
    {
        memres = COLS * sizeof(int);
        mat[ren] = malloc(memres);
        if(mat[ren]==NULL)
        {
            fprintf(stderr,"Error al solicitar memoria\n");
            exit(2);
        }
        totmem = totmem + memres;
    }

    // Inicializar los valores de la matriz
    for(ren=0;ren<ROWS;ren++)
        for(col=0;col<COLS;col++)
            mat[ren][col] = 10*(ren+1)+col+1;

    printmat(mat,ROWS,COLS);
    printf("\nMemoria solicitada al sistema %d bytes\n",totmem);

    // Liberar la memoria
    // Primero empezamos con los renglones
    for(int i=0;i<ROWS;i++)
        free(mat[i]);
    // Liberar la memoria de los apuntadores a los renglones
    free(mat);
}

void printmat(int **m,int rows,int cols)
{
    int i,j;
    for(i=0;i<rows;i++)
    {
        printf("\n");
        for(j=0;j<cols;j++)
            printf("\t%d",m[i][j]);
    }
    printf("\n");
}
