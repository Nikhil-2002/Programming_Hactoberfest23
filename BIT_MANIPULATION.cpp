#include <bits/stdc++.h>
using namespace std;
int getbit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}
int setbit(int n, int pos)
{
    return (n | (1 << pos));
}
int clearbit(int n, int pos)
{
    int mask = ~(1 << pos);
    return (n & mask);
}
int updatebit(int n, int pos, int value)
{
    int mask = ~(1 << pos);
    n = (n & mask);
    return (n | (value << pos));
}
int main()
{
    cout << "ENTER THE KEY AS PER YOUR TASK:" << endl;
    int n;
    bool check = true;
    while (check)
    {
        int a, pos;
        cout << "\n1)ENTER 1 FOR CHECKING WHICH BIT IS PRESENT AT THAT POSITION" << endl;
        cout << "2)ENTER 2 FOR SETTING A BIT ON THAT POSITION" << endl;
        cout << "3)ENTER 3 FOR SETTING BIT TO ZERO ON THAT POSITION" << endl;
        cout << "4)ENTER 4 FOR UPDATE BIT ON THAT POSITION" << endl;
        cout << "5)ENTER 5 FOR EXIT" << endl;
        cin>>n;
        switch (n)
        {
        case 1:
            cout << "ENTER THE NO: ";
            cin >> a;
            cout << "ENTER THE POSITION WHERE YOU WANT TO CHECK: ";
            cin >> pos;
            cout << "THE BIT AT "<<pos<<" POSITION IS "<<getbit(a, pos) << endl;
            break;
        case 2:
            cout << "ENTER THE NO: ";
            cin >> a;
            cout << "ENTER THE POSITION WHERE YOU WANT TO SET A BIT: ";
            cin >> pos;
            cout << "NO AFTER SETTING A BIT IS "<<setbit(a, pos) << endl;
            break;
        case 3:
            cout << "ENTER THE NO: ";
            cin >> a;
            cout << "ENTER THE POSITION WHERE YOU WANT TO CLEAR A BIT: ";
            cin >> pos;
            cout << "NEW NO IS "<<clearbit(a, pos) << endl;
            break;
        case 4:
            cout << "ENTER THE NO: ";
            cin >> a;
            cout << "ENTER THE POSITION WHERE YOU WANT TO CHANGE: ";
            cin >> pos;
            bool bit;
            cout<<"ENTER THE BIT TO WHICH YOU WANT TO CHANGE: ";
            cin>>bit;
            cout <<"NEW NO IS "<< updatebit(a, pos, bit);
            break;
        case 5:
            check = false;
            break;
        default:
            cout << "YOU ENTER WRONG KEY.." << endl;
            break;
        }
    }

    return 0;
}