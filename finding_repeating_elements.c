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

    // Finding the Repeated elements
    int i,j;
    int No_of_repeated=0;

    for (i=0;i<size;i++){
        for (j=i+1;j<size;j++){
            if(arr[i]==arr[j])
            {
                printf("Number %d has duplicate values\n",arr[i]);
                arr[i]=i;
                No_of_repeated=No_of_repeated+1;

            }
        }
    }

    // Displaying the No. of Repeated Elements
    printf("The No. of Repeated Elements in an array is : %d\n",No_of_repeated);
    printf("%d",arr);


return 0;
}
