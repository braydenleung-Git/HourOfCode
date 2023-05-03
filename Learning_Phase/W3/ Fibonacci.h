
/*
This is the fibonacci "class(i think)" which allows me to call it to find the fibbonacci of a certain number based on input
*/
#include <iostream>

using namespace std;

class Fibbonacci(){
    
}
int returnFib(int input){
    //this is here because fibonacci number only works with positive integer 
    if( input <= 0){
        return 0;
    }
    return fibonacci(input-1) + fibonacci(input -2);
}
