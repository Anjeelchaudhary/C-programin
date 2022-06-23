#include<stdio.h>
#include<conio.h>

int main(){
	int number,sum=0,remainder,temp;
	printf("Enter the number : ");
	scanf("%d",&number);
	temp=number;
	
	while(number>0){
		remainder=number%10;
		sum=remainder+(sum*10);
		number=number/10;
	}
	if(sum==temp){
		printf("Pallindrome number");
	}else {
		printf("NOt pallindrome number ");
	}
	return 0;
}
