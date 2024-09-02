#include <stdio.h>


int main(void){
    int i,
    int tableau[5] = { 784, 5, 45, -12001, 8 };
    int somme = 0;

    for ( i = 0; i <= 5; ++i)
        somme += tableau[i];
    
    printf("%d\n", somme);
    somme = tableau[0];
    printf("%d\n", somme);
    return 0;
}