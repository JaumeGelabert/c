#include <stdio.h>
#include <strings.h>

int main()
{

    char cars[][10] = {"Ferrari",
                       "Lambo",
                       "Ford"};

    int elements1 = sizeof(cars) / sizeof(cars[0]);

    for (int i = 0; i < elements1; i++)
    {
        printf("%s\n", cars[i]);
    }

    printf("\n");

    strcpy(cars[2], "Tesla");

    int elements2 = sizeof(cars) / sizeof(cars[0]);

    for (int i = 0; i < elements2; i++)
    {
        printf("%s\n", cars[i]);
    }

    return 0;
}