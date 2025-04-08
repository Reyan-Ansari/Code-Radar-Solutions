#include <stdio.h>
int main(){
    int n ;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i < n-1; i++){
        for(int j = i+1 ; j< n ; j++){
            if(arr[i]> arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp ;
            }
        }
    }
    if(arr[0] == arr[1] ){
        printf("%d",arr[2]);
    }
    else if(arr[0] < arr[1]){
        printf("%d",arr[1]);
    }  
    else if(arr[0] == arr[1] && arr[1] == arr[2]){
        printf("-1");
    }
    else{
        printf("-1");
    }
}