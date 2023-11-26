#include<iostream>
using namespace std;
int main()
{
    cout << "Enter a number:";
    int n;
    cin >> n;
    int isprime =0;
    for(int i = 1 ; i<=n ; i++ )
    {
        if(n%i==0)
        {
            isprime++;
        }

    }
    if(isprime==2)
    {
        cout<<"Prime";
    }
    else
    {
        cout<<"Not prime";
    }
    cout<<isprime;
    return 0;
}