#include<bits/stdc++.h>
using namespace std;

void Merge(int arr[], int start, int mid, int end) {
    int i = start;
    int j = 0;
    int k = mid+1;
    int temp[end-start+1];
    while(i<=mid && k<=end) {
        if(arr[i] <= arr[k]) {
            temp[j] = arr[i];
            i++;
        }
        else {
            temp[j] = arr[k];
            k++;
        }
        j++;
    }

    while(i<=mid) {
        temp[j] = arr[i];
        j++;
        i++;
    }

    while(k<=end) {
        temp[j] = arr[k];
        k++;
        j++;
    }

    int h = start;
    for(int i=0; i < end-start+1; i++) {
        arr[h] = temp[i];
        h++;
    }
}

void Mergesort(int arr[], int start, int end) {
    if(start < end) {
        int mid = start + (end-start)/2;
        Mergesort(arr, start, mid);
        Mergesort(arr, mid+1, end);
        Merge(arr, start, mid, end);
    }
}
// TC: 
    // Outplace:  O(nlogn)
    // inplace: O(n^2)
// SC: O(n)


void printarr(int arr[], int n) {
    for(int i=0; i<n; i++) 
        cout << arr[i] << ", ";
    cout << endl;
}

int main() {
    int arr[] = {9,8,7,6,5,4,3,2,1};
    int n = sizeof(arr)/sizeof(int);
    printarr(arr, n);
    Mergesort(arr, 0, n-1);
    printarr(arr, n);
}