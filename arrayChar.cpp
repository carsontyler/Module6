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

    cout << "Enter your name: ";
    cin >> st;
    cout << "Hello " << st << endl;

    return 0;
}
// Function Definitions