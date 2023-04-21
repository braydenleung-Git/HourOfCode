/*
Write a program that simulates a simple calculator.
The program should ask the user to input two numbers and an operator (either +, -, *, or /), 
and then perform the appropriate calculation and output the result. 
If the user inputs an invalid operator, the program should output an error message and ask the user to try again.

To do this, you can use control structures like if statements and loops to validate user input and perform the calculation. 
You can also use operators like +, -, *, and / to perform the calculations. 
You might also want to consider using functions to organize your code and make it more modular. 
And if you want to challenge yourself, you could even create a Calculator class to encapsulate the calculator logic and make your code more object-oriented.
*/
//Note to self, there was a infinite loop
//change it to number based operator, and redo validation method or remove it
#include <iostream>
using namespace std;
int val1 = 0;
int val2 = 0;
string op = NULL;
int sign = 1;
int ans = 0;
void input();
bool validation();
int main(){
    input();
    switch(op){
        case "+":
            cout<<val1 + val2;
            break;
        case "-":
            cout<<val1 - val2;
            break;
        case "*":
            cout<<val1*val2;
            break;
        case "/":
            cout<<val1/val2;
            break;
    }
    return 0;
}

void input(){
    cout<<"Please insert number 1";
    cin>>val1;
    while(sign != 0)
    {
        if(validation()){
            cout<<"Please insert number 1";
            cin>>val1;
        }
        else{
            break;
        }
    }
    sign = 1;
    cout<<"Please insert number 2";
    cin>>val2;
    while(sign != 0)
    {
        if(validation()){
            cout<<"Please insert number 2";
            cin>>val2;
        }
        else{
            break;
        }
    }
    sign =1;
    cout<<"Please insert operator";
    cin>>op;
    while(sign != 0)
    {
        if(validation()|| op != "+"|| op != "-" || op != "*" || op != "/" ){
            cout<<"Please insert operator";
            cin>>op;
        }
        else{
            break;
        }
    }
    sign =1;
}

bool validation(){
    if(cin.fail()){
        cout<<"error Invalid input";
        sign = 0;
        return true;
    }
    return false;
}

