#include<stdio.h>
int main(){
	int a=0;
	printf("Enter a Year: ");
	scanf("%d", &a);
	
	if((a % 400 == 0) || (a % 4 == 0 && a % 100 != 0)){
		printf("This year is a Leap Year.");
		
	}
	else{
		printf("This year is not a Leap year.");
		
	}
	return 0;
	
	
	
	
}
