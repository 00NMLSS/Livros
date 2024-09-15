#include <stdio.h>

int main (void)
{
    float A, B, M;
    
    printf("Insira o valor A: ");
    scanf("\n%f",&A);

    printf("Insira o valor B: ");
    scanf("\n%f",&B);

    M = (A + B)/2;

    printf("\nO valor da média de A+B é: %f\n", M);
}