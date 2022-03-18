#include <stdio.h>
#include <assert.h>
#include <time.h>
#include <stdlib.h>

/**
 * Show elements of the array
 * @param arr: array to be show
 * @param n: length of the array
 */
void show(int *arr, int n) {
    printf("Array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

/**
 * Test function
 */
void test() {
    int size = 10;
    int array[size];

    for (int i = 0; i < size; i++)
        array[i] = rand() % 100;
    for (int i = 0; i < size - 1; i++)
        assert(array[i] <= array[i+1]);
}

int main(void) {

    srand(time(NULL));
    test();

    return 0;
}
