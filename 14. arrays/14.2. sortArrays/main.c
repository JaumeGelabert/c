#include <stdio.h>
#include <string.h>

// BASIC BUBBLE SORT

void sort(int array[], int elements)
{

    for (int i = 0; i < elements - 1; i++)
    {
        for (int j = 0; j < elements - 1; j++)
        {

            // De menor a mayor --> ">"
            // De mayor a menor --> "<"
            if (array[j] < array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void printArray(int array[], int elements)
{
    for (int i = 0; i < elements; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main()
{

    int array[] = {9, 1, 4, 3, 2, 5, 6, 8, 7, 0};
    int elements = sizeof(array) / sizeof(array[0]);

    sort(array, elements);
    printArray(array, elements);

    return 0;
}