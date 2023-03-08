#include <stdio.h>

struct STRALUM {
    struct STRALUM *siguiente;
    char nombre[30];
    char apellido[30];
    int expediente;

};

int main() {

    struct STRALUM al1 = {NULL,"David Rodrigo","Leon",744025};
    struct STRALUM al2 = {NULL,"Ximena","Isaac",739032};
    struct STRALUM al3 = {NULL,"Luis Fernando","Chavez",734822};
    struct STRALUM al4 = {NULL,"Renata","Tejeda",739500};
    struct STRALUM al5 = {NULL,"Harel","Olguin",742621};
    struct STRALUM al6 = {NULL,"Brenda","Vela",740732};

    struct STRALUM *primero;
    struct STRALUM *ptr;
    primero = &al3;
    al3.siguiente = &al5;
    al5.siguiente = &al6;
    al6.siguiente = &al1;
    al1.siguiente = &al4;
    al4.siguiente = &al2;

    ptr = primero;

    while(ptr!=NULL)
    {
        printf("%d\t%s \t %s\n",ptr->expediente,ptr->nombre,ptr->apellido);
        ptr = ptr->siguiente;
    }

    return 0;
}
