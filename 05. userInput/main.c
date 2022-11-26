#include <stdio.h>
#include <string.h>

int main()
{

    char nombre[50];
    int edad;

    printf("Como te llamas (nombre y apellidos)?\n");
    fgets(nombre, 50, stdin);
    nombre[strlen(nombre) - 1] = '\0';
    printf("Cuantos años tienes?\n");
    scanf("%d", &edad);

    printf("Te llamas %s y tienes %d años\n", nombre, edad);

    return 0;
}