#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int visit[n];
    for(int i = 0;i < n ; i++){
        scanf("%d",&arr[i]);
        visit[i] = 0 ;
    }
    for(int i = 0; i < n ; i++){
        int count = 1;
        if(visit[i] == 1){
                continue;
            }
        else{
            for(int j = i+1; j < n ; j++){
            if(arr[i] == arr[j]){
                count++;
                visit[j] = 1;
            }
        }
        }
        printf("%d %d\n",i,arr[i]);
    }

}