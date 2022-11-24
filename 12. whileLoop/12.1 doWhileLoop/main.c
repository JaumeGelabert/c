#include <stdio.h>
#include <string.h>

void askForName(char[]);
void showName(char[]);

int main()
{

    char name[25];

    do
    {
        printf("Invalid name. Try again!\n");
        askForName(name);
    } while (strlen(name) == 0);

    printf("Valid name! :)\n");
    showName(name);

    return 0;
}

void askForName(char x[])
{
    printf("Como te llamas?\n");
    fgets(x, 25, stdin);
    x[strlen(x) - 1] = '\0';
}

void showName(char x[])
{
    printf("Hola %s!\n", x);
}