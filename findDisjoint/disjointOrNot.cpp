#include <bits/stdc++.h>
using namespace std;
#define int long long
#define MOD 1000000007 
const long long N = 10000005;

main()
{
    // Provide the size of array 1 and array 2 with their elements
    int n, m;
    cout << "Size of first array: ";
    cin >> n;
    cout << "Size of Second array: ";
    cin >> m;

    // Initializing arrays
    int a[n], b[m];

    // Initializing sets for both arrays and a third set to combine them
    unordered_set<int> setA, setB, setC;
    cout << "Elements of first array: ";
    for (int i = 0; i < n; i++) 
    {
        cin >> a[i];
        setA.insert(a[i]);
        setC.insert(a[i]);
    }
    cout << "Elements of second array: ";
    for (int i = 0; i < m; i++) 
    {
        cin >> b[i];
        setB.insert(b[i]);
        setC.insert(b[i]);
    }

    // Comparing the sizes of sets to determine if they are disjoint
    int sizeA = setA.size();
    int sizeB = setB.size();
    int sizeC = setC.size();

    if (sizeA + sizeB == sizeC) 
    {
        cout << "Yes, the arrays are disjoint" << endl;
    } 
    
    else 
    {
        cout << "Arrays are not disjoint , they have some common values" << endl;
    }

    return 0;
}
