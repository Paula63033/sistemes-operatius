#include <stdio.h>
#include <math.h>
#include <stdlib.h>
 
typedef struct pokemon *Pokemon;

typedef struct {
int pokemon_id;
char *name;
double height;
double weight;

} line ;
 
float dist( line L ) {
return(sqrt((L.inici.x- L.final.x)*(L.inici.x - L.final.x) + (L.inici.y - L.final.y)*(L.inici.y - L.final.y)));
}
 
int main(){
 

Pokemon new_pokemon(int pokemon_id, char *name, double height,double weight);
int pokemon_id(Pokemon pokemon);
char *pokemon_name(Pokemon pokemon);
double pokemon_height(Pokemon pokemon);
double pokemon_weight(Pokemon pokemon);
 
/*
printf("The coordinates of the point A are: ");
scanf("%f %f",&A.x,&A.y);

 
printf("\nThe coordinates of the point B are: ");
scanf("%f %f",&B.x,&B.y);
 
L.inici = A;
L.final = B;

printf("\nThe distance between A and B is %f\n", dist(L));
 */
exit (0);
}
