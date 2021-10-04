#include <stdio.h>
#include <math.h>
 
typedef struct {
float x;
float y;
} point ;
 
float dist( point A, point B) {
return(sqrt((A.x - B.x)*(A.x - B.x) + (A.y - B.y)*(A.y - B.y)));
}
 
int main(){
 
float d;
point A, B;
 

printf("The coordinates of the point A are: ");
scanf("%f %f",&A.x,&A.y);
 

printf("\nThe coordinates of the point B are: ");
scanf("%f %f",&B.x,&B.y);
 

printf("\nThe distance between A and B is %f\n", dist(A,B));
 
exit (0);
}
