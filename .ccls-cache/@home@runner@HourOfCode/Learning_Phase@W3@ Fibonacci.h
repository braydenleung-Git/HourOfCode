
/*
This is the fibonacci "class(i think)" which allows me to call it to find the
fibbonacci of a certain number based on input
*/

class Fibbonacci{
    int returnFib(int input);
};
int Fibbonacci::returnFib(int input) {
  // this is here because fibonacci number only works with positive integer
  if (input <= 0) {
    return 0;
  }
  return returnFib(input - 1) + returnFib(input - 2);
}
