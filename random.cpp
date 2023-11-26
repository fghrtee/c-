#include <iostream>
#include <ctime>
#include <random>

// Use the std namespace to avoid prefixing with "std::"
using namespace std;

int main() {
    // Seed the random number generator with the current time
  // Seed the random number generator with the current time
    unsigned seed = time(0);

    // Use the seed to initialize the random number engine
    mt19937 gen(seed);

    // Define a distribution (e.g., uniform distribution) for the random numbers
    uniform_int_distribution<int> distribution(1, 100); // Change the range as needed

    // Generate a random number
    int random_number = distribution(gen);
    cout << "Random number is " << random_number;
    return 0;
}
