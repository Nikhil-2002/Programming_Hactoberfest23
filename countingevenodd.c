#include <stdio.h>

int main() {
    int size;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Input the elements of the array
    printf("Enter the elements of the array:\n");
    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Count even and odd numbers
    int evenCount = 0;
    int oddCount = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    // Display the counts
    printf("Number of even elements: %d\n", evenCount);
    printf("Number of odd elements: %d\n", oddCount);

    return 0;
}
