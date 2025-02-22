#include <stdio.h>
int main (){
    int num ,even = 0,odd = 0;
    int arry[num];
    scanf("%d",&num);
    for(int i =  0; i < num ; i++){
        scanf("%d",&arry[i]);
    }
  for(int i = 0 ; i < num ; i++){
       if (arry[i] % 2 == 0){
          even++;
       }
       else{
        odd++;

       }
  }
   printf("%d %d",even,odd);
}