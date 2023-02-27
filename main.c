#include <stdio.h>

//Notas de clase 1


int main() {
    //Direccion de memoria:

    /*
    // El %p es para saber la direccion de memoria de un dato. Y con & en el valor.

    char letra = 'A';
    printf("%p\n",&letra);

    //Una variable int usa 4 bytes y nos mostrara la direccion de memoria que es la primera.
    //Por ejemplo un long int serian 8 bytes o 64 bits, Un short serian 2 bytes.
    int edad = 23;
    printf("%p\n",&edad);

    */

    /*
    //Apuntadores:
    // El * indica como apuntador hacia la direccion de una variable.
    char i = 'A';

    //Ejemplo de la moficiacion antes de realizarce
    printf("%c\n",i);
    //Aqui estoy declarando que la variable es un apuntador.
    char *p;
    //En esta parte indico que el apuntador almacenara la direccion de memoria de "i"
    p = &i;

    printf("%p\n",&i);
    printf("%p\n",p);

    //Manipulacion del dato char con el apuntador.
    //El * tiene diferente funcionamiento al declararla y al usarlo despues.
    *p = 'B';

    //Prueba donde ya se modifico el valor.
    printf("%c\n",i);


    */

    /*
    //-Cambiar el valor con el tiempo-
    char c1 = 'A';
    char c2 = '6';
    char *pc = &c1;
    printf("%c\n%c\n",c1,c2);
    *pc = 'B';
    pc = &c2;
    *pc = '7';
    printf("-------------");
    printf("\n%c\n%c\n",c1,c2);

    */

    //El tamano del apuntador depende del compilador, lo normal es de 32 o 64 bits. Y que el apuntador sean del tamano de donde apunta.

    //Ejemplo extenso:
    /*
    int i,j,k;
    int *pi;

    pi = &i;
    *pi = 3;

    pi = &j;
    *pi = 2;

    pi = &k;
    *pi = 1;

    printf("i=%d, j=%d, k=%d",i,j,k);
    */

    //Aritmetica de apuntadores
    //Los operadores --, +=, -=, ++. aplicados a un apuntador modifican una direcciono apuntada a la siguiente de la misma  logica.

    /*
    float f=3.14;
    float *pf = &f;
    printf("%p\n",pf);

    pf++;

    printf("%p\n",pf);

    pf+= 3;

    printf("%p\n",pf);

    pf -= 2;
    printf("%p\n",pf);

    pf--;
    printf("%p\n",pf);
    //Estos operadores se pueden usar para navegar en arreglos

     */

    //El declarar un array es una direccion fija donde no puedo moficar su apuntador. Entonces no puedo usar operadores  como los anteriores.
    //Osea el array es fijo.

    int array[5] =  {1,2,3,4,6};
    printf("%d\n",array[0]);

    *array = 5;
    printf("%d\n",array[0]);

    //Para navegar un apuntador extra
    int *parray = array;
    printf("%d\n",parray[0]);
    parray++;
    *parray = 10;
    printf("%d\n",parray[0]);

    return 0;
}
