#include <stdio.h>
#include <string.h>
#include <ctype.h>
// Funcion Hash
#define M 12

struct LNODE{
    char key[60];
    char data[80];
    struct LNODE *next, *prev;
};

struct STRMAP {
    struct LNONDE *first,*last;

};

struct STRMAP tabla[M];

unsigned long long hash(char *s);


int main() {
    char key[60];
    unsigned long long hashCode;
    int p;

    do {
        printf("Ingresa la llave (FIN to terminate): ");
        scanf("%s",key);
        if(strcmp(key,"FIN") == 0)
        {
            break;
        }
        hashCode = hash(key);
        p =(int) hashCode % M;
        // Falta insertar un nodo en la lista p correspondiente
        printf("Posicion en la tabla: %d\n",p);
        printf("El codigo hash es %016llx\n",hashCode);
    }while(1);

    return 0;
}


unsigned long long hash(char *s)
{
    int len = strlen(s);
    unsigned long long retcode = 0;
    int i = 0;
    char c;
    if(len > 12)
    {
        len = 12;
    }

    while(i<len && s[i] != '\0')
    {
        c = toupper(s[i]);
        if ( c>= 'A' && c <= 'Z')
        {
            retcode = retcode << 5;
            retcode = retcode | c & 0x1F;
        }
        i++;
    }

    return retcode;
}
