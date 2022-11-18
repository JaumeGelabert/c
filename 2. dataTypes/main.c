#include <stdio.h>
#include <stdbool.h>

int main()
{

    char letra = 'A';                                               //%c
    char nombre[] = "Jaume";                                        //%s
    int numeroEntero = 123456789;                                   //%d
    short int numeroPequeño = 1234;                                 //%d
    unsigned short int absolutoCorto = 2345;                        //%d
    long long int muyGrande = 1234567891234567;                     //%d
    unsigned long long int masLargoImposible = 1234567890123456789; //%d
    float decimalCorto = 1.234567;                                  //%f
    double decimalLargo = 1.234567890;                              //%lf
    bool apruebo = true;                                            //%d

    printf("%d \n", absolutoCorto);

    // Decimales
    printf("%12.0f \n", decimalCorto);
    printf("%12.1f \n", decimalCorto);
    printf("%12.5f \n", decimalCorto);
    printf("%-f \n", decimalCorto);

    return 0;
}