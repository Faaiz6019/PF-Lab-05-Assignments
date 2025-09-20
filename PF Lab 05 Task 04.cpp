#include<stdio.h>
int main(){
	int amount;
	int limit = 500;
	
	printf("Enter the Amount to withdraw: ");
	scanf("%d", &amount);
	
	if(amount <= limit && amount % 20 == 0){
		printf("Withdrawal Approved");
	}
	else{
		printf("Withdrawal Denied");
		
	}
	return 0;
}
