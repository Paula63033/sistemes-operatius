#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "pokedex.h"
 
/*FILE* f = fopen("./pokedex.csv", "r");
while (fgets(buf, 151, f) != NULL) {
    if ((strlen(buf)>0) && (buf[strlen (buf) - 1] == '\n'))
    buf[strlen (buf) - 1] = '\0';
    info = strtok(buf, ",");
    int id = atoi(info);
}*/

int add_pokemon(){
//This method will receive a string literal (line) in the form "id name weight height" and append the line into the pokedex.csv file.
printf("[add_pokemon]: @NOT IMPLEMENTED \n");
return EXIT_SUCCESS;
}
 
int show_pokemon(){
//This method will receive an integer and display information about the pokemon in position "position" in the stdout. 
printf("[show_pokemon]: @NOT IMPLEMENTED \n");
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
