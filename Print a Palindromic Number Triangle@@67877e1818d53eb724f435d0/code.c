#include <stdio.h>
int main (){
    int n;
    scanf("%d",&n);
    for(int i = 1; i <= n; i++){
        for(int k =n-i; k > 0 ; k--){
            printf(" ");
        }
        for(int j = 1; j<= i; j++){
            printf("%d",j);
        }
        for(int j =i-1; j >0; j--){
            printf("%d",j);
        }
        printf("\n");
    }
}