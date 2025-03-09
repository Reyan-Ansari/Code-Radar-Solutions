#include <stdio.h>
void bubblesort(int arr[],int n){
    for (int i = 0; i < n-1; i++){
        for (int j = i+1 ; j < n ; j++){
            if ( arr[i] > arr[j]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp; 
            }
        }
    }
    
}
void printarray(int arr[],int n){
    for(int i = 0 ; i < n ; i++){
        printf("%d ",arr[i]);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n ; i++){
        scanf("%d",&arr[i]);
    }
    bubblesort(arr,n);
    printarray(arr,n);	
    return 0;
}