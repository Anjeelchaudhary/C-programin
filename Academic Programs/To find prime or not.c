#include<stdio.h>
#include<conio.h>

void main(){
	int number,i,times;
	printf("Enter any number :");
	scanf("%d",&number);
	for(i=1;i<number;i++){
		if(number%i==0){
			times++;
		}
		if(times==2){
			printf("Prime number");
		}else{
			printf("Not prime number");
		}
	}
	getch();
}
