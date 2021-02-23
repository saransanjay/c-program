#include<stdio.h>
#include<conio.h>
void main(){
int *a,*b;
printf("enter the value a and b");
scanf("%d%d",&a,&b);
printf("before swaping \na=%d\nb=%d\n",a,b);
*a=*a+*b;
*b=*a-*b;
*a=*a-*b;
printf("after swaping \na=%d\nb=%d\n",*a,*b);
getch();
}