/*
Write a C++ program that reads in a positive integer N from the user,
then prints the first N terms of the Fibonacci sequence.
*/

#include " Fibonacci.h"
#include "../Basic.h"

static int input();
int input_N = 0;
Fibonacci object;
int main(){
    input_N = input();
    for(int x =input_N; x>0;x ++){
        std::cout<< Fibonacci::returnFib(x)<<" ";
    }
    cout<<endl;
    Basic :: stopper();
    return 0;
}

int input(){
    int input_Value =0;
    std :: cout<<"Please insert number"<<endl;
    while(true){
        std :: cin>> input_Value;
        std :: cout<<endl;
        if(cin.fail()){
            cout<<"Error, invalid input";
            cout<<"Please insert valid number";
        }
        else
        {
            break;
        }
    };
    return input_Value;
}