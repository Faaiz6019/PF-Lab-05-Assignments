#include<stdio.h>
int main(){
	char a;
	printf("Enter a color (R, Y, G): ");
	scanf("%c", &a);
	if(a=='R'){
		printf("Stop");
	}
	else if(a=='Y'){
		printf("Caution");
	}
	else if(a=='G'){
		printf("Go");
	}
	else{
		printf("Choose from the given options...");
	}
	return 0;
}
