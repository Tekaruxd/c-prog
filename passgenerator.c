#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
   srand(time(NULL));
    int znak;
    int pocetznaku;
    pocetznaku = 7;
    for(int i = 0; i < pocetznaku; i++)
    {
        znak = rand() % 3 ;

        if(znak == 0)
        {
            int pismeno;
            pismeno = rand() % 26 + 97;
            printf("%c" ,pismeno);
        }
        else
        {   if(znak == 1)
            { 
            int pismenov;
            pismenov = rand() % 26+65;
            printf("%c" ,pismenov);
            }    
            else
            {
            int cislo;
            cislo = rand() % 10;
            printf("%d",cislo);
            }

        }
        
    }

}    
