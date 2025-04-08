#include <stdio.h>
int main(){
    int n,sum;
     scanf("%d",&n);
     int arr[n];
     for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
     }
    scanf("%d",&sum);
    for(int i  = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(arr[i] == 1 & arr[j] == 1 || arr[i] == 3 & arr[j]==3){
                printf("%d %d",arr[i],arr[j]);
                return 0;
            }
            else if(arr[i]+ arr[j] == sum){
                printf("%d %d\n",arr[i],arr[j]);
            }
        }
    }
}