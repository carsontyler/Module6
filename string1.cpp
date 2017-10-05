// File: string1
// Created by Carson Tyler on 10/5/2017 for CS1410.
// Copyright ©2017 WSU
#include <iostream>
#include <string>                                   // C++ string class
using namespace std;
// Constants, Structs, Classes

//Prototypes

// Main Program
int main()
{
    string s1;                                      // Define a string
    string s2 = "Waldo Weber";                      // Define and initialize string
    string s3("Waldo Weber University");

    s1 = s3;                                        // Assignment
    cout << "S1 " << s1 << endl;
    s1 += s2;                                       // Concatenation

    cout << "2) S1 " << s1 << endl;
    cout << "S2 " << s2 << endl;
    cout << "S3 " << s3 << endl;

    // Swap values
    s1.swap(s2);
    cout << "3) S1 " << s1 << endl;
    cout << "S2 " << s2 << endl;
    cout << "S3 " << s3 << endl;

    return 0;
}
// Function Definitions