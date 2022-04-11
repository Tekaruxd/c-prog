#include <stdio.h>

int minimum(int x, int y){
    if(x <= y){
        return x;  
    }
    return y;
}

int maxdelitel(int x, int y){
    for(int i = minimum(x, y); i > 1; i-- ){
        if(x % i == 0 && y % i == 0){
            return i;
        }
    }
    return 1;
}

int main() {
    int cit = 10;
    int jme = 5;
    printf("Maximální společný dělitel pro %d a %d je %d \n", cit, jme, maxdelitel(cit, jme));
    return 0;
}   