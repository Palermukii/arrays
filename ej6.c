#include <stdio.h>
#include <stdlib.h>

void swap(int a[], int i, int j) {
    int t = a[i];
    a[i] = a[j];
     a[j] = t;
}

int main() {
int n = 150;
int a[150];
    for (int i = 0; i < n; i++) {
        a[i] = i + 1;
    }
        for (int i = 0; i < n / 2; i++) {
        swap(a, i, n - 1 - i );
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

 return 0;
}
