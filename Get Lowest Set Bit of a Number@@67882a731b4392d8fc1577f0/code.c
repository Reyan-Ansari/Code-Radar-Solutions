#include <stdio.h>
    int main (){
    int a;
    scanf("%d",&a);
    int c = a & (~a + 1);
    printf("%d",c);
    
    return 0;
}