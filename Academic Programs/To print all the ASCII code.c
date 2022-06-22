#include<stdio.h>
#include<conio.h>

void main(){
	int count=0;
	printf("All ASCII valuse are given below : ");
	while(count<=255){
		printf("%c  %d \n",count,count);
		count++;
	}
	getch();
}
