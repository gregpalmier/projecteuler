/* By listing the first six prime numbers: 2, 3, 5, 7, 11,
 * and 13, we can see that the 6th prime is 13.
 * What is the 10001st prime number? */
#include<stdio.h>
#include<math.h>
double is_prime(double num){
  double j = 1;
  double k = 2;
  while(k < num){
    if(fmod(num,k) == 0){
      /* not prime */
      j = 0;
      break;
    }
    ++k;
  }
  return j;
}
int main(void){
  double num = 1;
  int upto = 10001;
  double count = 1;
  while(count <= upto){
    ++num;
    /* now check if it's prime */
    if(is_prime(num)){
      printf("%f Is the %fth Prime\n", num,count);
      ++count;
    }
  }
}
