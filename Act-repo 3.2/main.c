#include <stdio.h>


//Arreglos como cadenas de argumentos


void printcads(void *p,int cadenas,int len)
{
    int i;
    char *s= p; //Apunta a la primera cadena

    //Recorrer cada una de las cadenas
    for(i=0;i<cadenas;i++)
    {
        printf("%s\n",s);
        s+=len; //Incremento entre la longitud de cada cadena dependiendo del len indicado


    }

    printf("---------------------------\n");
}

int main() {

    //Todos estos son equivalentes
    char mat1[][5] = {"UNO","DOS","TRES"};
    char mat2[][5] =
            {
                    {'U','N','O',0,0},
                    {'D','O','S',0,0},
                    {'T','R','E','S',0}

            };

    char mat3[] = {"UNO\0\0DOS\0\0TRES\0"};
    char mat4[] ={'U','N','O',0,0,'D','O','S',0,0,'T','R','E','S',0,0};

    printcads(mat1,3,5);
    printcads(mat2,3,5);
    printcads(mat3,3,5);
    printcads(mat4,3,5);



    return 0;
}
