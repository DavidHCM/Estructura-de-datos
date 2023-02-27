#include    <stdio.h>
#include <string.h>

void printmat1(int **mat,int r,int c){
    int i,j;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }
    printf("\n-------------\n");
}

void printmat2(int **mat,int r,int c){
    int i,j;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d\t",*(*(mat+i)+j));
        }
        printf("\n");
    }
    printf("\n-------------\n");
}

void printmat3(int **mat,int r,int c){
    int i,j;
    int **pren = mat;
    int *pcol;

    for(i=0;i<r;i++){
        pcol = *pren; //pcol apunta al elemento que esta en pren que es la direccion de la primera columna del renglon.
        for(j=0;j<c;j++){
            printf("%d\t",*pcol);
            pcol++; //Recorriendo la direccion de cada columna
        }
        printf("\n");
        pren++; //Aqui paso al siguiente apuntador del arreglo de apuntadores.
                //Que es donde esta la direccion donde inicia el siguiente renglon
    }
    printf("\n-------------\n");
}

int main() {
    //char nums[] = {"Uno"}; //Aqui estoy creando un arreglo de caractere en un area de memoria, donde si se puede escribir
    //Luego --nums es una constante-- que apunta a esa area de memoria.

    //Aqui no hago nada por que estoy indicando un espacio de memoria que no existe basicamente.
    //char *nums2 = "Uno"; //Aqui  estoy creando un arreglo de caracteres en un area de memoria que solo tiene permisos de lectura.
    //Ahora --nums2 es una variable-- apuntador que tiene la direccion donde esta el arreglo


    //strcpy(nums2,"UNO");
    //printf("%s\n",nums2);

    //------------------------------
    //Cadenas de caracteres:
    /*
    char num1[] = "Uno";
    char *num2 = "Dos";

    printf("La direccion de num1 es %p\n",num1);
    printf("La direccion de num2 es %p\n",num2);
    strcpy(num1,"UNO");
    //num1 = "UNO";  NO SE PUEDE.
    //strcpy(num2,"DOS");  NO SE
    printf("La direccion de num2 es %p\n",num2);
    num2 = "DOS";
    printf("La direccion de num2 es %p\n",num2);


    printf("%s\n",num1);
    printf("%s\n",num2);
    */

    //------------------------------
    //Notas de arreglo de apuntadores:
    /*
     * Tipo *nombre[tamano];
     * Tipo *nombre[] = {variable1,variable2...};
     * Tipo *nombre[3] = {...};

     */

    //------------------------------

    //Comos se resuelve el ejercicio retador
    //Arreglo de auntadores a enteros de matriz con arreglo de apuntadores.

    int r,c;
    int nums[]= {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int *parr[] = {nums,nums+4,nums+8,nums+12};
    /*
    setbuf(stdout,NULL);
    printf("Dame posicion del renglon: ");
    scanf("%d",&r);
    printf("\nDame posicion de la columna: ");
    scanf("%d",&c);
    */
    /*
     * En el primer caso estoy accediendo el dato como lo haria en cualquier matriz
     */
    //printf("El dato es: %d\n",parr[r][c]);
    /*
     *  En el segundo caso, primero voy a la posicion del arreglo parr, donde esta el apuntador al renglon.
     * Esto es parr[r]. Despues extraigo el contenido que es  la direccion donde inician los datos del renglon r *parr.
     * Despues a esa direccion le sumo c para llegar a la direccion correspondiente a la columna. *parr[r] + c.
     * Finalmente extraigo el contenido de esa direccion *(parr[r] + c)
     */
    //printf("El dato es: %d\n",*(parr[r]+c));
    /*
     * En el tercer caso uso parr que es la direccion al arreglo de apuntadores, le sumo r para irme a la posicion del arreglo.
     * Donde esta el apuntador a la columna parr + r, de ahi extraigo el contenido que es la direccion donde inicia el renglon.
     * y le sumo c que es la direccion de la columna, *(parr+r) + c. Finalmente extraigo el contenido de esa direccion que es:
     * *(*(parr + r) + c) <-La direccion de tod0 esto.
     */


    //printf("El dato es: %d\n",*(*(parr+r)+c));

    printmat1( parr, 4, 4);
    printmat2( parr, 4, 4);
    printmat3(parr,4,4);

    return 0;
}
