#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int main() {
    int totnombres;
    char **nombres;
    char nombre[40];

    printf("Nombres a guardar: ");
    scanf("%d",&totnombres);

    nombres = malloc(totnombres *sizeof(char *));
    if(nombres == NULL)
    {
        fprintf(stderr,"Error al alocar memoria.");
    }

    for(int i=0;i<totnombres;i++)
    {
        printf("Como se llama la persona %d?",i+1);
        scanf("%s",&nombre);
        nombres[i] = malloc(strlen(nombre) + 1);
        if(nombres == NULL)
        {
            fprintf(stderr,"Error al alocar memoria.");
        }
        strcpy(nombres[i],nombre);

    }

    //Mostrar la matriz de nombres
    for(int i=0;i<totnombres;i++)
    {
        printf("Nombre %d es: %s \n",i,nombres[i]);
    }
    for(int i=0;i<totnombres;i++)
    {
        free(nombres[i]);
    }


    return 0;
}
