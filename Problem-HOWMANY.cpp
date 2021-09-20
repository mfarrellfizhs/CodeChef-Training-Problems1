#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if(n <= 0){
    	printf("Put number between 0 and 1000000");
	}
	else if(n <= 9){
		printf("1");
	}
	else if(n <= 99){
		printf("2");
	}
	else if(n <= 999){
		printf("3");
	}
	else{
		printf("More than 3 digits");
	}
    return 0;
}
