/* We shall say that an n-digit number is pandigital if it makes use of all the digits 1 to n exactly once. For example, 2143 is a 4-digit pandigital and is also prime.
 *
 * What is the largest n-digit pandigital prime that exists? */

#include<stdio.h>
#include<math.h>
int is_pan(int n){
    int m[10] = {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
    int index = 0;
    int this;
    while (n != 0){
        this = n % 10;
        if (this == 0) {
            return 0;
        }
        for (int k = 0; k <= index; k++){
            // printf("n: %d, this: %d, k: %d, m[k]: %d\n", n, this, k, m[k]);
            if (m[k] == this) {
                return 0;
            }
        }
        m[index] = this;
        index = index + 1;
        n = n / 10;
    }
    for (int k = 0; k <= index; k++) {
        if (m[k] > index)
        {
            return 0;
        }
    }
    return 1;
}

int is_prime(int num){
  if (num <= 1) return 0;
  else if (num == 2) return 1;
  else{
    int k = 2;
    while(k <= ceil(sqrt(num))){
      if((num % k) == 0){
        return 0;
      }
      ++k;
    }
    return 1;
  }
}

int main() {
    for (int i = 1; i < 987654321; i++){
        if (is_pan(i)) {
            if (is_prime(i)){
              printf("%d is pan and prime\n", i);
            }
        }
    }
}