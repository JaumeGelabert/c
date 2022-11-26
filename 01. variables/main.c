/*
    Variable:
    Espacio en la memoria que guarda un valor.
    Nos referimos a la variable para acceder al valor almacenado.
    Debemos declarar el tipo de valor que contiene la variable.
    La variable se comporta como si fuese el valor que almacena.
*/

#include <stdio.h>

int main()
{

    // Declaración
    int x;

    // Inicialización
    x = 1;

    // Declaración e inicialización
    int y = 2;
    char letra = 'J';
    char name[] = "Jaume";

    printf("La primera letra de mi nombre es la %c\n", letra);

    printf("Mi nombre es %s\n", name);

    return 0;
}