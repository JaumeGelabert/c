#include <stdio.h>

int main()
{
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", i);
    }

    printf("-----------------------\n");

    for (int i = 0; i < 10; i += 2)
    {
        printf("%d\n", i);
    }

    printf("-----------------------\n");

    for (int i = 20; i > 0; i--)
    {
        printf("%d\n", i);
    }
}
