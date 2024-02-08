#include <stdio.h>

void flatten_and_filter(int arr[], int size, int newarr[], int *pointToArr) {
    for (int i = 0; i < size; i++) {
        if (arr[i] >= 0) {
            newarr[(*pointToArr)++] = arr[i];
        }
    }
}

int main() {
    int nested_arr[] = {1, 2, 4, 6, 3, 5, 6, 7, 1};
    int sizeOfArr = sizeof(nested_arr) / sizeof(nested_arr[0]);

    int flattened_array[sizeOfArr];
    int flat_index = 0;

    flatten_and_filter(nested_arr, sizeOfArr, flattened_array, &flat_index);

    for (int i = 0; i < flat_index; i++) {
        printf("%d ", flattened_array[i]);
    }

    return 0;
}
