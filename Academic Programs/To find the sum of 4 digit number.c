#include<stdio.h>
#include<conio.h>

void main(){
	int number,sum=0,i,remainder;
	printf("Enter the four digit number : ");
	scanf("%d",&number);
	
	while(number>0){
		remainder=number%10;
		sum=sum+remainder;
		number=number/10;
	}
	printf("The sum of four digit number is : %d",sum);
	getch();
}
