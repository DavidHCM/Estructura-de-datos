#include <stdio.h>

//Matriz como argumentos a las funciones.


//---------------------------------------------
//Un tipo de imprmir funcion, sabiendo las dos dimensiones
void printmat1(int mat_a[4][4]){

    int i,j;

    for( i=0;i<4;i++)
    {
        for( j=0;j<4;j++)
        {
            printf("%2d\t",mat_a[i][j]);
        }
        printf("\n");
    }
    printf("----------------------\n");
}


//---------------------------------------------


//Un tipo de imprimir solo sabiendo una dimension.
void printmat2(int mat_a[][4],int rows)
{
    int i,j;
    for( i=0;i<rows;i++)
    {
        for( j=0;j<4;j++)
        {
            printf("%2d\t",mat_a[i][j]);
        }
        printf("\n");
    }
    printf("----------------------\n");
}

//---------------------------------------------

//Un tipo de imprimir solo sin  saber ninguna dimension.

//Indicamos un apuntador a void donde no apunta a nada todavia
void printmat3(void *mat,int rows,int cols)
{
    int i,j;
    int *arrnum = mat;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            //Aqui indico que imprima la direccion de memoria con el apuntador a la mat en su primer  elemento.
            printf("%2d\t",*arrnum);
            //El 'arrnum++' es necesario para que me siga moviendo enter el apuntador.
            arrnum++;
        }
        printf("\n");
    }
    printf("----------------------\n");
}



//---------------------------------------------
void printmat4(void *mat,int rows,int cols)
{
    int i,j;
    int *arrnum = mat;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            //Aqui indico que imprima la direccion de memoria con el apuntador a la mat en su primer elemento, luego sumo el numero de i para luego multiplicar las columnas y despues sumar j.
            printf("%2d\t",*(arrnum+i*cols+j));

        }
        printf("\n");
    }
    printf("----------------------\n");
}

//---------------------------------------------
//Este es cambiando del void a indicar ya con el int, esto provocaria ahorrame las dos anteriores lineas que hay en mat4 pero tendre que castearlo al invocarla
void printmat5(int *arrnum,int rows,int cols)
{
    int i,j;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            //Aqui indico que imprima la direccion de memoria con el apuntador a la mat en su primer elemento, luego sumo el numero de i para luego multiplicar las columnas y despues sumar j.
            printf("%2d\t",*(arrnum+i*cols+j));

        }
        printf("\n");
    }
    printf("----------------------\n");
}

//---------------------------------------------


int main() {
    int mat_a[4][4] = {
                       {0,1,2,3},
                       {4,5,6,7},
                       {8,9,10,11},
                       {12,13,14,15}
                      };

    printmat1(mat_a);

    printmat2(mat_a,4);

    //Hacer con cast (int *)
    printmat3(mat_a,4,4);

    printmat4(mat_a,4,4);

    //Aqui si es necesario hacer el cast, por que ne la funcion recibe un apuntador a entero y no un apuntador a void como los ejemplos anteriores.
    printmat5((int *)mat_a,4,4);
    return 0;
}
