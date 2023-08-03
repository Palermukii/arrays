#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
    srand(time(NULL));
int n = atoi(argv[1]);
int m = atoi(argv[2]);
int papu[n];

for(int i = 0; i<n ; i++) {
    papu[i] = rand() % m;
    printf("%d numero\n", papu[i]);
} 
 return 0;
}
