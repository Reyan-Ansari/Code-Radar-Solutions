#include <stdio.h>
int main (){
int cost,sell;
scanf("%d",&cost,&sell);
if ( sell > cost){
    printf("Profit");
}
else if (sell < cost){
       printf("Loss");
}
else{
    printf("No Loss");
}

    return 0;
}