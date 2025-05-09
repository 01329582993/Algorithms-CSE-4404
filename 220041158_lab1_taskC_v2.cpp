#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr, int n){
    int min;
    for(int i = 0; i<n; i++){
        min = i;
        for(int j =i+1; j<n; j++){
                if(arr[j] < arr[min]){
                    min = j;
                    arr[j] = arr[j] + arr[min]; 
                    arr[min] = arr[j] - arr[min]; 
                    arr[j] = arr[j] - arr[min]; 
                }
        }
    }

}

int main(){
    int array[5] = {1,5,2,-1,6};
    int n = 5;
    selectionSort(array[n],n);
    for(int i= 0; i< n;i++){
        cout<< array[i]<< " ";
    }

}
