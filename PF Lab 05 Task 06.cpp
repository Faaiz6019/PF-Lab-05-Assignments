#include<stdio.h>
int main(){
	int a=0;
	int b=0;
	int max;
	
	printf("Enter First Number: ");
	scanf("%d", &a);
	printf("Enter Second Number: ");
	scanf("%d", &b);
	
	max = (a > b) ? a : b;
	
	printf("The Maximum Number is: %d\n", max);
	
	return 0;
}
