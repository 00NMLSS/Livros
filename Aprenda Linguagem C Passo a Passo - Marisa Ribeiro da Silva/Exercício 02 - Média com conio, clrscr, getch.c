#include <stdio.h>
#include <stdlib.h> // Biblioteca substituta ao conio

int main (void)
{
    float A, B, M;

    // Substito ao clrscr();
    #ifdef _WIN32
        system("cls"); 
    #else 
        system("clear"); 
    #endif

    printf("Insira o valor de A: ");
    scanf("\n%f",&A); 
    printf("Insira o valor de B: ");
    scanf("\n%f",&B);

    M = (A + B)/2;

    printf("\nO valor da média é de: %f\n", M);

    // Pausa o Programa, substito do getch();
    system("pause"); 
}