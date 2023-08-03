#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

int main(int argc, char *argv[]) {
    srand(time(NULL));
    int papu[100];
    int maximo = 0;
    int minimo;

for(int i = 0; i<100 ; i++) {
    papu[i] = rand() % 101;
    printf("%d numero\n", papu[i]);


    if(papu[i] > maximo) {
    maximo = papu[i];
}

    else if(papu[i] < minimo) {
    minimo = papu[i];
}


} 
 printf("El minimo es %d\n", minimo);
  printf("El maximo es %d\n", maximo);
 return 0;
}
