#include <stdio.h>
int main(){
    int n ,k,count = 0;
    scanf("%d %d",&n,&k);
    for(int i = ; i < n ; i++){
        scanf("%d",&arr[i]);
    }
    for(int i = ; i < n ; i++){
        if(arr[i] > k){
            count++;
        }
    }
    printf("%d",count);
}