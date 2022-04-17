// MIT Course 6.096 Introduction to C++
// Lab 1 Problem 3.3 - Prime Numbers
// 
// Write a program to read a number N from the user
// and then find the first N primes. A prime number is
// a number that only has two divisors, one and itself.


#include <iostream>
#include <cctype>

using namespace std;

// int calc_prime(int a, int n){
//     int rem;

//     if(n == 2){
//         return 2;
//     }
//     else{
//         if(a != n){
//             return calc_prime(a + 1, n);
//         }        
//     }

//     for(int i = 2; i<n; i++){
//         rem = i%;  
//     }
// }

int main(){
    int n, out;
    int divisor = 2;

    do
    {
        cout << "Please enter a number (N-primes will be output): ";
        cin >> n;
        // checking to make sure the user didn't enter a letter, negative number, 
        // an even number, or 0 and 1. 
        if(isalpha(n) && n>0){
            cout << "This is not a number or a positive integer! Good Bye.";
            break;
        }
        else{
            for(int i = 0; i<n; i++){
                out = i/divisor;
                if(i%divisor == 1){
                    break;
                }
                else{
                    cout << divisor;
                }
                divisor++;
            }
        }
    } while (true);
}