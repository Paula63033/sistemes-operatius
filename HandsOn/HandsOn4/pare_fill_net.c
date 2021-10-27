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

char * estat_net;

char * estat_fill;


switch (num1)
{
case 1:
        estat_net = "decapitat";
    break;

case 0:
        estat_net = "apunyalat";
    break;
}

switch (num2)
{
case 1:
        estat_fill = "decapitat";
    break;

case 0:
        estat_fill = "apunyalat";
    break;
}



int pid, pid2;

pid = fork();

if (pid == 0) {
//fill
    printf("Hola sóc en Ned fill del matrimoni del Richard i la Lyarra amb pid = %d \n", getpid());
    fflush( stdout );

    pid2 = fork();

    if(pid2 == 0){
        //nET
        printf("Hola sóc en Robb Stark amb pid = %d, soc un fill del matrimoni de la Catelyn Stark i Ned Stark.\n", getpid());
        fflush( stdout );

        printf("Soc en Robb amb pid = %d i he estat %s \n", getpid(), &*estat_net);
        fflush( stdout );
       
        exit(0);

    } else if (pid2 > 0){
        //PARE NET / FILL 
        wait(NULL);

        printf("Soc en Ned amb pid = %d i he estat %s \n", getpid(), &*estat_fill);
        fflush( stdout );
       
        //waitpid(-1, 0, WUNTRACED);
        exit(0);
    }
    
}
    //pare
    printf("Hola sóc Rickard Stark casat amb Lyarra Stark amb pid = %d \n", getpid());
    fflush( stdout );
    
    wait(NULL);

    printf("En resum el meu fill Robb ha estat %s, en Ned %s i jo en Rickard amb pid = %d i m’han executat.\n", &*estat_net, &*estat_fill ,getpid());


    printf("The winter is coming!!!!!\n");
    fflush( stdout );
    exit(0);

}