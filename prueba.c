#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) {
    int n  =  *a;
    *a  =  *b;
    *b  =  n;
}

int main() {
    int a = 15;
    int b = 10;
    printf("El valor de a es %d\n", a);
    printf("El valor de b es %d\n", b);
    swap(&a, &b);
        printf("El nuevo valor de a es %d\n", a);
        printf("El nuevo valor de b es %d\n", b);
return 0;
}
