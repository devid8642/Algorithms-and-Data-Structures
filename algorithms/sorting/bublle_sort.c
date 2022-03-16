#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <assert.h>

/**
 * Show elements of the array 
 * @param array: array to be show
 * @param n: length of the array
 */
void show(const int *array, int n) {
    printf("Array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", array[i]);
    printf("\n");
}

/**
 * Bubble sort implementation
 * @param array: array to be sort 
 * @param n: length of the array
 */
void bubbleSort(int *array, int n) {
    bool swapped = false;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (array[j] > array[j+1]) {
                int tmp = array[j];
                array[j] = array[j+1];
                array[j+1] = tmp;
                swapped = true;
            }
        }
        if (!swapped)
            break;
    }
}

/**
 * Test function
 */
void test() {
    const int size = 15;
    int arr[size];

    for (int i = 0; i < size; i++)
        arr[i] = rand() % 100;
    bubbleSort(arr, size);    
    for (int i = 0; i < size - 1; i++)
        assert(arr[i] <= arr[i + 1]);
}

int main(void) {

    srand(time(NULL));
    test();

    return 0;
}
