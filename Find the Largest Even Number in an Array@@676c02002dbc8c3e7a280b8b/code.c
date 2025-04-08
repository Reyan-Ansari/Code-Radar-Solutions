#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n],even[20],index = 0;
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0;i < n; i++){
        if(arr[i] % 2 == 0){
            even[index++] = arr[i];
        }
    }
    int maxeven = even[0];
    for(int i =0 ; i < index ; i++){
        if(arr[i] > maxeven){
            maxeven = arr[i];
        }
    }
    printf("d",maxeven);

}