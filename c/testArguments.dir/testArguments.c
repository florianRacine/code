#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv) {
    printf("Tu as donné comme première argument : %s .\n",argv[1]);
    printf("Tu as donné %d arguments.", argc);
    return 0;
}
