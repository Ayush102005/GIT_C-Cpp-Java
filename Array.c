#include <stdio.h>
int find_largest(int arr[], int n) {
    if (n == 0) {
        printf("Array is empty\n");
        return -1; 
    }

    int max_val = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max_val) {
            max_val = arr[i];
        }
    }

    return max_val;
}

int main() {
    int arr[] = {3, 1, 4, 1, 5, 9, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int largest = find_largest(arr, n);
    printf("Largest element: %d\n", largest);
    return 0;
}