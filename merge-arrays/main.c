#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Write a C program to create a new array from
 two given arrays of integers, each of length 3. */

void inputArr(int arej[3])
{
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &arej[i]);
    }
}

int novArrej(int array[6], int ar1[3], int ar2[3])
{
    for (int i = 0; i <= 2; i++)
    {
        array[i] = ar1[i];
    }

    for (int i = 0; i <= 2; i++)
    {
        array[i + 3] = ar2[i];
    }
}

int printanje(int arej[6])
{
    for (int i = 0; i < 6; i++)
    {
        printf("%d", arej[i]);
    }
}

int main()
{
    int arr[3];
    int arr1[3];
    int novArr[6];

    printf("Vnesi elementi na prviot array:\n");
    inputArr(arr);
    printf("Vnesi elementi na vtoriot array:\n");
    inputArr(arr1);
    printf("Noviot array:");
    novArrej(novArr, arr, arr1);
    printanje(novArr);

    return 0;
}
