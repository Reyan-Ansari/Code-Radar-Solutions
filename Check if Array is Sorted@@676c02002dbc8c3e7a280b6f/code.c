#include <stdio.h>
    int main (){
        int num;
        scanf("%d",&num);
        int arry[num];
        for (int i= 0; i < num; i++){
            scanf("%d",&arry[i]);
        }
        if ( arry[i] <= arry[i+1]){
            printf("Sorted");
        }
        else{
            printf("Not Sorted");
        }
    }
