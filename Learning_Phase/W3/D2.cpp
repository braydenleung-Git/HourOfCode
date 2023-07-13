/*
Write a C++ program that reads in a positive integer N from the user,
then prints the first N terms of the Fibonacci sequence.
*/

#include " Fibonacci.h"
#include "../Basic.h"

static void input();
int input_Value =0;
string random_value ="";
int main(){
    input();
    for(int x = 0; x<input_Value ;x ++){
        std::cout<< Fibonacci::returnFib(x)<<" ";
    }
    cout<<endl;
    Basic :: stopper();
    return 0;
}

void input(){
    std :: cout<<"Please insert number : ";
    while(true){
        std :: cin>> input_Value;
        if(cin.fail()){
            cout<<"Error, invalid input";
            cout<<"Please insert valid number";
        }
        else
        {
            break;
        }
    };
}