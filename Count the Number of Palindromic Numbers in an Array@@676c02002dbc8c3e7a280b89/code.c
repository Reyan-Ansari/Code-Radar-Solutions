#include <stdio.h>
int main(){
    int n,count = 0;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n ; i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i < n ; i++){
        int duplicate = arr[i];
        int reverse = 0;
        while(duplicate > 0){
            int digit = duplicate % 10 ;
            reverse = reverse*10 + digit ;
            duplicate  = duplicate / 10 ;
        }
        if(arr[i] == reverse){
            count++;
        }
        
    }
    printf("%d",count);
}