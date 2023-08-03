#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
int n = atoi(argv[1]);
int papu[n];
for(int i = 0; i<n ; i++) {
    papu[i] = i + 1;
    printf("%d numero\n", papu[i]);
} 
 return 0;
}
