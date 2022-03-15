#include <stdio.h>

int main(void) {
    int n = 7;
    int array[] = {1, 4, 5, -8, 9, 5, 4};

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (array[j] > array[j+1]) {
                int tmp = array[j];
                array[j] = array[j+1];
                array[j+1] = tmp;
            }
        }
    }

    printf("Array before being sorted: 1 4 5 -8 9 5 4\n");
    printf("Array after being sorted: ");
    for (int i = 0; i < n; i++)
        printf("%d ", array[i]);
    printf("\n");

    return 0;
}
