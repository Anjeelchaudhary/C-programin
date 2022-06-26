#include<stdio.h>
#include<conio.h>

void main(){
	int number,i,sum=0;
	printf("Enter number up to which calculated");
	scanf("%d",&number);
	
	for(i=1;i<=number;i++){
		sum=sum+i;
	}
	printf("Sum of natural number is : %d",sum);
	getch();
}
