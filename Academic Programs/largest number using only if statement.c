#include<stdio.h>
#include<conio.h>

int main(){
	float a,b,c;
	printf("Enter the value of a , b and c ");
	scanf("%f\n %f\n %f\n",&a,&b,&c);
	
	if(a>=b && a>=c)
	printf(" a=%f is bigger",a);
	
	if(b>=a && b>=c)
	printf("b=%f is bigger",b);
	
	if(c>=a && c>=b)
	printf("c=%f is bigger",c);
	return 0; 
}
