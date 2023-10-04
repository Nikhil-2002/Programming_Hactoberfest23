#include <stdio.h>

int main() {
    int size;

    // Taking the size of the array from the user
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    if (size <= 0) {
        printf("Invalid size\n");
        return 1;  // Exit the program with an error code
    }

    int arr[size];

    // Taking array elements as input from the user
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; ++i) {
        scanf("%d", &arr[i]);
    }

    // initializing the start and end position of an array.
    int start=0;
    int end=size-1;

    // Reversing the array
    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;

    }

    // Printing the Reversed array
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
