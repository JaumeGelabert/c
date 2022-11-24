#include <stdio.h>

int main()
{

    double prices[] = {1.0, 2.0, 3.0, 4.0};

    printf("Entire array size: %lu bytes\n", sizeof(prices));
    printf("Single double size: %lu bytes\n", sizeof(prices[0]));
    printf("Total number of elements: %lu\n", sizeof(prices) / sizeof(prices[0]));

    for (int i = 0; i < sizeof(prices) / sizeof(prices[0]); i++)
    {
        printf("%.2lf\n", prices[i]);
    }

    int array2dOne[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int rows = sizeof(array2dOne) / sizeof(array2dOne[0]);
    int columns = sizeof(array2dOne[0]) / sizeof(array2dOne[0][0]);

    printf("Rows: %d\n", rows);
    printf("Columns: %d\n", columns);

    int array2dTwo[2][2];

    array2dTwo[0][0] = 1;
    array2dTwo[0][1] = 2;
    array2dTwo[1][0] = 3;
    array2dTwo[1][1] = 4;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d ", array2dOne[i][j]);
        }
        printf("\n");
    }

    return 0;
}