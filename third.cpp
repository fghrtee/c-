#include<iostream>
using namespace std;

    int add(int a , int b)
    {
        int sum = a + b;
        return sum;
    }
    int Sub(int a , int b)
    {
        int sub = a - b;
        return sub;
    }
    int Mul(int a , int b)
    {
        int mul = a * b;
        return mul;
    }
    int Div(int a , int b)
    {
        int div = a / b;
        return div;
    }
      int Mod(int a , int b)
    {
        int mod = a % b;
        return mod;
    }
    
    int main()
    {   
        Goto:
        char input = '\0';
        for(int i = 0 ; input != 'x'; i++)
        {   
            
            char choice;
            cout << " \na = Addition\ns = Subtraction\nm = Multiply\no = Mod\nEnter choice: ";
            cin >> choice;
            if(choice == 'a')
            {
                    int a,b;
                    cout << "Enter first number: ";
                    cin >> a;
                    cout << "Enter second number: ";
                    cin >> b;
                    cout << a << " + " << b << " = " << add(a,b) << "\n";
                    
            }
            else if(choice == 'm')
            {
                   int a,b;
                    cout << "Enter first number: ";
                    cin >> a;
                    cout << "Enter second number: ";
                    cin >> b;
                    cout << a << " * " << b << " = " << Mul(a,b) << "\n";
                    
            }
            else if(choice == 'd')
            {
                   int a,b;
                    cout << "Enter first number: ";
                    cin >> a;
                    cout << "Enter second number: ";
                    cin >> b;
                    cout << a << " / " << b << " = " << Div(a,b) << "\n";
                    
            }
            else if(choice == 'o')
            {
                   int a,b;
                    cout << "Enter first number: ";
                    cin >> a;
                    cout << "Enter second number: ";
                    cin >> b;
                    cout << a << " % " << b << " = " << Mod(a,b) << "\n";
                    
            }
            else
            {
                cout << "Wrong input!!!";
            }
            cout << "\nEnter x to exit or Press any key to continue: ";
            cin >> input;
            if(input == 'x')
            {
               goto Exit;
            }
        }
        goto Goto;
        Exit:
    return 0;
    }