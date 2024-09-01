#include<bits/stdc++.h>
using namespace std;

void bubblesort(int arr[], int n) {
    for(int i=0; i<n-1; i++) {
        for(int j=0; j<n-i-1; j++) {
            if(arr[j]>arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
// TC: O(n^2)
// SC: O(1)

void printarr(int arr[], int n) {
    for(int i=0; i<n; i++) 
        cout << arr[i];
    cout << endl;
}

int main() {
    int arr[] = {9,8,6,5,4,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    printarr(arr,n);
    bubblesort(arr,n);
    printarr(arr,n);
}