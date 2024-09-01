#include<bits/stdc++.h>
using namespace std;

void insertionsort(int arr[], int n) {
    for(int i=1; i<n; i++) {
        int temp = arr[i];
        int j = i-1;

        while(j>=0 && arr[j]>temp) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}
//TC:
    // O(N) {Base Case}
    // O(N) {Best Case}
    // O(n^2) {Worst Case}

void printarr(int arr[], int n) {
    for(int i=0; i<n; i++)
        cout << arr[i] << ", ";
    cout << endl;
}

int main() {
    // int arr[] = {9,8,7,6,5,4,3,2,1};
    int arr[] = {1,2,3,4,0,4,10,8,7};
    // int arr[] = {25,75,95,125,80,5,10};
    int n = sizeof(arr)/sizeof(int);
    printarr(arr,n);
    insertionsort(arr,n);
    printarr(arr,n);
}