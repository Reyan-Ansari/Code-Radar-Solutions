#include <stdio.h>
    int main (){
        int num;
        scanf("%d",&num);
        int arry[num];
        for (int i= 0; i < num; i++){
            scanf("%d",&arry[i]);
        }
        for (int i = 0; i < num ; i++){
            if ( arry[i] <= arry[i+1]){
            printf("Sorted");
            break;
        }
        else{
            printf("Not Sorted");
        }
        }
    }
