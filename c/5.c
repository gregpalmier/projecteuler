/* 2520 is the smallest number that can be divided by each of the
 * numbers from 1 to 10 without any remainder.  What is the smallest
 * positive number that is evenly divisible by all of the numbers
 * from 1 to 20? */
#include<stdio.h>
#include<math.h>
int main(void){
  double upto = 20;
  int win = 0;
  double y = 0;
  double num = 0;
  while(!win){
    y = 1;
    ++num;
    while(y <= upto){
      if(fmod(num,y) != 0){
        break;
      }
      else if(y == upto)
        win = 1;
     ++y;
    }
    if(win)
      printf("%f\n", num);
  }
}
