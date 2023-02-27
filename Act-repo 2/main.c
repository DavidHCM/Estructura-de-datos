#include <stdio.h>
#define FIN  0

typedef struct{
    float x,y;
} VEC2;

void suma(int *px, int y){
    //Indico que el apuntador de x almacene el valor del apuntador de x mas y.
    *px = *px+y;
}

int numscount(int *inicio)
{
    int *p = inicio;

    while(*p != FIN)
    {
        p++;
    }
    return (p - inicio);
}


int sumar(int *arr)
{
    int tot = 0;
    while(*arr!=FIN)
    {
        tot = tot + *arr;
        arr++;
    }
    return tot;
}

void printarr(int *arr,int inicio, int cuantos)
{
    int *p=arr + inicio;
    int i;
    for(i=0;i<cuantos;i++)
    {
        if(*p==FIN){
            break;
        }
        printf("[%d]",*p);
        p++;
    }
    printf("\n");
}

int main() {
    //Tipo de dato primitivo: int,short,float,char,double,long, long double, long long.

    //Tipo de dato compuesto: Usado en estructuras compuestas de tipos de datos

    //Typedef es para darle otro nombre a un tipo de dato o estructura.

    /*
    typedef struct{
        int dia,mes,an;
    } FECHA;

    FECHA f1 = {23,1,1990};
    FECHA *pf = &f1;

    FECHA f2 = {12,4,1992};
    FECHA *pf1 = &f2;

    */


    VEC2 v = {3,4};
    VEC2 *pv; //Definiendo el apuntador a una estructura VEC2
    VEC2 *pvy;
    pv = &v;  //pv contiene la direccion de v

    //Para acceder al elemento en v en especifico usamos una flecha como tal asi - >
    printf("x=%4.2f, y=%4.2f",pv->x,pv->y);


    //--------------------------------

    /*
    int x = 4,y =5;
    //Aqui indico que a x lo mande como ubicacion de memoria.
    suma(&x,y);
    printf("x=%d\n",x);
    */


    //--------------------------------
    //Argumentos como arreglos de funciones


    //Ejemplo de la tarea.
    /*
     * int lenght(char *s)
{
	char *p = s;	// p apunte también al inicio de la cadena
	while(*p)
		p++;

	return(p - s);
}

int main()
{
	char saludo[] = "Hola mundo";

	printf("La longitud de la cadena es %d\n",lenght(saludo));
	printf("La longitud de la cadena es %d\n",lenght(&saludo[0]));

	printf("La longitud de la cadena es %d\n",lenght(&saludo[4]));
}
     */

    //Paso de parametros por valor
    /*
    int nums[] = {1,2,3,4,5,6,7,8,FIN};

    printf("Numero en el arreglo: %d\n",numscount(nums));
    printf("La suma e: %d\n",sumar(nums));

    printarr(nums,0,6);
    */

    //--------------------------------

    //Matriz como argumento:

    return 0;
}
