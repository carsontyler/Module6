#include <iostream>
using namespace std;
const int SIZE = 3;

// Prototypes
// Arrays are passed by REFERENCE (address)
void AgeInput(int iage[SIZE]);
void ShowAge(int iage[SIZE]);
// void AgeInput(int age[]); another notation

int main()
{
    int age[SIZE];

    AgeInput(age);

    // Take input
    for(int i = 0; i < SIZE; i++)
    {
        cout << "Enter your age: " ;
        cin >> age[i];
    }

    // Show output
    for(int i = 0; i < SIZE; i++)
    {
        cout << "Age " << i << " is " << age[i] << endl;
    }

    return 0;
} // end main

// Functions
void AgeInput(int iage[SIZE])
{
    for(int i = 0; i < SIZE; i++)
    {
        cout << "Enter your age: " ;
        cin >> iage[i];
    }

}
void ShowAge(int iage[SIZE])
{
    for(int i = 0; i < SIZE; i++)
    {
        cout << "Age " << i << " is " << iage[i] << endl;
    }
}