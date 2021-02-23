#include<stdio.h>
#include<conio.h>
void main(){
   int a,b,r,q;
    printf("enter the value of a and b\n");
    scanf("%d%d",&b,&a);
    r=a%b;
    q=a/b;
    printf("the value of divisor=%d\n",b);
    printf("the value of dividend=%d\n",a);
    printf("the value of remainder=%d\n",r);
    printf("the value of quotient=%d\n",q);
    getch();
}