/* The following iterative sequence is defined for the set of positive integers:

n → n/2 (n is even)
  n → 3n + 1 (n is odd)

  Using the rule above and starting with 13, we generate the following sequence:

  13 → 40 → 20 → 10 → 5 → 16 → 8 → 4 → 2 → 1
  It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms. Although it has not been proved yet (Collatz Problem), it is thought that all starting numbers finish at 1.

  Which starting number, under one million, produces the longest chain?

  NOTE: Once the chain starts the terms are allowed to go above one million. */
#include<stdio.h>
#define MAX 1000000

int getLength(long num){
  int l = 0;
  printf("calculating length for %ld . . .", num);
  do {
    if((num % 2) == 0){
      /* even */
      num = (num / 2);
    }
    else{
      /* odd, presumably */
      num = ((num * 3) + 1);
    }
    ++l;
  } while ((num != 1) && (num != 0));
  printf("%d\n", l);
  return l;
}

int main(void){
  int len;
  long i;
  int longest = 0;
  int longest_num = 0;

  for(i = 0; i < MAX; ++i){
    len = getLength(i);
    if(len > longest ){
      longest = len;
      longest_num = i;
    }
  }
  printf("number: %d ", longest_num);
  printf("iterations: %d\n", longest);
}
