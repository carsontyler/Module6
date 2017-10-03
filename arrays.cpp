#include <iostream>
using namespace std;

                                                    // Array: List of variables
                                                    // Must be same variables
                                                    // Struct Day{ int day; int month; int year; }; Day d1; d1.month;
                                                    // ARRAY int ari[3]; DECLARES 3 INTEGERS
                                                    // ari[1] catches second element. Element - 1
const int SIZE = 3;

int main()
{
    int age[SIZE];                                  // Define array of 3 ints
    // Take input
    for(int i = 0; i < SIZE; i++)                   // NOT <=
    {
        cout << "Enter your age: " ;
        cin >> age[i];
    }
    for(int i = 0; i < SIZE; i++)
    {
        cout << "Age " << i << " is " << age[i] << endl;
    }

    cout << "Done!" << endl;

    return 0;
}