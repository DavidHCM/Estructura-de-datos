#include <stdio.h>
#include <math.h>

//-----------------------------

/*
void saludar(){
    printf("Hola\n");
}

void despedir(){
    printf("Adios\n");
}

void imprimirDoble(int x){
    int i;
    for(i=0;i>=x;i++){
        printf("Hola x%d\n");
    }
}

void imprimirTriple(int x){

}

int sumar(int a, int b){
    return a+b;
}

int restar(int a, int b){
    return a-b;
}

int multiplicar(int a, int b){
    return a*b;
}

int pote(int a,int b){
    return pow(a,b);
}

int operacion(int (*ptrfunc) (int,int), int x,int y){

    return (ptrfunc(x,y));
}

*/

//-----------------------------


//-----------------------------
//Ejemplo intergrador

/*

struct OPERACION {
    int (*ptrfunc) (int,int);
    int a;
    int b;
};

int sumar(int a, int b){
    return a+b;
}

int restar(int a, int b){
    return a-b;
}

int multiplicar(int a, int b){
    return a*b;
}

 */

//-----------------------------

//Arreglos de apuntadores a funcion sin estructuras.
/*
int sumar(int a, int b){
    return a+b;
}

int restar(int a, int b){
    return a-b;
}

int multiplicar(int a, int b){
    return a*b;
}
*/

//-----------------------------
//Apuntador a apuntador a funcion.

int sumar(int a, int b){
    return a+b;
}

int restar(int a, int b){
    return a-b;
}

int multiplicar(int a, int b){
    return a*b;
}
//Nombrar el tipo de apuntador a funcion con un nombre mas sencillo para declarar variables.
typedef int (*PTRFUNC) (int,int);

//-----------------------------

int main() {
    //int r = 2;
   // int a = 10,b = 20,c;

    /*
    //Apuntadores a funciones.

    //Sintaxis del apunutador
    //tipo_de_apuntador (*nombre del aputnador) (arg1,arg2) = 0;
    //tipo_de_apuntador (*nombre del aputnador) (void)

    //Llamada a la funcion de hola
    void (*hola) (void) = 0;
    //Igualamaos la varible apuntadora a la funcion.
    hola = saludar;
    hola();

    //Ejemplo con despedir
    void (*Adios) (void) = 0;
    Adios = despedir;
    Adios();


    void (*imprDoble) (int);
    imprDoble = imprimirDoble;
    imprDoble(r);

    int (*sum) (int ,int);
    sum = sumar;
    c = sum(a,b);
    printf("%d\n",c);

    int (*rest) (int,int);
    rest = restar;
    c= rest(a,b);
    printf("%d\n",c);

    int (*mult) (int,int);
    mult = multiplicar;
    c = mult(a,b);
    printf("%d\n",c);
    */

    //-----------------------

    /*
    c = operacion(sumar,a,b);
    printf("%d\n",c);

    c = operacion(restar,a,b);
    printf("%d\n",c);

    c = operacion(multiplicar,a,b);
    printf("%d\n",c);
     */

    //-----------------------

    //Declarar un arreglo de estructuras y establecer los valores.
    /*
    struct OPERACION op[] = {
            {sumar,10,20},
            {restar,32,10},
            {multiplicar,6,2}
    };
    int i,a,b,result;
    for(i=0;i<3;i++){
        a = op[i].a;
        b = op[i].b;
        result = op[i].ptrfunc(a,b);
        printf("%d\n",result);
    }
     */


    /*
    // Hacer que el apuntador de la estrcutura apunte al arreglo.
    struct OPERACION op[] = {
            {sumar,10,20},
            {restar,32,10},
            {multiplicar,6,2}
    };

    //Declaracion de una variable apuntador apuntador a estructuras OPERACION.
    struct OPERACION *ptr;

    //Hacer que el apuntador apunnte a la estructura del arreglo.
    ptr = op;

    int i,a,b,result;
    for(i=0;i<3;i++){
        a = ptr->a;
        b = ptr->b;
        result = ptr->ptrfunc(a,b);
        printf("%d\n",result);
    }
    */
    //-----------------------

    //Arreglos de apuntadores a funcion sin estructuras.

    //Se define un arreglo de apuntadores a funciones.
    // Inicializamos cada uno de los elementos del arreglo con las funciones a las que apunta.

    /*
    int (*funcrr[]) (int,int) = {sumar,restar, multiplicar};
    int i,res;

    for(i=0;i<3;i++){
        res = funcrr[i](10,20);
        printf("El resultado es %d\n",res);
    }
     */

    //Apuntador al arreglo de apuntadores
    //No funciono------
    /*
    int *(*funcptr) (int,int);
    funcptr = &funcrr; //Apunta al arreglo de apuntadores

    //Recorriendo el arreglo de apuntadores de funciones como arreglo
    for(i=0;i<3;i++){
        res = *funcptr(10,20);
        printf("El resultado es %d\n",res);
    }


     */

    //------------------------------------

    PTRFUNC (*funcrr[]) (int,int) = {sumar,restar, multiplicar};
    int i,res;
    PTRFUNC *ppfunc = funcrr;

    for(i=0;i<3;i++){
    res = (*ppfunc)(10,20);

    printf("El resultado es %d\n",res);
    *ppfunc++;
}


\
return 0;
}



