#include <stdio.h>
int main (){
    int num;
    scanf("%d",&num);
    int arr[num];
    for (int i = 0; i < num ; i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i < num - 1 ; i++){
        for ( int j = i+1; j < num ; j++){
            if (arr[j] < arr[i]){
                  int temp = arr[j];
                  arr[j] = arr[i];
                  arr[i] = temp;
            }
        }
    }
   printf("%d %d",arr[0],arr[num-1]);



    return 0 ;
}