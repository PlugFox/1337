#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// #include <errno.h>

#include "../lib/src/sum.c"

int main() {
    int a = 3;
    int b = 4;
    int result = sum(a, b);

    printf("The sum of %d and %d is %d\n", a, b, result);
    return 0;
}