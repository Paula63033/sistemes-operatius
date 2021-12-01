#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <signal.h>
#include <errno.h>
#include "pokedex/pokedex.h"
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
#define LOGFILE "pokedex_timestamp.csv"

char *args[] = {"pokemon", "pokemon", NULL};

int main(int arc, char *arv[])
{
int seen = 0;
int captured = 0;
int endFlag=1;
int st;
bool acabat;
init_pokedex();
while (endFlag == 1) {
    char s[100];
    char choice;
    sprintf(s, "################\n# E. Explore \n# Q. Quit\n################\n");
    if (write(1, s, strlen(s)) < 0) perror("Error writting the menu");
    scanf(" %c", &choice);
    switch (choice) {
    case 'Q':
        /*FILE* f = fopen(LOGFILE, "w");
        fprintf(f, "%d %s %d %d \n", ); printf a fitxer*/
        /*
            id, name, height, weight
        */

       
            FILE *pf,*qf;
            char c;

            pf=fopen("/pokedex/pokedex.csv","r");
            qf=fopen("pokedex_timestamp.csv","w");

            fscanf(pf,"%c",&c);
            while(c!=EOF)
            {
                fprintf(qf,"%c",c);
                fscanf(pf,"%c",&c);
            }
            
            fclose(pf);
            fclose(qf);
        endFlag=0;
    break;
    case 'E':
        acabat = false;
        show_pokemon(2);
        seen = seen+1;
        int num = fork();
    while (acabat == false) {

         if (num > 0) {
                //pare fa menu i fuill recobreix pokemon.c
            //tenir al pare q esperi al usuari q apreti tecles i el fill ha de anar executant bucle infinit.
                printf("Elegeix una opció. P: Throw Pokeball, B:Throw Berry, R:Run \n"); fflush(stdout);
                char opcio;
                scanf(" %c", &opcio);
                //Sprintf("Aquesta és op: %c , %d\n", opcio, getpid());
                 switch (opcio) {
                    case 'P':
                        kill(num,SIGUSR1);
                    break;
                    case 'B':
                        printf("hola");
                    break;
                    case 'R':
                        //R = ESCAPAR. acabar procés de pokemon. fer SIGINT. kill(pidFill,SIGINT).
                        //wait();
                        //posem endflag a 0, acaba volta
                        kill(num, SIGUSR2); //quan l’usuari ens passa SIGUSR1 al proces del programa atacara al metode tractament
                    break;
             }
             waitpid(num, &st, WUNTRACED);

             if( WEXITSTATUS(st) == 2){
                printf("Atrapat\n");
                captured = captured +1;
                acabat = true;

             } else if (WEXITSTATUS(st) == 7){
                 printf("Pokemon escapat\n");
                acabat = true;

             } else if (WEXITSTATUS(st) == 9){
                printf(" Nosaltres escapem\n");
                 acabat = true;
             } else {
                 printf("Torno a intentar\n");
                 kill(num, SIGCONT);
                 acabat = false;
             }

         }
         else if (num == 0) {
             //nomes el fill fa recobriment
            execv("./pokemon", args);
            
         }
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