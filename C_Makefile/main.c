#include <stdio.h>
#include "add.h"

int main() {
    int a = 5, b = 3;
    printf("The sum of %d and %d is %d\n", a, b, add(a, b));
    return 0;
}

