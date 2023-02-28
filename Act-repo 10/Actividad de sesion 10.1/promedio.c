#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    int calificacion,suma=0,contador=0;
    float promedio;

    fp = fopen("C:\\Users\\david\\OneDrive - ITESO\\DED\\Actividades en clase\\Sesion 10.1\\calififaciones.txt","r");
    if(fp==NULL)
    {
        fprintf(stderr,"No se puede abrir el archivo\n");
        exit(1);
    }

    while(!feof(fp)) // Mientras no sea el fin del archivo
    {
        fscanf(fp,"%d",&calificacion);
        contador++;
        suma = suma + calificacion;
    }
    fclose(fp);

    promedio = suma / contador;

    printf("El promedio de %d calificaciones es %.2f\n",contador,promedio);
}


