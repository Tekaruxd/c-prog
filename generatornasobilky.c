#include <stdio.h>

int main()
{
    int x = 0;
    printf("zadej cislo pro ktere chces vytvorit nasobilku:");
    scanf("%d", &x);
    for (int i = 1; i <= 10; i++)
    {
        printf("\n %d*%d = %d", x, i, x * i);
    }
    return 0;
}