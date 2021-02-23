#include<stdio.h>
#include<conio.h>
void main(){
int a,b,i;
printf("enter the value of a and b\n");
scanf("%d%d",&a,&b);
if(b<0){
for(i=0;i>b;i--){
a--;
}
}
else{
    for(i=0;i<b;i++){
    a++;
}
}
printf("the sum of a+b=%d",a);
getch();
}
