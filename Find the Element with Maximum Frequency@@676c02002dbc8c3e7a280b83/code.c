#include <stdio.h>
int main(){
    int n,index = 0; 
    scanf("%d",&n);
    int arr[n],visit[n],freq[10];
    for(int i = 0; i < n ; i++){
        scanf("%d",&arr[i]);
        visit[i] = 0;
    }
    for(int i = 0; i < n ; i++){
        int count = 1 ;
        if(visit[i] == 1){
             continue;
        }
        for(int j = i+1 ; j < n ;  j++){
            if(arr[i] == arr[j] ){
                count++;
                visit[j] = 1;
            }
        }
         freq[index++] = count ;
    }
    int max = freq[0],element = arr[0];
    for(int i = 0; i < index ; i++){
        if(freq[i] > max){
            max = freq[i];
            element = arr[i];
        }
    }
    primtf("%d",element);
}