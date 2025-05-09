#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr, int n){
    int min;
    for(int i = 0; i<n; i++){
      
        for(int j =i; j > 0 && (aar[j]< arr[j-1]); j--){
                    arr[j] = arr[j] + arr[j-1]; 
                    arr[]j-1 = arr[j] - arr[j-1]; 
                    arr[j] = arr[j] - arr[j-1]; 
        }
    }

}

int main(){
    int array[5] = {1,5,2,-1,6};
    int n = 5;
    insertionSort(array[n],n);
    for(int i= 0; i< n;i++){
        cout<< array[i]<< " ";
    }

}
