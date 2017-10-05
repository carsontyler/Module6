// File: arrayChar
// Created by Carson Tyler on 10/5/2017 for CS1410.
// Copyright ©2017 WSU
#include <iostream>
using namespace std;                                            // Char --> 1 Byte    'A' C++
                                                                // ASCII              '9'
                                                                // Unicode --> 2 Bytes includes all characters
// Constants, Structs, Classes
const int MAX = 80;

//Prototypes

// Main Program
int main()
{
    char st[MAX];

    //cout << "Enter your name first: ";
    //cin >> st;
    //cout << "Hello " << st << endl;

    // Let the complier calculate the space
    // String constants
    // Can take spaces without aa number inside
    char hi[] = "Hello Weber State University Students!";
    cout << hi << endl;

    // To support enbedded blanks/spaces, use cin.get() function
    cout << "Enter your full name: ";
    cin.get(st,MAX);                                                // Destination, size
    cout << "Hello " << st;

    return 0;
}
// Function Definitions