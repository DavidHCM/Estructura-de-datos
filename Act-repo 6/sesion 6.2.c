#include <stdio.h>

int mayor(void *pmat,int rows,int cols)
{
    int i,j,*ip = pmat,max=0;


    for(i=0;i<rows*cols;i++)
    {
        if(*ip > max)
        {
            max = *ip;
        }
        ip++;
    }
    return max;
}

int main() {
    int mat[3][3] = {
            {7,9,2},
            {10,8,0},
            {6,5,4}

    };

    printf("El numero mayor es %d\n",mayor(mat,3,3));
    return 0;
}
