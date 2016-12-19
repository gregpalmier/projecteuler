/* A palindromic number reads the same both ways. The largest palindrome
 * made from the product of two 2-digit numbers is 9009 = 91 × 99.
 * Find the largest palindrome made from the product of two 3-digit numbers.*/
#include <stdio.h>
#include <math.h>
/* determine whether or not the product of these numbers
 * is palnindromic */
int is_palindromic(int x, int y){
}
int main(void){
  int a = 999;
  int b = 999;
  for(a = 999;a => 100; --a){
    for(b = 999;b => 100; --b){
      if(is_palindromic(a,b) == 1)
        /* keep track of the highest palindromic numbers */
        break;
    }
  }
}
