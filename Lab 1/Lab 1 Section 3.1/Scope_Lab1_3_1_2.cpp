// MIT Course 6.096 Introduction to C++
// Lab 1 Problem 3.2 - Scope
// For these questions, you are encouraged to use a computer 
// and to answer the following:
//
// Question: What happens if we declare an identifier in a block, 
// and then redeclare that same identifier in a block nested within 
// that block?
//
// Answer: The program did compile however, with warnings. The warning states:
// 'warning: unknown escape sequence: '\040'. To elaborate, according the 
// lecture notes, the separators '{}' should seperate the internal code from 
// the rest of the code. However, separators are typically used for function
// declarations, and conditional declarations, meaning that in this case 
// neither of those are occuring. Therefor, we have the same scope issue as 
// the previous problem. 

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