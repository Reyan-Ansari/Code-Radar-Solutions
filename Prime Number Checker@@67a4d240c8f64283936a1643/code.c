#include <stdio.h>
int isPrime(int num){
    for(int i = 2 ; i < num ; i++){
        if( num == 1)
         return 0 ;
        else if(num % 2 == 0){
            return 0 ;
        }
        
        
    }
    return 1;
}