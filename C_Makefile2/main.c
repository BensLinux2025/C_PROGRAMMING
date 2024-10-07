#include <stdio.h>
#include "add.h"

int main() {
    int a =100, b = 300;
    printf("The sum of %d and %d is %d\n", a, b, add(a, b));
    return 0;
}

