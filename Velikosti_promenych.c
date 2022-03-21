#include<stdio.h>

int main() {
    int intType;
    float floatType;
    double doubleType;
    char charType;

    printf("velikost int: %zu bytů\n", sizeof(intType));
    printf("velikost floatu: %zu bytů\n", sizeof(floatType));
    printf("velikost double: %zu bytů\n", sizeof(doubleType));
    printf("velikost char: %zu bytů\n", sizeof(charType));
    
    return 0;
    }
