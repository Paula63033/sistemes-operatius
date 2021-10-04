#include <stdlib.h>
#include <string.h>
#include <stdio.h>
 
int main (int argc, char * argv[]){
char msg[250];
int s=10,n,m;
int *ptr=&s;
sprintf(msg,"La variable s és un enter i conté el valor %d. \n",s);
write(1,msg,strlen(msg));
sprintf(msg,"La variable ptr conté l'@ on tenim guardat el valor de s = %p. \n",ptr);
write(1,msg,strlen(msg));
sprintf(msg,"La variable *ptr conté el valor s = %i.\n",*ptr);
write(1,msg,strlen(msg));
sprintf(msg,"La variable &s l'@ de s = %p.\n", &s);
write(1,msg,strlen(msg));
sprintf(msg,"La variable &n l'@ de n = %p.\n", &n);
write(1,msg,strlen(msg));
sprintf(msg,"La variable &m l'@ de m = %p.\n", &m);
write(1,msg,strlen(msg));
sprintf(msg,"La variable &ptr l'@ de ptr = %p.\n", &ptr);
write(1,msg,strlen(msg));
exit(0);
};
