#include <stdio.h>

int main()
{
    int rok;

    printf("Zadej rok u kterého tě zajímá zda je přestupný:\n");
    scanf("%d", &rok);

    if (rok % 4 == 0)
    {
        printf("%d je přetupný rok.", rok);
    }

    else
    {
        printf("%d neni přestupný rok.", rok);
    }

    return 0;
}