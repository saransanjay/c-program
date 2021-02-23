#include<stdio.h>
#include<conio.h>
void  main(){
int a,b,*c;
printf("enter the value of a and b");
scanf("%d%d",&a,&b);
printf("a=%d and b=%d",a,b);
a=a+b;
c=&a;
printf("\nthe sum of the a and b =%d",*c);
getch();
}
