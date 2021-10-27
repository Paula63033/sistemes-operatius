#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Ejemplo aprenderaprogramar.com
int main() {
    srand(time(NULL)); //El mayordomo pone a girar la diana
    int test = rand() % 5; //Primer disparo del robot
    printf("Numero aleatorio entre 0 y 4 es %d\n" ,test);
    printf("Otros aleatorios entre 0 y 4 son %d, %d, %d\n" ,rand()%5,rand()%5,rand()%5);
    printf("Otros mas son %d, %d, %d\n" ,rand()%5,rand()%5,rand()%5);
    return 0;
}

 