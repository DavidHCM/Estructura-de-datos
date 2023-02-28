#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE * fp;
    int contador=0;
    char c;
    fp = fopen("C:\\Users\\david\\OneDrive - ITESO\\DED\\Actividades en clase\\Sesion 10.3\\palabras.txt","r");
    if(fp == NULL)
    {
        fprintf(stderr,"No se pudo abrir el archivo");
        exit(1);
    }


    while(!feof(fp))
    {
        c = fgetc(fp);
        contador++;

    }
    fclose(fp);

    FILE * fpsalida;
    fpsalida = fopen("salida.txt","w");
    if(fpsalida == NULL)
    {
        fprintf(stderr,"No se puede crear el archivo");
        exit(1);
    }
    else
    {
        fprintf(fpsalida,"\nEl numero de palabras es: %d",contador);
        fclose(fpsalida);
    }





    return 0;
}
