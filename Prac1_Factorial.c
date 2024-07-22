#include <stdio.h>

void main() {
  int num, factorial = 1;
  printf("Enter a number: ");
  scanf("%d", &num);
  for (int i = 1; i <= num; i++) {
    factorial = factorial * i;
  }
  printf("Factorial of %d is %d", num, factorial);
}