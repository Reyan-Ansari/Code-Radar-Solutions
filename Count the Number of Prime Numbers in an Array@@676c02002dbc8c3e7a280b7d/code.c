#include <stdio.h>
int main(){
    int n,prime = 1,count = 0;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n ; i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i < n ; i++){
        if(arr[i] == 2){
            count++;
        }
       for(int j = 2 ; j < arr[i]; j++){
           if(arr[i] % j == 0){
                 prime = 0;
           }
       }

    }
    if(prime == 1){
        count++;
    }
    printf("%d",count);

}