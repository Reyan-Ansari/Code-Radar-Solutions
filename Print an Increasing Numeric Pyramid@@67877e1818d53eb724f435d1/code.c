#include <stdio.h>
int main{
  int a;
  scanf("%d",&a);
  for (int i = 1; i<= a; i++){
     for (int k = 1; i<= a-1; i++){
         printf(" ");
  }
     for (int j = 1; j<= i; j++){
       printf("%d",i);
  }
  }


  return 0;
}