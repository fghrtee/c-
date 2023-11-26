#include<iostream>
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
    int temp;
    int num;
    for(int j = 0 ; j < size ; j ++)
    {
        for(int i = 0 ; i < size ; i ++)
    {
        if(array[i] > array[i+1])
        {
        temp = array[i];
        array[i] = array[i+1];
        array[i+1] = temp;
        }        
    }
    }
    for(int i = 0 ; i < size ; i ++)
    {
        cout << array[i];
    }
    return 0;
}