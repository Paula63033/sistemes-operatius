#include <stdlib.h>
#include <string.h>
#include <stdio.h>
 
int main (int argc, char * argv[]){
char msg[250];
int s=10;
float f=10.5;
char a='a';
int *pt1 = &s;
float *pt2 = &f;
char *pt3= &a;
 

sprintf(msg,"s = %d.\n",s);
write(1,msg,strlen(msg));
sprintf(msg,"f = %f.\n",f);
write(1,msg,strlen(msg));
sprintf(msg,"a = %c.\n",a);
write(1,msg,strlen(msg));
sprintf(msg,"@ de s (&s) = %p.\n",&s);
write(1,msg,strlen(msg));
sprintf(msg,"@ de f (&f) = %p.\n",&f);
write(1,msg,strlen(msg));
sprintf(msg,"@ de a (&a) = %p.\n",&a);
write(1,msg,strlen(msg));
sprintf(msg,"Valor de @ de s -> *(&s) = %d.\n",*(&s));
write(1,msg,strlen(msg));
sprintf(msg,"Valor de @ de f -> *(&f) = %f.\n",*(&f));
write(1,msg,strlen(msg));
sprintf(msg,"Valor de @ de a -> *(&a) = %c.\n",*(&a));
write(1,msg,strlen(msg));
sprintf(msg,"@ de s -> pt1 = %p.\n",pt1);
write(1,msg,strlen(msg));
sprintf(msg,"@ de f -> pt2 = %p.\n",pt2);
write(1,msg,strlen(msg));
sprintf(msg,"@ de a -> pt3 = %p.\n",pt3);
write(1,msg,strlen(msg));
sprintf(msg,"Valor de @ de s -> *pt1 = %d.\n",*pt1);
write(1,msg,strlen(msg));
sprintf(msg,"Valor de @ de f -> *pt2 = %f.\n",*pt2);
write(1,msg,strlen(msg));
sprintf(msg,"Valor de @ de a -> *pt3 = %c.\n",*pt3);
write(1,msg,strlen(msg));
exit(0);
}
