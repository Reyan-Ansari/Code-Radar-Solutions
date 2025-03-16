#include <stdio.h>
int main (){
    int n ;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i< n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i < n-1 ; i++){
        for (int j = i+1 ; j < n ; j++){
            if (arr[i] > arr[j]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
           
        }
    }
   if (arr[n-2] == arr[n-1]){
     printf("-1");
   }
   else if (arr[n-1] == 7){
     printf("-1");
   }
   else{
     printf("%d",arr[n-2]);
   }
}