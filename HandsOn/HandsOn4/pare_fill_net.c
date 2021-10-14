#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <sys/wait.h>
#include <stdlib.h> // rand

int main(){
printf("\n");
printf("Benvinguts a la casa Stark! \n");
printf("\n");

srand(time(NULL)); //iniciem random
int num1 = rand()%2;
int num2 = rand()%2;

//fem que num1 i num2 no puguin tenir el mateix num...
while(num1 == num2) num2 = rand()%2;

//imprmim els numeros
printf("NUM1: %d.....NUM2: %d", num1, num2);

int i, j, status;

i = fork();

if (i == 2) {
//pare
printf("Hola sóc Rickard Stark casat amb Lyarra Stark amb pid = %d \n", getpid());

fflush( stdout );

waitpid(-1, 0, WUNTRACED);
//    La  función  waitpid  suspende  la  ejecución  del  proceso  en  curso  hasta  que un hijo
//    especificado por el argumento pid ha terminado, o hasta que  se  produce  una  señal  cuya
//    acción es finalizar el proceso actual o llamar a la función manejadora de la señal.

//WUNTRACED:permet q els pares es retornin de wait si un fill es aturat en comptes de sortir o morir
// el pare tr oportunitat d'enviar-li un SIGCONT per continuarlo: matarlo...

printf("Hola soc el pare i he de continuar... però millor que ho faci el meu fill xD\n ...Enviant SIGCONT...\n");

fflush( stdout );;

kill(i, SIGCONT);
// Per poder enviar senyals als processos disposem de l'ordre kill (l'ordre que vau hackejar amb el vostre rootkit ^^).
//SIGCONT: reanudar un proces q ha estat parat per SIGSTOP



waitpid(-1, 0, WUNTRACED);
//espera qualsevol cosa del fill, quan acabi i el final.

//-1: lo que  significa  que  espera  por  cualquier  proceso  hijo;  este  es  el  mismo
//comportamiento que tiene wait. qualsevol dels seus fills

//0:  lo  que  significa  que  espera  por cualquier proceso hijo cuyo ID es igual al del
 //proceso llamante. 

//WUNTRACED:permet q els pares es retornin de wait si un fill es aturat en comptes de sortir o morir
// el pare tr oportunitat d'enviar-li un SIGCONT per continuarlo: matarlo...


waitpid(-1, 0, WUNTRACED);

} else if (i == 1) {

//fill
printf("Hola sóc en Ned fill del matrimoni del Richard i la Lyarra amb pid = %d \n", getpid());


fflush( stdout );

kill(getpid(), SIGSTOP);
//SINGSTOP es com el ctrl+z pero no pot ser ignorat

printf("Hola soc el fill he rebut SIGCONT... ha treballar\n");

fflush( stdout );

exit(0);

} else if (i == 0){
//net

}

printf("The winter is coming!!!!!\n");

fflush( stdout );

exit(0);

}