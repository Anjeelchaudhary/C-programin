#include<stdio.h>
#include<conio.h>
#define pie 3.141

void main(){
	float area,circumference,diameter,radius;
	printf("Enter the radius of the circle : ");
	scanf("%f",&radius);
	area=pie*radius*radius;
	circumference=2*pie*radius;
	diameter=2*radius;
	printf("%f is the area of the circle \n ",area);
	printf("%f is the circumference of the circle \n",circumference);
	printf("%f is the diameter of the circle \n",diameter);
    getch();	
}
