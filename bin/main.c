#include <stdio.h>
#include <stdlib.h>
//  #include <string.h>
//  #include <errno.h>

#include "../lib/include/sum.h"

int main() {
    int a = 3, b = 4;
    int result = sum(a, b);

    printf("The sum of %d and %d is %d\n", a, b, result);
    return EXIT_SUCCESS;
}