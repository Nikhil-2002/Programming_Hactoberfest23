// CPP program to count frequencies of array items✅
    


#include <bits/stdc++.h>
using namespace std;

void countFreq(int arr[], int n)
{
	// Mark all array elements as not visited
	vector<bool> visited(n, false);

	// Traverse through array elements and
	// count frequencies
  
	for (int i = 0; i < n; i++) {

		// Skip this element if already processed
    
		if (visited[i] == true)
			continue;

		// Count frequency
		int count = 1;
		for (int j = i + 1; j < n; j++) {
			if (arr[i] == arr[j]) {
				visited[j] = true;
				count++;
			}
		}
		cout << arr[i] << " " << count << endl;
	}
}

//Main code
int main()
{
	int arr[] = { 10, 20, 20, 10, 10, 20, 5, 20 };
	int n = sizeof(arr) / sizeof(arr[0]);
	countFreq(arr, n);
	return 0;
}
 // Complexity Analysis:

    // Time Complexity : O(n2) 
    // Auxiliary Space : O(n)
// Output

// 10 3
// 20 4
// 5 1

// Examples: 

// Input :  arr[] = {20, 20, 10, 10, 20, 5, 20}
// Output : 10 2
         // 20 4
         // 5  1

// Input : arr[] = {10,20}
// Output : 10 1
         // 20 1

