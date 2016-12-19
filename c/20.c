/* n! means n × (n − 1) × ... × 3 × 2 × 1
For example, 10! = 10 × 9 × ... × 3 × 2 × 1 = 3628800,
and the sum of the digits in the number 10! is 3 + 6 + 2 + 8 + 8 + 0 + 0 = 27.
Find the sum of the digits in the number 100! */

/* because of the data types, you need to do multiplication like it's "by
 * hand" where you shift over lines one after another */
#include<stdio.h>
#define NUM 100

int factorial_sum(int j){
  char str[300];
  double num = j;
  int i, k;
  int ans = 0;
  for(k = 1; k < j; ++k){
    num = num * k;
  }
  printf("Factorial: %f\n", num);
  sprintf(str, "%f", num);
  for(i = 0; str[i] != '.'; ++i){
    printf("%d", (str[i] - 48));
    ans += (str[i] - 48);
  }
  return ans;
}

int main(void){
  printf("\nanswer: %d\n", factorial_sum(NUM));
}
