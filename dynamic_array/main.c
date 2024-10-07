#include <stdio.h>
#include <stdlib.h>

void fillArray(int *array, int size);

int main(int argc, char *argv[]) {
    // Check if the user provided exactly one argument (size of the array)
    if (argc != 2) {
        printf("Usage: %s <size of array>\n", argv[0]);
        return 1;
    }

    // Convert the argument to an integer
    int size = atoi(argv[1]);

    // Check if size is positive
    if (size <= 0) {
        printf("Please provide a positive integer for the array size.\n");
        return 1;
    }

    // Dynamically allocate memory for the array
    int *array = (int*) malloc(size * sizeof(int));

    // Check if memory allocation was successful
    if (array == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Fill the array and print the values
    fillArray(array, size);

    // Free the dynamically allocated memory
    free(array);

    return 0;
}

// Function to fill the array with values and print them
void fillArray(int *array, int size) {
    for (int i = 0; i < size; i++) {
        array[i] = i + 1;
        printf("array[%d] = %d\n", i, array[i]);
    }
}
