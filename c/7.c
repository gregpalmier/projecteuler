/* By listing the first six prime numbers: 2, 3, 5, 7, 11,
 * and 13, we can see that the 6th prime is 13.
 * What is the 10001st prime number? */
/* 104743 */
#include<stdio.h>
#include<math.h>
#define UPTO 10001
int is_prime(int num){
  if (num <= 1) return 0;
  else if (num == 2) return 1;
  else{
    int k = 2; /* start at 2 */
    while(k <= ceil(sqrt(num))){
      if((num % k) == 0){
        return 0;
      }
      ++k;
    }
    return 1;
  }
}

int main(void){
  int i = 0, count = 0, num = 0;
  while(count < UPTO){
    ++num;
    if(is_prime(num)){
      ++count;
    }
  }
  printf("%d is the %dth Prime\n",num,count);
  ++i;
}
