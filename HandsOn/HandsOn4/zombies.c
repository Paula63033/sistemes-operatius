#include <stdlib.h>

#include <stdio.h>

#include <unistd.h>

int main() {

pid_t pid;

int i;

for (i = 0; ; i++) {

pid = fork();

if (pid > 0) {

printf("Zombie #%d born:\n", i + 1);

sleep(1);

} else {

printf("*drool* Boooo! Arrgghh! *slobber*\n");

exit(0);

}

}

return 0;

}