/*
    implementing a function in C++ that calculates the factorial of a given integer.
    Side task(unfinished) :
    implementing a function to calculate the nth Fibonacci number. 
    This would involve recursive function calls and could be a good challenge to build upon your current skills.
*/
#include <iostream>

int factorial(int input);


using namespace std;
int main(){
    int input =0;
    cout<<"Please insert number."<<endl;
    cin>> input;
    cout<<"The Factorial of "<<input<<" is "<<factorial(input)<<endl;
return 0;
}


int factorial(int input){
    int sum = input;
    for(int x=input-1; x>0; x--){
        sum *= x;
    }
    return sum;
}