#include <stdio.h>
int findSmallest(int arr[], int n) {
 if (n <= 0) {
        printf("Array is empty.\n");
        return -1; // Return an indicator for an error or empty array
    }
    int smallest = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    return smallest;
}

int main() {
    // Example usage
    int array[] = {4, 2, 8, 1, 6};
    int size = sizeof(array) / sizeof(array[0]);
    int smallest = findSmallest(array, size);
    if (smallest != -1) {
        printf("The smallest element in the array is: %d\n", smallest);
    }
    return 0;
}
