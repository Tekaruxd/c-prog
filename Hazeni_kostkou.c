#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    printf("Pravděpodobnost při házení kostkou \n");
    int pokusy = 100;
    int hodnoty[6] = {0};
    int hodnota;
    srand(time(NULL));

    for(int i = 1; i < pokusy; i++){
        hodnota = rand() % 6;
        hodnoty[hodnota]++;        
    }
    for(int i = 0; i < 6; i++){
        printf("%d * %i \n", i+1, hodnoty[i] ); 
    }
    return 0;
}