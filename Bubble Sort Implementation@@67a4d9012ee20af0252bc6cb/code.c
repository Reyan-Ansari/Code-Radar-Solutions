#include <stdio.h>
int main() {
    	int a;
	while(scanf("%d",&a) == 1){}
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