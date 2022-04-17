// MIT Course 6.096 Introduction to C++
// Lab 1 Problem 3.2 - Basic Statistics
// 
// Given a list of N integers, finds its mean (as a double),
// maximum value, minimum value, and range. Your program will 
// first ask for N, the number of integers in the list, which
// the user will input. Then the user will input more numbers.


#include <iostream>
#include <cmath> // can use fmin, fmax
 
using namespace std;

int main(){
    int n, max, min;
    int i = 0;
    double mean, num, rangeN;
    
    cout << "Please enter the length of the list of integers (N) to calculate mean, max, min, range." << endl;
    
    // Loop until complete // clean this up.
    while(true)
    {
        cout << "Please enter a number: ";
        cin >> n;
        if(n >= 0 )
        {
            break;
        }
    }
    
    cout << "Please enter the numbers in the list: \n";
    while(i < n)
    {
        cin >> num;
        mean += num;

        min = fmin(min, num);
        max = fmax(max, num);

        i++;
    }

    rangeN = max - min;
    mean = mean/n;
    
    cout << "Mean: " << mean << endl;
    cout << "Max: "  << max  << endl;
    cout << "Min: "  << min  << endl;
    cout << "Range: "  << rangeN  << endl;
}