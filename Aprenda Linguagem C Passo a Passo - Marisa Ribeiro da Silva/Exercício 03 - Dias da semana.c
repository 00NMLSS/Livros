#include <stdio.h>
#include <stdlib.h>
#include <direct.h>
#include <time.h>

int main (void)
{
    //substituto do clearscr conforme proposto no exercicio 2
    #ifdef _WIN32
        system("cls"); 
    #else 
        system("clear"); 
    #endif

    printf("\nHoje é segunda-feira.\n\n"); custom_delay(1000);
    printf("\nAmanhã é terça-feira.\n\n\t"); custom_delay(1000);
    printf("\nDepois de amanhã é quarta-feira.\n\n\t"); custom_delay(1000);
    printf("\nDepois de quarta, é quinta-feira.\n\n\t"); custom_delay(1000);
    printf("\nDepois de quinta, é sexta-feira\n\n\t"); custom_delay(1000);
    printf("\nFinalmente hoje é sexta-feira.\n\n\t"); custom_delay(1000);
    printf("\nSábado e domingo: dia de descansar.\n\n\t"); custom_delay(1000);
    
}

void custom_delay(int ms) {
    clock_t start_time = clock();

    while (clock() < start_time + ms * CLOCKS_PER_SEC / 1000);
}