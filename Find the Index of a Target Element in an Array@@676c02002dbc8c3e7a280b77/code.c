#include <stdio.h>
int main (){
    int n;
    scanf("%d",&n);
    int arr[n];
    for ( int i = 0 ; i <n ; i++){
        scanf("%d",&arr[i]) ;
         }
    int index ;
    scanf("%d",&index);
    for (int i = 0; i < n ; i++ ){
        if ( arr[i] == index){
            printf("%d",i);
            return 0;
        }
        printf("-1");
        break;
        
        
       
    }
    

}