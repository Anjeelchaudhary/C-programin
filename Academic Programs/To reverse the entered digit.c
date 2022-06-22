#include<stdio.h>
#include<conio.h>

void main(){
	int number,remainder;
	printf("Enter any number : ");
	scanf("%d",&number);
	
	while(number>0){
		remainder=number%10;
		printf(" %d",remainder);
		number=number/10;
		
	}
	getch();
}
