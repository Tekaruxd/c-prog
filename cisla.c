#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    float suma = 0;
    int max = 0;
    int min = 0;
    float prumer;

    int cisla[5] = {15, 30, 45, 60, 75};
    max = cisla[4];
    min = cisla[0];

    for (int i = 0; i < 5; i++)
    {
        suma += cisla[i];
        prumer = suma / i;
    }

    printf("prumer je %.2f\n", prumer);
    printf("soucet je %f\n", suma);
    printf("max hodnota je %d\n", max);
    printf("min hodnota je %d\n", min);

    return 0;
}