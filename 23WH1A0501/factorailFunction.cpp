#include<stdio.h>
int fact(int num){
	int factorial = 1;
	for(int i = 1 ; i <= num ; i++)
		factorial *= i;
	return factorial;
}
int main(){
	int num , factorial;
	printf("Enter a number: ");
	scanf("%d" , &num);
	factorial = fact(num);
	printf("%d" , factorial);
}
