// A simple C++ Program to count all subarrays having
// XOR of elements as given value m
// Given an array of integers arr[] and a number m, count the number of subarrays having XOR of their elements as m.
#include <bits/stdc++.h>
using namespace std;

// Simple function that returns count of subarrays
// of arr with XOR value equals to m
long long subarrayXor(int arr[], int n, int m)
{
	long long ans = 0; // Initialize ans

	// Pick starting point i of subarrays
	for (int i = 0; i < n; i++) {
		int xorSum = 0; // Store XOR of current subarray

		// Pick ending point j of subarray for each i
		for (int j = i; j < n; j++) {
			// calculate xorSum
			xorSum = xorSum ^ arr[j];

			// If xorSum is equal to given value,
			// increase ans by 1.
			if (xorSum == m)
				ans++;
		}
	}
	return ans;
}

// MAIN program to test above function
int main()
{
	int arr[] = { 4, 2, 2, 6, 4 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int m = 6;

	cout << "Number of subarrays having given XOR is "
		<< subarrayXor(arr, n, m);
	return 0;
}
// output
// Number of subarrays having given XOR is 4
// Time Complexity: O(n2)
// Auxiliary Space: O(1)
// APPROACH
// 1) Initialize ans as 0.
// 2) Compute xorArr, the prefix xor-sum array.
// 3) Create a map mp in which we store count of 
//    all prefixes with XOR as a particular value. 
// 4) Traverse xorArr and for each element in xorArr
//    (A) If m^xorArr[i] XOR exists in map, then 
//        there is another previous prefix with 
//        same XOR, i.e., there is a subarray ending
//        at i with XOR equal to m. We add count of
//        all such subarrays to result. 
//    (B) If xorArr[i] is equal to m, increment ans by 1.
//    (C) Increment count of elements having XOR-sum 
//        xorArr[i] in map by 1.
// 5) Return ans.

// EXAMPLE:
// Input : arr[] = {4, 2, 2, 6, 4}, m = 6
// Output : 4
// Explanation : The subarrays having XOR of 
//               their elements as 6 are {4, 2}, 
//               {4, 2, 2, 6, 4}, {2, 2, 6},
//                and {6}

// Input : arr[] = {5, 6, 7, 8, 9}, m = 5
// Output : 2
// Explanation : The subarrays having XOR of
//               their elements as 5 are {5}
//               and {5, 6, 7, 8, 9}
