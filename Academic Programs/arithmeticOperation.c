#include<stdio.h>
#define PI 3.141 

void main(){
   double volume,radius;
   printf("Enter any radius value");
   scanf("%d",&radius);

   volume = (4/3)*PI*radius*radius*radius;
  
   printf("%d is the valume of the circle",volume);
  
   getch();
 }