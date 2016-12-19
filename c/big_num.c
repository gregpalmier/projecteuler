#include<stdio.h>
#define MAX 500
int main(void){
  int a = 123;
  int b = 456;
  int i;
  char c[MAX] = a;
  for(i = 0; i < MAX; ++i){
    printf("digit: %d\n", c[i]);
  }
}
