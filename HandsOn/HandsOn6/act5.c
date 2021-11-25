#include <stdlib.h>
#include <stdio.h>
#include <signal.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <errno.h>

int main(int argc, char *argv[]){

            int fd[2];
            char s[100];
            char *p1[] = {"ls", NULL};
            char *p2[] = {"wc", "-l", NULL}; 

            if (pipe(fd)<0){
                perror("Error de creació del pipe fd[]");
                exit(-1);
            }

            int pid;
            int pid2;

            switch (pid = fork()){
                case -1:
                perror("Error fork()");
                exit(-2);
                break;
            case 0:
                dup2(fd[0],0);
                    close(fd[1]); //escriptura tancar
                    execvp(p2[0],p2); //recobriment


            default:
                //pare escriure (ls)
                switch (pid2 = fork()){

                   case 0:
                    //2n fill
                    //fill llegir (wc -l)
                    // To do

                    dup2(fd[1],1);
                close(fd[0]);
                execvp(p1[0],p1);
                    // Tancar el descriptor 0 i assignar a 0 fd[0] lectura del pipe
                    
                }                
            }
               wait(NULL);
               wait(NULL);
}