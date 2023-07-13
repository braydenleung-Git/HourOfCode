
/*
This is the fibonacci "class(i think)" which allows me to call it to find the
fibbonacci of a certain number based on input
*/

class Fibonacci {
    public:
    static int returnFib(int input);
};

int Fibonacci::returnFib(int input) {
    if (input <= 0) {
        return 0;
    } else if (input == 1) {
        return 1;
    } else {
        return returnFib(input - 1) + returnFib(input - 2);
    }
}
