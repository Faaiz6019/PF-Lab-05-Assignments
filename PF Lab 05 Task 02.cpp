#include<stdio.h>
int main(){
	int a=0;
	printf("Enter Your Age: ");
	scanf("%d", &a);
	
	if(a >= 1 && a <= 10){
		printf("You are a Child");
	}
	else if(a >= 11 && a <= 19){
		printf("You are a teenager");
	}
	else if(a >= 20 && a <= 60){
		printf("You are an Adult");
	}
	else{
		printf("You are a Senior");
	}
	return 0;
	
}
