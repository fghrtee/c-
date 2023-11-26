#include<iostream>
using namespace std;
int main()
{

   int n; // Number of terms in the series
    cout << "Enter the number of Fibonacci terms to generate: ";
    cin >> n;

    int first = 0, second = 1, next;

    cout << "Fibonacci Series:\n";

    for (int i = 0; i < n; ++i) {
        if (i <= 1) {
            next = i;
        } else {
            next = first + second;
            first = second;
            second = next;
        }
        cout << next << " ";
    }

    return 0;
}