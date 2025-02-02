#include<bits/stdc++.h>
using namespace std;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void maxheapify(int arr[], int N, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < N && arr[left] > arr[largest])
        largest = left;
    
    if (right < N && arr[right] > arr[largest])
        largest = right;
    
    if (largest != i) {
        swap(&arr[i], &arr[largest]);
        maxheapify(arr, N, largest);
    }
}

void heapSort(int arr[], int N) {
    for(int i = N / 2 - 1; i >= 0; i--)
        maxheapify(arr, N, i);

    for (int i = N - 1; i >= 0; i--) {
        swap(&arr[0], &arr[i]);
        maxheapify(arr, i, 0);
    }
}
// TC: O(n) + O(nllogn)

void printArray(int arr[], int N) {
    for(int i = 0; i < N; i++) 
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {15, 5, 20, 1, 17, 10, 30};
    int N = sizeof(arr) / sizeof(arr[0]);

    heapSort(arr, N);
    printf("Sorted array is \n");
    printArray(arr, N);
}