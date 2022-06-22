#include<stdio.h>
#include<conio.h>

void main(){
	int numberOne,numberTwo,temp;
	printf("Enter the numberOne");
	scanf("%d",&numberOne);
	printf("Enter the numberTwo");
	scanf("%d",&numberTwo);
	
	temp=numberOne;
	numberOne=numberTwo;
	numberTwo=temp;
	printf("Now the values after swappig of numberOne:%d and numberTwo:%d",numberOne,numberTwo);
	getch();
}
