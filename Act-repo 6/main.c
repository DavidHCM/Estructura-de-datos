#include <stdio.h>

//Apuntadores a void.

int main() {
    char arr[] = {0,1,2,3}; // 4 bytes
    int *ip;
    void *vp;

    vp = arr; //vp apunta a arr
    ip = vp; // ip apunta a vp, osea copio la direccion apuntadad de vp a ip.

    printf("%08X\n",*ip);

    //Otro ejemplo:
    char *saludo = "ADIOS";
    vp = saludo;
    ip = vp;

    printf("%08X\n",*ip);

    return 0;
}
