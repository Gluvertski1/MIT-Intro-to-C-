// MIT Course 6.096 Introduction to C++
// Lab 1 Problem 3.5 - Scope
// For these questions, you are encouraged to use a computer 
// and to answer the following:
//
// Question: Below is a sample program that will not compile.
// Why not? By moving which line can we get the code to compile?
//
// Answer: If you move the '#include <iostream>' declaration to 
//  above the 'cout' line then the program should compile. Note, 
// that it is common practice to provide this at the top of the file.

using namespace std;

int main(){

    cout << "Hello, World! \n";
    return 0;
}

#include <iostream>