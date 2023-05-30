/*
Write a C++ program that reads in a positive integer N from the user,
then prints the first N terms of the Fibonacci sequence.
*/
#include <iostream>
#include "./ Fibonacci.h"
#include "../Basic.h"
using namespace std; 

int main(){
    int input = 0;
    cout<<"Please insert the number"<<endl;
    while(true){
        cin>>input;
        cout<<endl;
        if(cin.fail()){
            cout<<"Error, invalid input";
            cout<<"Please insert valid number";
        }
        else
        {
            break;
        }
    };
    for(int x =0; x<=input;x ++){
        cout<< Fibonacci::returnFib(x)<<",";
    }
    cout<<endl;

    Basic::stopper();
    return 0;
    
}
