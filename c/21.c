/* Let d(n) be defined as the sum of proper divisors of n (numbers less than n which divide evenly into n).
 * If d(a) = b and d(b) = a, where a ≠ b, then a and b are an amicable pair and each of a and b are called amicable numbers.
 * For example, the proper divisors of 220 are 1, 2, 4, 5, 10, 11, 20, 22, 44, 55 and 110; therefore d(220) = 284. The proper divisors of 284 are 1, 2, 4, 71 and 142; so d(284) = 220.
 * Evaluate the sum of all the amicable numbers under 10000. */
#include<stdio.h>
#include<math.h>
#define MAX 10000

int FactorSum(int num){
  int j;
  int sum = 0;
  for(j = 1; j < num; ++j){
    if(num%j == 0){
      sum += j;
    }
  }
  /* return factor sum */
  return sum;
}

int main(void){
  int i, l;
  int amicable_sum = 0;
  for(i = 1; i < MAX; ++i){
    l = FactorSum(i);
    /* do not count perfect numbers as amicable (e.g. 6, 28, 496 . . .) */
    if((FactorSum(l) == i) && (l != i)){
      printf("\n%d and %d are amicable.", i, l);
      amicable_sum += i;
    }
  }
  printf("\namicable sum: %d\n", amicable_sum);
}
