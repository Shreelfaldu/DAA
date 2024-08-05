// #include <stdio.h>

// void merge(int[], int, int);
// void mergesort(int[], int, int, int);

// void main()
// {

//     int a[100], n;

//     printf("Enter The size of array : ");
//     scanf("%d", n);

//     for (int i = 0; i < n; i++)
//     {
//         printf("Enter The Elements of array[%d] : ", i + 1);
//         scanf("%d", a[i]);
//     }
//     merge(a, 0, n - 1);
// }

// void merge(int a[], int low, int high)
// {
//     int mid;
//     if (low < high)
//     {
//         mid = (low + high) / 2;
//         merge(a, low, mid);
//         merge(a, mid + 1, high);
//         mergesort(a, low, mid, high);
//     }
// }

// void mergesort(int a[], int low, int mid, int high)
// {
//     int i, j, k, b[100];
//     i = low;
//     j = mid + 1;
//     k = low;
//     while (i <= mid && j <= high)
//     {
//         if (a[i] < a[j])
//         {
//             b[k] = a[i];
//             i++;
//         }
//         else
//         {
//             b[k] = a[j];
//             j++;
//         }
//         k++;
//     } // ending while
//     if (i > mid)
//     {
//         while (j <= high)
//         {
//             b[k] = a[j];
//             j++;
//             k++;
//         }
//         else if (j > high)
//         {
//             while (i <= mid)
//             {
//                 b[k] = a[i];
//                 k++;
//                 i++;
//             }
//         }
//     }
// }
// }

#include <stdio.h>
#include <stdlib.h>

void merge(int[], int, int);
void mergesort(int[], int, int, int);
void mergeSort(int[], int, int);

void swap(int*, int*);
int partition(int[], int, int);
void quickSort(int[], int, int);

void printArray(int[], int);

int main() {
    int n, choice;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Choose sorting algorithm:\n");
    printf("1. Merge Sort\n");
    printf("2. Quick Sort\n");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Given array: ");
        printArray(arr, n);
        mergeSort(arr, 0, n - 1);
        printf("Sorted array using Merge Sort: ");
        printArray(arr, n);
    } else if (choice == 2) {
        printf("Given array: ");
        printArray(arr, n);
        quickSort(arr, 0, n - 1);
        printf("Sorted array using Quick Sort: ");
        printArray(arr, n);
    } else {
        printf("Invalid choice\n");
        return 1;
    }

    return 0;
}

void mergeSort(int a[], int low, int high) {
    if (low < high) {
        int mid = (low + high) / 2;
        mergeSort(a, low, mid);
        mergeSort(a, mid + 1, high);
        mergesort(a, low, mid, high);
    }
}

void mergesort(int a[], int low, int mid, int high) {
    int i, j, k, b[100];
    i = low;
    j = mid + 1;
    k = low;
    while (i <= mid && j <= high) {
        if (a[i] < a[j]) {
            b[k] = a[i];
            i++;
        } else {
            b[k] = a[j];
            j++;
        }
        k++;
    }
    while (i <= mid) {
        b[k] = a[i];
        k++;
        i++;
    }
    while (j <= high) {
        b[k] = a[j];
        k++;
        j++;
    }
    for (i = low; i <= high; i++) {
        a[i] = b[i];
    }
}

void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
