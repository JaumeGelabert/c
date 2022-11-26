#include <stdio.h>

void printAge(int *pX)
{
    printf("Tienes %d años\n\n", *pX);
}

int main()
{

    int age = 24;

    // Creamos el pointer
    int *pAge = &age;

    printf("\nValor --> %d\n", age);
    printf("Address --> %p\n", &age);
    printf("\n------- Utilizando pointers -------\n");
    printf("\nValor del pointer --> %d\n", *pAge);
    printf("Address del pointer --> %p\n", pAge);
    printf("\n\n\n");
    printAge(pAge);

    return 0;
}