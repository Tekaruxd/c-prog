#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int factorial(int n){
    printf("/");
    if(n<2){
        return 1;
    }
    else{
        return factorial(n-1) * n;
    }
}

int main()
{
    int x = 5;
    printf("\nfactorial (%d) = %d\n", x , factorial(x));


    return 0;
}