#include <iostream>
using namespace std;
int main()
{

    int size;
    cout << "Enter size: ";
    cin >> size;
    int array[size];
    for(int i = 0 ; i < size ; i ++)
    {
        cin >> array[i];
    }
    int n;
    int x;
    bool check = false;
    cout << "Enter a number: ";
    cin >> n;
       for(int i = 0 ; i < size ; i ++)
    {
        if(array[i]==n)
        {
            check = true;
            x = i;
        }
    }
    if(check == true)
    {
        cout << "The number " << n << " found at index " << x ;
    }
        if(check == false)
    {
        cout << "The number " << n << " not found";
    }

    return 0;
}