#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

void BubbleSort(int arr[]);

int main()
{
    int a[SIZE] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };

    printf("Data items in original order:\n");

    for (int i = 0; i < SIZE; i++)
    {
        printf("%4d", a[i]);
    }

    printf("\n\nData items in processing:\n");

    BubbleSort(a);

    printf("\nData items in ascending order:\n");

    for (int i = 0; i < SIZE; i++)
    {
        printf("%4d", a[i]);
    }

    printf("\n");

    system("pause");
    return 0;
}

void BubbleSort(int arr[])
{
    int count = 1;

    for (int i = 0; i < SIZE - 1; i++)
    {
        int swapped = 0;

        for (int j = 0; j < SIZE - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                swapped = 1;
            }
        }

        printf("%2d:", count);

        for (int i = 0; i < SIZE; i++)
        {
            printf("%4d", arr[i]);
        }

        printf("  swapped = %d\n", swapped);

        if (swapped == 0)
            break;

        count++;
    }
}