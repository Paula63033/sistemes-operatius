#include <signal.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define RUNNINGDIR "./"
#define LOGFILE RUNNINGDIR"log.txt"

enum accions {pokemonEscaped = 7, pokemonCaptured = 2};

void logger(char* missatge){
    time_t now;
    time(&now);
    FILE* f = fopen(LOGFILE, "a");
    fprintf(f, "%s:%s \n" , ctime(&now), missatge); //printf a fitxer
    //ctime(&now) ens dona temps actual
    fclose(f); //tanquem fitxer
}

int getRandom(){

    int num = rand()%10;
    return num;
}

void tractament(){

    char log[100];
    int numero = getRandom();
    sprintf(log, "El valor de la variable es: %d \n", numero);
    logger(log);

    if (numero==7)
    {
            exit(pokemonEscaped);
    }
    
}


int main()
{
    srand(getpid());

signal(SIGUSR1,tractament);

    while(1)
    {


    }

}