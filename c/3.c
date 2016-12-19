/* The prime factors of 13195 are 5, 7, 13 and 29.
 * What is the largest prime factor of the number 600851475143 ? */
/* this prints them all out, then the highest one again */
/* added to that, compile with the -lm parameters */
/* e.g. gcc 3.c -lm */
#include <stdio.h>
#include <math.h>
int is_prime(double factor){
  int a = 1;
  double num = factor - 1;
  while(num > 1){
    if(fmod(factor,num) == 0){
      /* not prime */
      a = 0;
      printf("%f\n", num);
      break;
    }
    --num;
  }
  return a;
}
int main(void){
  double largenum = 600851475143;
  double x, y = 0;
  /* find a factor counting down */
  /* the prime number can't be higher than sqrt(largenum) cuz math */
  x = modf(sqrt(largenum), &y);
  while(y > 2){
    /* is it even a factor, bro? */
    if (fmod(largenum,y) == 0){
      /* now check if it's prime */
      if(is_prime(y)){
        break;
      }
    }
    --y;
  }
  printf("%f\n", y);
}
