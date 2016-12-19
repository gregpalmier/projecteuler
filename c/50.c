/* The prime 41, can be written as the sum of six consecutive primes:
 *
 * 41 = 2 + 3 + 5 + 7 + 11 + 13
 * This is the longest sum of consecutive primes that adds to a prime below one-hundred.
 *
 * The longest sum of consecutive primes below one-thousand that adds to a prime, contains 21 terms,
 * and is equal to 953.
 *
 * Which prime, below one-million, can be written as the sum of the most consecutive primes? */

/* test with 41 */
/* _consecutive primes_ */
/* passed the number one million.  find all primes under one million first, then try shit. */
#include<stdio.h>
#include<math.h>
#define MAX 100

int is_prime(double num){
  double k;
  int t = 0;
  for(k = 2; k < sqrt(num); ++k){
    if((num % k) == 0)
      t = 1;
  }
  return t;
}

int main(void){
  int j = 0;
  int k = 0;
  double i;
  /* store the primes */
  int primes[MAX];
  for(i = 2; i < MAX; ++i){
    /* is_prime? */
    if(is_prime(i)){
      ++j;
      primes[j] = i; }
    else { /* do nothing */ }
  }
  /* print out the primes */
  k = 0;
  while(k < MAX){
    printf("prime #: %d\n", primes[k]);
    ++k;
  }
  /* using the found primes, find consecutive additive primes */
}

