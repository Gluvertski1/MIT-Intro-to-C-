// MIT Course 6.096 Introduction to C++
// Lab 1 Problem 3.3 - Scope
// For these questions, you are encouraged to use a computer 
// and to answer the following:
//
// Question: Suppose an identifier has two different declarations, 
// one in an outer block and one in a nested inner block. 
// If the name is accessed within the inner block, which declaration
// is used?

// Answer: It uses the most recent (or last) declaration 'A,' given 
// that the scope is relative to inside the '{}.'
//
// 

#include <iostream>

using namespace std;

int main(){
    int arg1;
    arg1 = -1;
    {
    char arg1 = 'A';
    cout << arg1 << "\n";
    }
    return 0;
}