#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "pokedex.h"
 

int add_pokemon(){

FILE* f = fopen("./pokedex.csv", "r");

    while (fgets(buf, 151, f) != NULL) {
    if ((strlen(buf)>0) && (buf[strlen (buf) - 1] == '\n')) buf[strlen (buf) - 1] = '\0';
    /*info = strtok(buf, ",");
    int id = atoi(info);*/
    

printf("[add_pokemon]: @NOT IMPLEMENTED \n");
return EXIT_SUCCESS;
}
 
int show_pokemon(int position){
//This method will receive an integer and display information about the pokemon in position "position" in the stdout. 

    /*struct Pokemons{

    }*/

   /* FILE* f = fopen("./pokedex.csv", "r");

    while (fgets(buf, 151, f) != NULL) {
    if ((strlen(buf)>0) && (buf[strlen (buf) - 1] == '\n')) buf[strlen (buf) - 1] = '\0';
    info = strtok(buf, ",");
    int id = atoi(info);
    

    printf("id: %d, &id");*/


printf("[show]: @NOT IMPLEMENTED \n");
return EXIT_SUCCESS;
}
 
int init_pokedex(){
printf("[init_pokedex]: @NOT IMPLEMENTED \n");
/*$ cat pokemon.csv
id,name,weight,height
id,name,weight,height*/
return EXIT_SUCCESS;
}

int remove_pokemon(){
printf("[remove_pokemon]: @NOT IMPLEMENTED \n");
return EXIT_SUCCESS;
}
