// MIT Course 6.096 Introduction to C++
// Lab 1 Problem 3.3 - Prime Numbers
// 
// Write a program to read a number N from the user
// and then find the first N primes. A prime number is
// a number that only has two divisors, one and itself.


#include <iostream>
#include <cctype>

using namespace std;

int calc_prime(int n){
    int i, count;
    int primity;
    for(i=1; i < n; i++)
    {
        primity = n%i;
        if(primity > 0)
        {
            count++;
        }
        if(count > 2)
        {
            break;
            return false;
        }
    }
    return true;
}

int main(){
    
    int n, count;
    bool is_prime;
    cout << "Please enter a number (N-primes will be output): ";
    cin >> n;
    // checking to make sure the user didn't enter a letter, negative number, 
    // an even number, or 0 and 1. 
    if(isalpha(n) && n>0){
        cout << "This is not a number or a positive integer! Good Bye.";
    }
    else{    
        while(count < n)
        {
            is_prime = calc_prime(count);
            if(count == true)
            {
                cout << count << ',';

            }
        }   
        
    }
}