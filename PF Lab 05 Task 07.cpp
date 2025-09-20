#include<stdio.h>
int main(){
	int a=0;
	printf("How do you rate the movie 'The Lion King' (1-5): ");
	scanf("%d", &a);
	
	if(a == 1){
		printf("Terrible");
	}
	else if(a == 2){
		printf("Poor");
	}
	else if(a == 3){
		printf("Average");
	}
	else if(a == 4){
		printf("Good");
	}
	else if(a == 5){
		printf("Excellent");
	}
	else{
		printf("No Comment...");
	}
	return 0;
}
