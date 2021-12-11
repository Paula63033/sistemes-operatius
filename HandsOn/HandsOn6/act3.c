#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <unistd.h>
#include <sys/wait.h>


int main() {

        int fd[2];

        int r = pipe(fd);

        assert(r == 0);

        pid_t p1 = fork();

        assert(p1 >= 0);

        if (p1 == 0) {

        close(fd[0]);

        char msg[5];

        sprintf(msg,"msg1");

        ssize_t nw = write(fd[1], msg, strlen(msg));

        assert(nw == (ssize_t) strlen(msg));

        sprintf(msg,"msg2");

        nw = write(fd[1], msg, strlen(msg));

        assert(nw == (ssize_t) strlen(msg));

        close(fd[1]); //(X)

        while(1);

        exit(0);

        }

        close(fd[1]);

        char buf[100];

        while(read(fd[0],&buf,sizeof(buf)) ){

            printf("I got a message! It was %s\n", buf);

        }

        printf("No more messages :(\n");

        close(fd[0]);

}