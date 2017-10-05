// File: inputOutputString
// Created by Carson Tyler on 10/5/2017 for CS1410.
// Copyright ©2017 WSU
#include <iostream>
#include <string>
using namespace std;

//Prototypes

// Main Program
int main()
{
    string full_name, nickname, address;

    cout << "Enter your full name: ";
    getline(cin, full_name);                                // Take embedded blanks/spaces. Supports spaces
    cout << "Enter your nickname: ";
    cin >> nickname;                                        // Takes one string object/word (have to use getline for multiple words)
    cout << full_name << endl;
    cout << nickname << endl;

    cout << "Enter your address on separate lines\n";
    cout << "Terminate input with '$'\n";
    getline(cin, address, '$');                             // Input parameter optional
    cout << address;

    return 0;
}
// Function Definitions