#include <stdio.h>

void main() {
  int min, a[20], temp, i, j, size, minIndex, minValue;

  printf("Selection Sort\n");

  printf("\nEnter array size: ");
  scanf("%d", &size);

  printf("\nEnter %d elements\n", size);
  for (i = 0; i < size; i++) {
    scanf("%d", &a[i]);
  }

  for (i = 0; i < size; i++) {
    minIndex = i;
    minValue = a[i];
    for (j = i + 1; j < size; j++) {
      if (a[j] < minValue) {
        minIndex = j;
        minValue = a[j];
      }
    }
    temp = a[minIndex];
    a[minIndex] = a[i];
    a[i] = temp;
  }

  printf("\nSorted array is: ");
  for (j = 0; j < size; j++) {
    printf("%d  ", a[j]);
  }
}