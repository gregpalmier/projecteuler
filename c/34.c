/*145 is a curious number, as 1! + 4! + 5! = 1 + 24 + 120 = 145.
Find the sum of all numbers which are equal to the sum of the factorial of their digits.
Note: as 1! = 1 and 2! = 2 are not sums they are not included. */

#include<stdio.h>
#include<math.h>
#include<string.h>

int factorial(int num){
 int i = 1;
 int ans = 1;
 if (num == 1)
   return 1;
 for(i = 1;i <= num; ++i){
   ans = ans * i;
 }
 return ans;
}

int sumeach(char num[]){
  int sum = 0;
  int i = 0;
  int len = strlen(num);
  printf("Char len is %d\n",len);
  for(i = 0;num[i] != '\0';++i){
    int ia = num[i] - '0';
    printf("Char int is %d\n",ia);
    sum += factorial(ia);
  }
  return sum;
}

int main(void){
  int num = 145;
  char str[80];
  sprintf(str, "Value of num = %d", num);
  printf("Char string is %d\n",sumeach(str));

  /* cast to char? */
  /* anything in the string lib? */
  /* if(factorial(num) == splitsum(num){ */
  /*   printf("Num %d is one of those numbers\n" */
  /* } */
}

