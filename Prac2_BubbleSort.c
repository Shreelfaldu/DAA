#include <stdio.h>

void main() {

  int size, a[20], key, i, j, temp;

  printf("Bubble Sort\n");

  printf("Enter array size: ");
  scanf("%d", &size);

  printf("Enter %d elements\n", size);
  for (i = 0; i < size; i++) {
    scanf("%d", &a[i]);
  }

  for (i = 0; i < size; i++) {
    for (j = 0; j < size-1-i; j++) {
      if (a[j] > a[j + 1]) {
        temp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = temp;
      }
    }
  }

  printf("\nSorted Array is: ");
  for (i = 0; i < size; i++) {
    printf("%d ", a[i]);
  }
}