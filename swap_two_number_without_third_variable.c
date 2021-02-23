#include<stdio.h>
#include<conio.h>
void main(){
int a,b;
printf("enter the a value") ;
scanf("%d",&a);
printf("enter the b value");
scanf("%d",&b);
printf("a=%d and b=%d",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("\na=%d and b=%d after the swap",a,b);
getch();
}