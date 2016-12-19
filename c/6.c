/* The sum of the squares of the first ten natural numbers is,
    1^2 + 2^2 + ... + 10^2 = 385
   The square of the sum of the first ten natural numbers is,
    (1 + 2 + ... + 10)^2 = 55^2 = 3025
   Hence the difference between the sum of the squares of the first
   ten natural numbers and the square of the sum is 3025 − 385 = 2640.
   Find the difference between the sum of the squares of the first
   one hundred natural numbers and the square of the sum.*/
#include<stdio.h>
#include<math.h>
double sum_squares(double upto){
  double y = 0;
  double x = 0;
  while(y <= upto){
    x += pow(y,2);
    ++y;
  }
  return x;
}
double squares_sum(double upto){
  double x = 0;
  double y = 0;
  while(y <= upto){
    x += y;
    ++y;
  }
  x = pow(x,2);
  return x;
}
int main(void){
  double upto = 100;
  printf("%f\n", squares_sum(upto));
  printf("%f\n", sum_squares(upto));
  printf("%f\n", squares_sum(upto) - sum_squares(upto));
}
