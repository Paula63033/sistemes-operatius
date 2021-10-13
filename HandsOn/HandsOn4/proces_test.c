#include <sys/types.h>
#include <unistd.h>
#include <assert.h>
#include <stdio.h>
int main () {
        pid_t p1 = fork();
        assert (p1 >= 0);
        printf("Hola sóc el procés Pare:  %d \n", getppid());
        printf("Hola sóc el procés Fill:  %d \n", getpid());
        printf(" ");
}