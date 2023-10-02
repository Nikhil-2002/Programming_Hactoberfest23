#include<iostream>
using namespace std;
int main()
{
    //Take an array as input
    cout<<"Size of array is: ";
    int n;
    cin>>n;

    //Declaring an array of size n
    int arr[n];

    //Taking the array from user
    cout<<"Enter the array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    //Reversing the entered array
    for(int i=0;i<n/2;i++)
    {
        int help;

        //swapping ith element from start with ith element from last
        help=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-1-i]=help;
    }

    //printing the reversed array
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}