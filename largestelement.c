#include <stdio.h>

int main() {
    int n;

    // Taking the size of the array from the user
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid size\n");
        return 1;  // Exit the program with an error code
    }

    int arr[n];

    // Taking array elements as input from the user
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    // Finding the largest element
    int max = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    // Displaying the result
    printf("The largest element in the array is: %d\n", max);

    return 0;
}
