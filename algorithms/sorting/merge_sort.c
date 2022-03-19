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
 * Merge two sorted arrays
 * @param arr: array to be sort
 * @param p: start of the first array
 * @param r: start of the second array and the end of first array
 * @param q: the end of second array
 */
void merge(int *arr, int p, int r, int q) {
    int *w, i, j, k;
    w = malloc((q - p) * sizeof(int));
    i = p; j = r; k = 0;

    while (i < r && j < q) {
        if (arr[i] <= arr[j]) w[k++] = arr[i++];
        else w[k++] = arr[j++];
    }

    while (i < r) w[k++] = arr[i++];
    while (j < q) w[k++] = arr[j++];

    for (i = p; i < q; i++) arr[i] = w[i-p];
    free(w);
    
}

/**
 * Merge sort implementation
 * @param arr: array to be sort
 * @param p: index of the array to sort from
 * @param q: index of the array to sort till
 */
void mergeSort(int *arr, int p, int q) {
   if (p < q - 1) {
        int r = (p + q)/2;
        mergeSort(arr, p, r);
        mergeSort(arr, r, q);
        merge(arr, p, r, q);
   }
}

/**
 * Test function
 */
void test() {
    int size = 10;
    int array[size];

    for (int i = 0; i < size; i++)
        array[i] = rand() % 100;

    mergeSort(array, 0, size);

    for (int i = 0; i < size - 1; i++)
        assert(array[i] <= array[i+1]);
}

int main(void) {

    srand(time(NULL));
    test();

    return 0;
}
