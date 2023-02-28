#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE * fp;
    int contador=0;
    char palabra[100];
    fp = fopen("C:\\Users\\david\\OneDrive - ITESO\\DED\\Actividades en clase\\Sesion 10.2\\palabras.txt","r");
    if(fp == NULL)
    {
        fprintf(stderr,"No se pudo abrir el archivo");
        exit(1);
    }


    while(!feof(fp))
    {

        fscanf(fp,"%s",palabra);

        printf("%s ",palabra);
        contador++;
    }
    fclose(fp);

    printf("\nEl numero de palabras es: %d",contador);


    return 0;
}
