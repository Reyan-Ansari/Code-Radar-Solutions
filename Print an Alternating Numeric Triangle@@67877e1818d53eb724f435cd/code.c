#include <stdio.h>
int main (){
    int n ;
    scanf("%d",&n);
    for (int i = 1; i <= n ; i++){
        int alternate = i % 2;
        for(int j = 1; j<= i ; j++){
            printf("%d ",j);
            alternate = 1 -alternate ;
        }
        printf("\n");
    }
}