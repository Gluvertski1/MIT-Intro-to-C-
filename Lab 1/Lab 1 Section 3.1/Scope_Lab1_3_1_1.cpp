// MIT Course 6.096 Introduction to C++
// Lab 1 Problem 3.1 - Scope
// For these questions, you are encouraged to use a computer 
// and to answer the following:
//
// Question: What happens if we declare the same name twice within
// a block, giving it two different meanings?
//
// Answer: This program does not compile. The error states:
// 'error: conflicting declaration 'char arg1'
// 'note: previous declaration as 'int arg1'
//
// Essentially, it seems as though the compiler is confused as to which
// arg1 to use for the 'cout' command. Therefor, it fails to compile.

#include <iostream>

using namespace std;

int main(){
    int arg1;
    arg1 = -1;
    int x, y, z;

    char myDouble = '5';
    char arg1 = 'A';

    cout << arg1 << "\n";
    return 0;
}
