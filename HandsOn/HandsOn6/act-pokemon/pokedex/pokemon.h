#ifndef _POKEMON_H_
#define _POKEMON_H_

typedef struct pokemon *Pokemon;

Pokemon new_pokemon(int pokemon_id, char *name, double height,double weight);
int pokemon_id(Pokemon pokemon);
char *pokemon_name(Pokemon pokemon);
double pokemon_height(Pokemon pokemon);
double pokemon_weight(Pokemon pokemon);
#endif // _POKEMON_H_
