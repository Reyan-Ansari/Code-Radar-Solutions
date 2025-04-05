#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n ; i++){
        scanf("%d",&arr[i]);
    }
   for(int i = 0; i < n ; i++){
        int count = 1 ;
        for(int j = i+1 ; j < n ; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(count > n/2){
            printf("%d",arr[i]);
            break;
        }
        else{
            printf("-1");
            break;
        }
   }
}