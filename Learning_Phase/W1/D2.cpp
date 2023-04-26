/*
Write a C++ program that prompts the user to enter 10 integers and stores them in an array. 
The program should then compute and output the sum of the even integers in the array.
*/

#include <iostream>

using namespace std;

int main(){
    int input;
    int array[10];
    for(int x=0; x<10;x++){
        cout << "Please insert number"<< x<<":";
        cin >> input;
        array[x] = input;
    }
    int sum;
    for(int x=0; x<10;x++){
        if(x ==0 || x%2 ==0)
        {
            sum+= array[x];
        }
    }
    cout << sum<<endl;
}
