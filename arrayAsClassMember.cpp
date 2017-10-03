// File: arrayAsClassMember
// Created by Carson Tyler on 10/3/2017 for CS1410.
// Copyright ©2017 WSU
#include <iostream>
using namespace std;
// Constants, Structs, Classes
const int MAX = 10;

class Stack
{
private:
    int st[MAX];                        // Stack: array of ints
    int top;                            // Number of top of stack

public:
    //Constructor
    Stack(){top = -1;}

    void push(int var)                  // Put member on the stack
    {
        st[++top] = var;                // if st[top++], initialize top = 0
    }

    int pop()                           // Take number off of stack
    {
        return st[top--];
    }
};

//Prototypes

// Main Program
int main()
{
    Stack s1;

    s1.push(11);
    s1.push(44);
    cout << " 1. " << s1.pop() << endl;  // LAST IN FIRST OUT LIFO
    cout << " 2. " << s1.pop() << endl;

    s1.push(123);
    s1.push(54);
    s1.push(65);
    s1.push(154);

    cout << " 3. " << s1.pop() << endl;
    cout << " 4. " << s1.pop() << endl;
    cout << " 5. " << s1.pop() << endl;
    cout << " 6. " << s1.pop() << endl;

    return 0;
}
// Function Definitions