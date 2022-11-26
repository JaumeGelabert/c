#include <stdio.h>

void saludo(char x[], int y)
{
    printf("Hola %s!\n", x);
    printf("Tienes %d\n", y);
}

int suma(int x, int y)
{
    int resultado = x + y;
    return resultado;
}

int main()
{

    char name[] = "Jaume";
    int age = 24;
    saludo(name, age);

    int x = 10;
    int y = 5;

    int res = suma(x, y);
    printf("El return de la función es %d\n", res);

    return 0;
}