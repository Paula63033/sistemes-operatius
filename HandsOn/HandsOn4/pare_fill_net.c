//Programeu un programa pare, fill net que tingui la següent sortida (mantenint l’ordre). 
//A més a més els fills, hauran de generar un enter aleatori entre els valors 0,1 i 2. 
//El 0=apunyalat, 1=decapitat.

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

int pid, pid2;

pid = fork();

if (pid == 0) {
//fill
    printf("pid 0  \n");
    fflush( stdout );

    pid2 = fork();

    if(pid2 == 0){
        //nET
        printf("pid2 == 0 SOC EL NET\n");
        kill(getpid(), SIGSTOP);

    } else if (pid2 > 0){
        //PARE NET / FILL PARE
        printf("pid2 >0 SOC EL FILL (PARE DEL NET)\n");
        waitpid(-1, 0, WUNTRACED);
    }
    kill(getpid(), SIGSTOP);

} else if (pid > 0) {
    printf("pid > 0\n");
    //pare

    waitpid(-1, 0, WUNTRACED);
}

exit(0);

}