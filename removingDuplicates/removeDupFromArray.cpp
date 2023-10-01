#include <bits/stdc++.h>
using namespace std;
#define int long long
#define MOD 1e9 + 7
const long long N=10000005;


main()
{
    //Declare an array size;
    int n;
    cout<<"Size of an array: ";
    cin>>n;

    //declare a set also as inserting into sets as it will remove the duplicates

    //declare an array of size n

    int a[n];

    //unordered set for better time complexity
    unordered_set<int> sam;
    cout<<"Elements of an array: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sam.insert(a[i]);
    }
    
    cout<<"Array without duplicates: ";

    for(int it:sam)
    {
        cout<<it<<" ";
    }
    cout<<endl;
}