#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <signal.h>
#include <errno.h>
//#include “pokemon.h”
#include<stdbool.h>// Booleanos
#define KNRM "\x1B[0m"
#define KRED "\x1B[31m"
#define KGRN "\x1B[32m"
#define KYEL "\x1B[33m"
#define KBLU "\x1B[34m"
#define KMAG "\x1B[35m"
#define KCYN "\x1B[36m"
#define KWHT "\x1B[37m"
char *args[] = {"pokemon", "pokemon", NULL};
int main(int arc, char *arv[])
{
int endFlag=1;
bool acabat = false;
while (endFlag == 1) {
    char s[100];
    char choice;
    sprintf(s, "################\n# E. Explore \n# Q. Quit\n################\n");
    if (write(1, s, strlen(s)) < 0) perror("Error writting the menu");
    scanf(" %c", &choice);
    switch (choice) {
    case 'Q':
    endFlag=0;
    break;
    case 'E':
    ;
    int i = 0;
    int num = fork();
    while (acabat == false) {
        printf("%d %d\n",i,num);
         if (num > 0) {
                //pare fa menu i fuill recobreix pokemon.c
            //tenir al pare q esperi al usuari q apreti tecles i el fill ha de anar executant bucle infinit.
                printf("Elegeix una opció. P: Throw Pokeball, B:Throw Berry, R:Run \n"); fflush(stdout);
                char opcio;
                scanf(" %c", &opcio);
                printf("Aquesta és op: %c , %d\n", opcio, getpid());
                 switch (opcio) {
                    case 'P':
                        printf("hola");
                    break;
                    case 'B':
                        printf("hola");
                    break;
                    case 'R':
                        //R = ESCAPAR. acabar procés de pokemon. fer SIGINT. kill(pidFill,SIGINT).
                        //wait();
                        //posem endflag a 0, acaba volta
                        kill(num, SIGUSR2); //quan l’usuari ens passa SIGUSR1 al proces del programa atacara al metode tractament
                        acabat = true;
                    break;
             }
         }
         else if (num == 0) {
             //nomes el fill fa recobriment
            //execv(“./pokemon”, args);
            //printf(“Faig el execv\n”);fflush(stdout);
            sleep(5);
            exit(0);
         }
         wait(NULL);
         i++;
    }
    break;
    default:
    sprintf(s, "%s!!!!Invalid option. Try again. %s\n", KRED, KNRM);
    if (write(1, s, strlen(s)) < 0) perror("Error writting invalid option");
    }
}
char s[100];
sprintf(s, "%s!!!!I’m tired from all the fun... %s\n", KMAG, KNRM);
if (write(1, s, strlen(s)) < 0) perror("Error writting the ending msg");
exit(0);
}