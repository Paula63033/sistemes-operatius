#include <stdio.h>
#include <math.h>
#include <stdlib.h>
 
typedef struct {
int pokemon_id;
char *name;
double height;
double weight;

} Pokemon;

Pokemon create_pokemon(int pokemon_id, char * name, double height, double weight){
    Pokemon p;
    p.pokemon_id = pokemon_id;
    p.name = name;
    p.height = height;
    p.weight = weight;

    return p;

}
 
int pokemon_id(Pokemon pokemon){
    return pokemon.pokemon_id;
}
char *pokemon_name(Pokemon pokemon){
    return pokemon.name;
}
double pokemon_height(Pokemon pokemon){
    return pokemon.height;
}
double pokemon_weight(Pokemon pokemon){
    return pokemon.height;
}

}
