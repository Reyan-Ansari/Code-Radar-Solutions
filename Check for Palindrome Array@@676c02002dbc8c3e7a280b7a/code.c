#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr1[n],arr2[n];
    for(int i = 0; i < n ; i++){
         scanf("%d",&arr1[i]);
    }
    for(int i = n-1 ; i >=0 ; i--){
        arr2[n-i-1]  = arr1[i];
    }
    for(int i = 0; i < n ; i++){
        if(arr1[i] == arr2[i]){
            printf("YES");
            return 0;
        }
    }
    printf("NO");
}