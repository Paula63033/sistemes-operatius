#include <sys/types.h>
#include <unistd.h>
#include <assert.h>
#include <stdio.h>
int main () {
        printf("");
        printf("Hola sóc el procés Pare:  %d \n", getppid());
        printf("Hola sóc el procés Fill:  %d \n", getpid());
        printf(" ");
}