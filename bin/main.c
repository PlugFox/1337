#include <stdio.h>
#include <stdlib.h>
// #include <string.h>
// #include <errno.h>

#include "../include/sum.h"

int main(int argc, char *argv[]) {
    printf("Arguments:\n");
    for (int i = 0; i < argc; i++)
        printf("arg[%d] = %s", i, argv[i]);

    int a = 3, b = 4;
    int result = sum(a, b);

    printf("The sum of %d and %d is %d\n", a, b, result);
    return EXIT_SUCCESS;
}