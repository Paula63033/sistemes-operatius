#include <stdio.h>
#include <math.h>
#include <stdlib.h>
 
typedef struct {
float x;
float y;
} point ;

typedef struct {
point inici;
point final;
} line ;
 
float dist( line L ) {
return(sqrt((L.inici.x- L.final.x)*(L.inici.x - L.final.x) + (L.inici.y - L.final.y)*(L.inici.y - L.final.y)));
}
 
int main(){
 
float d;
point A,B;
line L;
 

printf("The coordinates of the point A are: ");
scanf("%f %f",&A.x,&A.y);

 
printf("\nThe coordinates of the point B are: ");
scanf("%f %f",&B.x,&B.y);
 
L.inici = A;
L.final = B;

printf("\nThe distance between A and B is %f\n", dist(L));
 
exit (0);
}
