#include <stdio.h>

void main() {

  int size, a[20], key, i, j;

  printf("Insertion Sort\n");

  printf("\nEnter array size: ");
  scanf("%d", &size);

  printf("\nEnter %d elements\n", size);
  for (i = 0; i < size; i++) {
    scanf("%d", &a[i]);
  }

  for (i = 1; i < size; i++) {
    key = a[i];
    j = i - 1;
    while (j >= 0 && a[j] > key) {
      a[j + 1] = a[j];
      j--;
    }
    a[j + 1] = key;
  }

  printf("\nSorted array is: ");
  for (j = 0; j < size; j++) {
    printf("%d ", a[j]);
  }
}