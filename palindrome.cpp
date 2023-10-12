#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// Function to check whether the string is palindrome
string isPalindrome(string S)
{
	// Stores the reverse of the string S
	string P = S;

	// Reverse the string P
	reverse(P.begin(), P.end());

	if (S == P) {
		return "Yes";
	}

	else {
		return "No";
	}
}

// Driver Code
int main()
{
	string S;
    cout<<"Enter the string: ";
    cin>>S;
	cout << isPalindrome(S);

	return 0;
}
