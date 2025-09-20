#include<stdio.h>
int main(){
	int a=0;
	printf("Enter a Number: ");
	scanf("%d", &a);
	
	if(a % 3 == 0 && a % 5 == 0){
		printf("The Number is divisible by both 3 and 5");
		
	}
	else{
		printf("The Number is not divisible by both 3 and 5");
	}
	return 0;
}
