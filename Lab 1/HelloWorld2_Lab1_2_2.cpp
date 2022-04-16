// MIT Course 6.096 Introduction to C++
// Lab 1 Problem 2.2 - Hello World2
// Write a program that outputs "Hello World!" n times with a for loop, a while loop, a do-while loop.
// It does handle user input of negative numbers and floats. Does not handle non-number entries.

#include <iostream>
using namespace std;

const string hello = "Hello World!";

void for_loop_print(int &a){
    for (int i = 0; i<a; i++)
    {
        cout << hello << '\n';
        
    }
}

void while_loop_print(int &a){
    int i = 0;
    while(i < a){
        cout << hello << '\n';
        i++;
    }
}

void do_while_print(int &a){
    int i = 0;
    do
    {
        cout << hello << '\n';
        i++;
    } while (i<a);
    
} 

int main(){
    int n;
    do
    {
        cout << "Please enter the number of times to print 'Hello World!' on the screen \n";
        cout << "Number: ";
        cin >> n;

    } while (n < 0);

    cout << "With a for-loop:\n";
    for_loop_print(n);

    cout << '\n';
    cout << "With a while-loop:\n";
    while_loop_print(n);

    cout << '\n';
    cout << "With a do-while loop:\n";
    do_while_print(n);

    return 0;
}