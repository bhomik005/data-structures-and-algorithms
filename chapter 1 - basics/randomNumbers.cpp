#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int GenerateRandomNumber(int min, int max) {
    static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
    // evenly distribute the random number across our range
    return min + static_cast<int>(max - min + 1) * (rand() * fraction);
}

int main() {
    // seeds the random number generator (numbers will be different each time the program is run)
    // srand(): initializes the random number generator
    // time(0): returns the current time in seconds since the (January 1, 1970)
    // static_cast<unsigned int> : casts the result of time(0) to an unsigned integer, as required by srand() function
   srand(static_cast<unsigned int> (time(0)));

    // loop ten times
    for(int i = 0; i < 10; ++i) {
        cout << GenerateRandomNumber(0, 100) << " ";
    }
    cout << "\n";
    return 0;
}
