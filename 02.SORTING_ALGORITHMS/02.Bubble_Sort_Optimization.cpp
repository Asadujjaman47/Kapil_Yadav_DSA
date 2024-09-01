#include<bits/stdc++.h>
using namespace std;

void bubblesort(int arr[], int n) {
    for(int i=0; i<n-1; i++) {
        bool flag = 0;
        for(int j=0; j<n-i-1; j++) {
            if(arr[j+1] < arr[j]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = 1;
            }
        }
        if(flag == 0) 
            break;
    }
}

void printarr(int arr[], int n) {
    for(int i=0; i<n; i++) 
        cout << arr[i];
    cout << endl;
}

int main() {
    int arr[] = {1,2,3,5,4};
    int n = sizeof(arr)/sizeof(int);
    bubblesort(arr,n);
    printarr(arr,n);
}