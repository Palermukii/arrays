#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
    srand(time(NULL));
int papu[100];
double sum= 0;

for(int i = 0; i<100 ; i++) {
    papu[i] = rand() % 101;
    printf("%d numero\n", papu[i]);
    sum += papu[i];
} 
double promedio = sum / 100;
printf("El promedio es %.2f\n", promedio);
 return 0;
}
