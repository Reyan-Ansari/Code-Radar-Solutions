#include <stdio.h>
int main(){
    int n,index = 0;
    scanf("%d",&n);
    int arr[n],product[20];
    for(int i = 0;i < n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i < n ; i++){
        for(int j = i+1 ; j < n; j++){
            product[index++]  = arr[i]*arr[j];
        }
    }
    int max = product[0];
    for(int i = 0; i < index ; i++){
        if (product[i] > max){
            max = product[i];
        }
    }
    printf("%d",max);
}