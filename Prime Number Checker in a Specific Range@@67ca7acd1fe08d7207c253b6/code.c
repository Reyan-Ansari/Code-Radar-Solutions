#include <stdio.h> 
int printPrimeInRange(int a, int b){
    for(int i = a ; i <= b ; i++){
        int prime = 1 ;
        for(int j = 2 ; j < i; j++){
            if(i % j == 0){
                prime = 0;
                return 0 ;
            }
        }
        if(prime){
            printf("%d ",i);
        }
    }
}