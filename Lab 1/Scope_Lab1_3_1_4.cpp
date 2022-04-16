// MIT Course 6.096 Introduction to C++
// Lab 1 Problem 3.4 - Scope
// For these questions, you are encouraged to use a computer 
// and to answer the following:
//
// Question: Suppose an identifier has two different declarations, one
// in an outer block and one in a nested inner block. If the name is 
// accessed within the outer block, but after the inner block, which
// declaration is used?
//
// Answer: The outer block declaration is used as the scope of arg1
// in the context of the 'cout' happens to be -1. Where as the arg1
// in the '{}' keep the arg1 = 'A.' independent. 
//
// 

#include <iostream>

using namespace std;

int main(){
    int arg1;
    arg1 = -1;
    {
        char arg1 = 'A';
    }
    cout << arg1 << "\n";
    return 0;
}