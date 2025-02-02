#include <stdio.h>
    int main (){
    int a,b;
    scanf("%d %d",&a,&b);
    int c = a & (1 << b);
    int d = ~c;
    printf("%d",d);
    return 0;
}