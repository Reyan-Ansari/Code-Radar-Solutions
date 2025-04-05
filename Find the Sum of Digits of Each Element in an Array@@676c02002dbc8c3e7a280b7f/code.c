#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr1[n],arr2[n];
    for(int i = 0; i < n ; i++){
        scanf("%d",&arr1[i]);
    }
    for(int i = 0; i < n ; i++)[
        int sum  = 0;
        while(i > 0){
            int digit  = i % 10 ;
            sum = sum + digit ;
            i = i / 10 ;
        }
        arr2[i] = sum ;
    ]
    for(int i = 0; i < n ; i++){
        printf("%d ",arr[i]);
    }
}