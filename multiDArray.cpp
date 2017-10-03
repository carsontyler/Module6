// File: multiDArray
// Created by Carson Tyler on 10/3/2017 for CS1410.
// Copyright ©2017 WSU
#include <iostream>
using namespace std;
// Constants, Structs, Classes
const int ROWS = 3;
const int COL = 3;

//Prototypes
void AgeInput(int iage[ROWS][COL]);

// Main Program
int main()
{
    int age[ROWS][COL];
    int age2[ROWS][COL] = {{1, 2, 3},
                           {21, 22, 23},
                           {31, 32, 33}};
    AgeInput(age);

    for(int i = 0; i < ROWS; i++)
    {
        for(int j = 0; j < COL; j++)
        {
            cout << "\tAge " << i << j << " is " << age[i][j];
            cout << "\tAge2 is " << i << j << " is " << age2[i][j];
        }
        cout << endl;
    }
    return 0;
}
// Function Definitions
void AgeInput(int iage[ROWS][COL])
{
    for(int i = 0; i < ROWS; i++)
    {
        for(int j = 0; j < COL; j++)
        {
            cout << "Enter your age: ";
            cin >> iage[i][j];
        }
        cout << endl;
    }
}