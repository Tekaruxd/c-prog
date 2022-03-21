#include <stdio.h>

int main()
{
    int sachovnice = 5;

    for(int l = 0; l < sachovnice; l++)
    {     
        for(int i = 0; i < sachovnice; i++){
            if((i+l) % 2 == 0)
                printf("?");
            else{ 
                printf("!");
            }
        }
        printf("\n");
    }
    return 0;
}
