/*
if first element as pivot:
    1. i = p = first element 
    2. j = second element 
    3. if(a[j] <= p), then i++ and swap(a[j], a[i])
    4. swap(a[i], first_element)
*/

#include<bits/stdc++.h>
using namespace std;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int start, int end) {
    int pivot = arr[start]; // take first element as pivot
    int i = start;
    for (int j = start+1; j <= end; j++) {
        if(arr[j] <= pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i], &arr[start]);
    return i;
}

void Quicksort(int arr[], int start, int end) {
    if(start >= end) 
        return;
    
    int p = partition(arr, start, end); // pivot element
    Quicksort(arr, start, p-1); // left sort
    Quicksort(arr, p+1, end); // right sort
}
// TC:
    // T(n)

void printarr(int arr[], int n) {
    for(int i = 0; i < n; i++) 
        cout << arr[i] << ", ";
    cout << "\n";
}

int main() {
    int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int n = sizeof(arr)/sizeof(int);
    printarr(arr, n);
    Quicksort(arr, 0, n-1);
    printarr(arr, n);
}