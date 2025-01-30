#include <stdio.h>
    int main (){
     scanf("%d",&a);
     if ( a & (1 << 31)){
        printf("Set");
     }
     else{
        printf("Not Set");
     }
    return 0;
}