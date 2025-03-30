#include <stdio.h>
int kthSmallest(int arr[], int n,int k){
    for(int i = 0; i < n-1 ; i++){
        for(int j = i+1 ; j < n ; j++){
            if(arr[i]> arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp ;
            }
        }
    }
    
    if(k > n){
        return -1 ;
    }
    else{
        return arr[k-1];
    }
}
