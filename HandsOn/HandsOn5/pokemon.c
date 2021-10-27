#include <stdio.h>

#include <stdlib.h>

#include <unistd.h>

#include <string.h>

#include <sys/wait.h>

#include <signal.h>

#include <errno.h>

#include "pokemon.h"

#define KNRM "\x1B[0m"
#define KRED "\x1B[31m"
#define KGRN "\x1B[32m"
#define KYEL "\x1B[33m"
#define KBLU "\x1B[34m"
#define KMAG "\x1B[35m"
#define KCYN "\x1B[36m"
#define KWHT "\x1B[37m"

struct pokemon {
int id;
char name[32];
char type[2][32];
int total;
int hp;
int attack;
int defense;
int spAttack;
int spDefense;
int speed;
int generation;
int legendary;
int seen;
int captured;
};

char * args[] = {
  "pokemon",
  "pokemon",
  NULL
};

int main(int arc, char * arv[]) {
    int endFlag = 1;

    while (endFlag == 1) {

      char s[100];
      char choice;
      sprintf(s, "################\n# E. Explore \n# Q. Quit\n################\n");
      if (write(1, s, strlen(s)) < 0) perror("Error writting the menu");
      scanf(" %c", & choice);

      switch (choice) {
      case 'Q':
        endFlag = 0;
        break;
      case 'E':
        break;
      default:
        sprintf(s, "%s!!!!Invalid option. Try again. %s\n", KRED, KNRM);
        if (write(1, s, strlen(s)) < 0) perror("Error writting invalid option");
      }
    }

    char s[100];
    sprintf(s, "%s!!!!I'm tired from all the fun... %s\n", KMAG, KNRM);
    if (write(1, s, strlen(s)) < 0) perror("Error writting the ending msg");
    exit(0);

}