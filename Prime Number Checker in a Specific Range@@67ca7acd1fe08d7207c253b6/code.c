#include <stdio.h> 
int printPrimesInRange(int a, int b){
    for(int i = a ; i <= b ; i++){
        int prime = 1 ;
        for(int j = 2 ; j < i; j++){
            if(i % j == 0){
                prime = 0;
                break ;
            }
        }
        if(prime){
            printf("%d ",i);
        }
    }
}