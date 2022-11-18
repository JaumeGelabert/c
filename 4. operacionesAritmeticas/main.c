#include <stdio.h>

int main()
{

    int x = 10;
    int y = 2;
    int z;

    int d = 3;
    float r;

    // Suma
    z = x + y;
    printf("Suma --> %d\n", z);

    // Resta
    z = x - y;
    printf("Resta --> %d\n", z);

    // Multiplicación
    z = x * y;
    printf("Multiplicación --> %d\n", z);

    // División
    z = x / y;
    printf("División --> %d\n", z);
    // División de enteros con decimales
    r = x / (float)d;
    printf("División con decimales--> %.3f\n", r);

    // Módulo
    z = x % y;
    printf("Módulo --> %d\n", z);

    // Incremento
    x++;
    printf("Incremento --> %d\n", x);

    // Decremento
    y--;
    printf("Decremento --> %d\n", y);

    return 0;
}