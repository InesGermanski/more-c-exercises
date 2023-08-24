#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/*Write a C program to check whether the number
 of 3's is greater than the number of 5's. */

int main()
{

    int n;
    printf("Vnesi broj na elementi vo arej\n");
    scanf("%d", &n);
    int arej[n];
    int trojki = 0;
    int petki = 0;

    printf("Vnesi elementi vo arej\n");
    for (int i = 0; i <= (sizeof(arej) / sizeof(arej[0])); i++)
    {
        scanf("%d", &arej[i]);
    }

    for (int i = 0; i <= (sizeof(arej) / sizeof(arej[0])); i++)
    {
        if (arej[i] == 3)
        {
            trojki++;
        }
        if (arej[i] == 5)
        {
            petki++;
        }
    }

    if (petki > trojki)
    {
        printf("ima poveke petki");
    }
    else
        printf("ima poveke trojki");

    return 0;
}