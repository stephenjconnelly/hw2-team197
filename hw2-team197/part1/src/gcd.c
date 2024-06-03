/*
baa2165

*/

#include <stdio.h>
#include <stdlib.h>
#include "iterative.h"
#include "recursive.h"

int main(int argc, char **argv) {
    if (argc != 3) {
        fprintf(stderr, "Usage: ./gcd <integer m> <integer n>\n");
        return EXIT_FAILURE;
    }
    int a = abs(atoi(argv[1]));
    int b = abs(atoi(argv[2]));
    if (a == 0 && b == 0) {
        printf("gcd(0, 0) = undefined\n");
        return EXIT_SUCCESS;
    }
    printf("Iterative: gcd(%s, %s) = %d\n", argv[1], argv[2], gcd_iterative(a, b));
    printf("Recursive: gcd(%s, %s) = %d\n", argv[1], argv[2], gcd_recursive(a, b));
    return EXIT_SUCCESS;
}
