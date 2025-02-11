#include <stdio.h>
int main() {
    	int a;
	scanf("%d",&a);
	if (a < 2){
	    printf("invalid number");
	}
	else{
	    for(int i = 2;i < a; i++){
	        if(a % i == 0){
	            printf("not");
	            return 0;
	        }
	    }
	    printf("yes it is");
	}

    return 0;
}