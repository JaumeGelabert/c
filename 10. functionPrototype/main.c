#include <stdio.h>

// Function prototype
void hello(char[], int);
void hello(char x[], int y);

int main()
{
    char nombre[] = "Jaume";
    int age = 24;

    hello(nombre, age);

    return 0;
}

// Function declaration
void hello(char name[], int age)
{
    printf("Hola %s!\n", name);
    printf("Tienes %d años.\n", age);
}
