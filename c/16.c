/*2^15 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.

What is the sum of the digits of the number 1000? */

/* int to string type to int */
#include<stdio.h>
#include<math.h>
#define EXP 15

int exp_sum(double j){
  char str[300];
  int i, k;
  int ans = 0;
  sprintf(str, "%f", j);
  for(i = 0; str[i] != '.'; ++i){
    printf("%d", (str[i] - 48));
    ans += (str[i] - 48);
  }
  return ans;
}

int main(void){
/* you thought you could handle numbers this big -- so handle it */
  double num;
  double exp = EXP;
  num = pow(2, exp);
  printf("exp: %f\n", num);
  printf("\nexponential sum: %d\n", exp_sum(num));
}
