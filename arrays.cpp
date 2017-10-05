#include <iostream>
using namespace std;

                                                    // Array: List of variables
                                                    // Must be same variables
                                                    // Struct Day{ int day; int month; int year; }; Day d1; d1.month;
                                                    // ARRAY int ari[3]; DECLARES 3 INTEGERS
                                                    // ari[1] catches second element. Element - 1
                                                    // Int, float, structs, objects, char
                                                    // Chars -- Stings
const int SIZE = 3;

int main()
{
    int age[SIZE];                                  // Define array of 3 ints
    // Delcare and initialize an array of three members
    int age2[SIZE] = {99, 21, 33};
    // Take input
    for(int i = 0; i < SIZE; i++)                   // NOT <=
    {
        cout << "Enter your age: " ;
        cin >> age[i];
    }
    for(int i = 0; i < SIZE; i++)
    {
        cout << "Age " << i << " is " << age[i] << endl;
        cout << "Age2 " << i << " is " << age2[i] << endl;
    }

    age[0] = 123;
    for (int i = 0; i < SIZE; i++)
    {
        cout << "\nAfter age " << i << " is " << age[i];
    }
    cout << "Done!" << endl;

    return 0;
}