#include<bits/stdc++.h>
using namespace std;

void swap (int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = *a;
}

void selectionsort(int arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        int min = i;
        for (int j = i+1; j < n; j++) {
            if(arr[i] > arr[j]) {
                min = j;
            }
        }
        if(min != i) 
            swap(arr[i], arr[min]);
    }
}
// TC: O(n^2)

void printarr(int arr[], int n) {
    for(int i = 0; i < n; i++)
        cout << arr[i];
    cout << endl;
}

int main() {
    int arr[] = {9,8,7,6,5,4,3,2,1};
    int n = sizeof(arr)/sizeof(int);
    printarr(arr,n);
    selectionsort(arr,n);
    printarr(arr,n);
}