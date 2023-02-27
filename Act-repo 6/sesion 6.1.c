#include <stdio.h>

void printbits(void *p)
{
    int i;
    unsigned int mask = 0x80000000;
                        // 1000 0000 0000 0000 0000 0000 0000 0000
    unsigned int n = *((unsigned int *) p);


    for(i=0;i<32;i++)
    {
        if(n & mask)  //Si es diferente de 0
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
        mask = mask >> 1;
        if(i%4==3){
            printf("\t");
        }
    }
    printf("\n");
}

int main()
{
    int x1 = 1234; //Enteros
    int x2 = 0x1234; //Hexadecimal
    int x3 = 0755; //Octal
    char *s = "HOLA"; //char
    float f1 = 1.5; //float
    float f2 = 3.5; //double

    printbits(&x1);
    printbits(&x2);
    printbits(&x3);
    printbits(s);
    printbits(&f1);
    printbits(&f2);


    return 0;
}
