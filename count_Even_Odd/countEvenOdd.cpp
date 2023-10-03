#include <iostream>
using namespace std;

int main() {
    // Initialize an array of integers
    int arr[] = {2, 5, 8, 9, 12, 7, 6};
    
    // Initialize counters for even and odd elements
    int evenCount = 0;
    int oddCount = 0;
    
    // Iterate through the array
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        // Check if the current element is even
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {  // If it's not even, it's odd
            oddCount++;
        }
    }
    
    // Print the counts of even and odd elements
    cout << "Even count: " << evenCount << endl;
    cout << "Odd count: " << oddCount << endl;
    
    return 0;
}
