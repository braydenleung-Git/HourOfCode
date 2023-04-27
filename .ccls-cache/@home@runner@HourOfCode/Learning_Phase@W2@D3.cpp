/*
implementing a function to calculate the nth Fibonacci number. 
    This would involve recursive function calls and could be a good challenge to build upon your current skills.
*/

#include <iostream>

using namespace std;

int fibonacci(int input);
int main(){
    int input=0;
    cout<<"Please input number"<<endl;
    cin >> input;
    while(true){
        if(cin.fail()){
        cout<< "Error, invalid input"<<endl<<"Please       input number"<<endl;
            cin >> input;
        }
        else {
            break;
        }
    }
    cout<<fibonacci(input)<<endl;    
}

int fibonacci(int input){
    //this is here because fibonacci number only works with positive integer 
    if( input <= 0){
        return 0;
    }
    return fibonacci(input-1) + fibonacci(input -2);
}