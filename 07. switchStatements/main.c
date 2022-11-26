#include <stdio.h>

int main()
{

    char grade;

    printf("Enter a letter grade:\n");
    scanf("%c", &grade);

    switch (grade)
    {
    case 'A':
        printf("Perfect!\n");
        break;
    case 'B':
        printf("Muy bien!\n");
        break;
    case 'C':
        printf("Justito\n");
        break;
    default:
        printf("No hay ninguna coincidencia. Entra solo A, B o C.\n");
        break;
    }

    return 0;
}