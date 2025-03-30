#include <stdio.h>
int findOccurence(int arr[], int n, int target ,char mode){
 switch(mode){
    case 'F' : 
    for(int i = 0 ; i < n ; i++){
        if(arr[i] == target){
            return i ;
            
        }
    }
    break;
    case 'L' :
    for(int i = n-1 ; i >=0 ; i--){
        if(arr[i] == target){
            return i ;
            
        }
    }
    break;
    default : 
    return -1 ;
 }
}