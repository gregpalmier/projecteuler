/* A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
a^2 + b^2 = c^2

For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.
*/

#include<stdio.h>
#include<math.h>

int get_triplet(int num){
  double a, b, c, ans = 0;
  for(a = 1; a < num; ++a){
    for(b = 2; b < num; ++b){
      c = (pow(a,2.0) + pow(b,2.0));
      printf("c: %f\n", sqrt(c));
      if (a + b + sqrt(c) == 1000){
        printf("found! %f\n", sqrt(c));
        printf("%f, %f, %f\n", a,b,sqrt(c));
        ans = a * b * sqrt(c);
        printf("answer: %f\n", ans);
        return 0;
      }
    }
  }
  return 1;
}

int main(void){
  get_triplet(1000);
}
