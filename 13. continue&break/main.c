#include <stdio.h>

int main()
{

    for (int i = 0; i < 10; i++)
    {
        if (i == 3 || i == 7)
        {
            continue;
        }

        if (i == 8)
        {
            break;
        }

        printf("%d\n", i);
    }

    return 0;
}