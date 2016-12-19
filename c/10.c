/* The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
 * Find the sum of all the primes below two million.*/
#include<stdio.h>
#include<math.h>
#define MAX 2000000

int is_prime(double num){
  int a = 0; /* is_prime flag to return */
  int k = 2; /* iterator */
  double y, test;
  while(k < sqrt(num)){
    if(fmod(num,k) == 0){
      a = 1;
      break;
    }
    ++k;
  }
  return a;
}
int main(void){
  double j;
  double ans = 0;
  for(j = 2; j < MAX; ++j){
    if(!is_prime(j)){
      printf("prime found: %f\n", j);
      ans += j;
    }
  }
  printf("answer: %f\n", ans);
}
