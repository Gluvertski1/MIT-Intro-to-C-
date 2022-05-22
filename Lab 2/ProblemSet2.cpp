#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

// PS2 4.1
// int sum(const int a, const int b){
//     return a + b;
// }

// PS2 4.1
// double sum(const double a, const double b){
//     return a + b;
// }

// PS2 4.3
// int sum(const int a, const int b, const int c){
//     return a + b + c;
// }

// PS2 4.3
// int sum(const int a, const int b, const int c, const int d){
//     return a + b + c + d;
// }

// PS2 4.4
// The default arguments cannot be constants.
// int sum(const int a, const int b,  int c = 0, int d = 0){
//     return a + b + c + d;
// }

// PS2 4.5
// Credit for this snippet of code goes to MIT 6.096 Lecture 4 Notes: Arrays and Strings
// int sum(const int array[], const int length){
//     long sum = 0;
//     for(int i = 0; i < length; sum+= array[i++]);
//     return sum;
// }

// PS2 4.6
// int sum(const int array[], const int length){
//     if(length == 0){
//         return 0;
//     }
//     else{
//         return array[0] + sum(array + 1, length - 1);
//     }
// }

// PS2 4.6 Solution shows
// int sum(const int array[], const int length){
//     return length == 0 ? 0 : array[0] + sum(array[]+1, length-1);
// }

// ----------------------------------------------------------------------------------------------------------------------

// PS2 5.3
// double calc_pie(const int n)
// {
//     srand(time(0)); // Set the seed; time(0) returns the current time as the seed number.
//     unsigned count;
//     double pi_calc;

//     for(int i = 0; i < n; i++)
//     {
//         double x = rand()%100+1;
//         double y = rand()%100+1;
//         x = x/100; // to get between 0,1
//         y = y/100;

//         if(sqrt(x*x + y*y) < 1)
//         {
//             count++;
//             // cout << count << "_";
//         }
//     }

//     pi_calc = 16*((double)count/n)/4;
    
//     return pi_calc;
// }

// ----------------------------------------------------------------------------------------------------------------------

// PS2 6.1
// void printArray(const int array[], int i){
//     for(int k = 0; k < i; k++)
//     {
//         if(k == i-1){
//             cout << array[k];
//         }
//         else{
//             cout << array[k] << ", ";
//         }
//     } 
// }

// PS2 6.2
// void printReverse(const int array[], int i){
//     for(int k = i; k > 0; k--)
//     {
//         cout << array[k-1] << " ";
//     } 
// }

// PS2 6.3 -- I dont understand the question. Will come back later. 
// void transpose(const int input[][LENGTH], int output[][WIDTH]){
//     cout << input[][];
// }

// PS2 6.5 -- 6.2 but with ptr offset notation
// void printReverse(const int *pntr, int i){
//     pntr = pntr + i;
//     for(int k = i; k > 0; k--)
//     {
//         pntr--;
//         cout << *pntr << " ";
//     } 
// }

// ----------------------------------------------------------------------------------------------------------------------

// PS2 7.1
char string_length(char *){
    int length;

    


    return length;
}

int main(){
    // PS2 Section 4
    // int arr[8] = {6,118,9,4,2,11,88,1};
    // cout << sum(arr, 8) << "\n";

    // PS2 Section 5
    // int n = 5000000;
    // cout << calc_pie(n);

    // PS2 Section 6
    // int arr[8] = {6,118,9,4,2,11,88,1};
    // printArray(arr, 8);
    // printReverse(arr, 8);
    // void transpose(const int input[][LENGTH], int output[][WIDTH]);
    // const int *ptr = arr;
    // printReverse(ptr, 8);

    // PS2 Section 7

}