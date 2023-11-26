#include <iostream>
#include <random>
#include <ctime>

using namespace std;

int main() {
    y:
    // Seed the random number generator with the current time
    unsigned seed = time(0);

    // Use the seed to initialize the random number engine
    mt19937 gen(seed);

    // Define a distribution (e.g., uniform distribution) for the random numbers
    uniform_int_distribution<int> distribution(1, 100); // Change the range as needed

    // Generate a random number
    int random_number = distribution(gen);
    int guess;
    bool error;
    int tries = 1;
    cout << "Enter a number: "  ;
    cin >> guess;
    if(guess > 100 || guess < 1)
    {
        cout << "Enter a number b/w 1 and 100:";
        cin >> guess;
    }
    
    for ( int i = 1  ; guess != random_number ; i++)
    {
        if(guess > random_number)
        {
            cout << "Enter a smaller number:";
            cin >> guess;
               if(guess > 100 || guess < 1)
                {
                    cout << "Enter a number b/w 1 and 100:";
                    cin >> guess;
                }
            tries++;
        }
                   
        if(guess < random_number)
        {
            cout << "Enter a bigger number:";
            cin >> guess;
               if(guess > 100 || guess < 1)
                {
                    cout << "Enter a number b/w 1 and 100:";
                    cin >> guess;
                }
            tries++;
        }
                     
    }
    cout << "You found the Number in " << tries << " tries" << endl;
    w:
    cout<<"Play again?\n";
    cout<<"y/n\n";
    char choice;
    cin>>choice;
    if(choice == 'y')
    {
        goto y;
    }
        if(choice == 'n')
    {
        cout<<"Bye";
    }
    else
    {
        cout << "Wrong input\n" << "Enter again:";
        goto w;
    }
    return 0;
}
