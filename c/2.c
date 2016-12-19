/* Each new term in the Fibonacci sequence is generated
 * by adding the previous two terms. By starting with 1 and 2,
 * the first 10 terms will be: 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
 * By considering the terms in the Fibonacci sequence whose values
 * do not exceed four million, find the sum of the even-valued terms.*/
#include<stdio.h>
main(){
  int answer = 0;
  int last = 0;
  int pentultimate = 1;
  int fib = 0;
  while(fib < 4000000){
    /* find fibonacci numbers */
    fib = last + pentultimate;
    pentultimate = last;
    last = fib;
    if(fib % 2 == 0){
      answer += fib;
    }
  }
  printf("%i", answer);
}
