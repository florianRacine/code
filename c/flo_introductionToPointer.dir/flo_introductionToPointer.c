#include <stdio.h>
#include <stdlib.h>

void interversion(int *pa, int *pb) {
    int intermediaire;
    intermediaire = *pa;
    *pa = *pb;
    *pb = intermediaire;
    return ;
}

int main () {
    int a = 1, b = 2;
    printf("a = %d, b = %d \n", a, b);
    interversion(&a,&b);
    printf("a = %d, b = %d", a, b);
    return 0;
}
