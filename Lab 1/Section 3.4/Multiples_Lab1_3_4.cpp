// MIT Course 6.096 Introduction to C++
// Lab 1 Problem 3.4 - Multiples of Numbers
// 
// Write a program that loops indefinitely. 
// In each iteration of the loop, read in an
// integer N (declared as int) that is inputted
// by a user, output N/5 if N is nonnegative and
// divisible by 5, and -1 otherwise. Use the ternary 
// operator (?:) to accomplish this. (Hint: the modulus
// operator may be useful.)
//
// 3.4.2
// Modify the code from 3.4.1 so that if the condition fails
// nothing is printed. Use an if and a continue command 
// (instead of the ternary operator) to accomplish this.
//
// 3.4.3
// Modify the code from 3.4.2 to let the user break out of the loop 
// by entering -1 or any negative number. Before the program
// exits, output the string "Goodbye!."

#include <iostream>
using namespace std;

int main(){
    int n;
    do
    {
        // Ternary operator: condition ? result1 : result2
        // if(n%5 == 0 && n>=0){
        //     cout << n/5;
        // }
        // else{
        //     cout << -1;
        // }
        cout << "Please input an integer N: ";
        cin >> n;

        cout << (int)((n%5==0 && n>=0) ? n/5 : -1);
        cout << "\n";


    } while (true);
    

}