#include<stdio.h>
#include<conio.h>
int n=5;
int additon(int a,int b){
    int c;
    c=a+b;
    printf("the addition of a and b=%d",c);
    n=1;
}
int subraction(int a,int b){
    int c;
    c=a-b;
    printf("the subraction of a and b=%d",c);
    n=1;
}
int multiplication(int a,int b){
    if(a<5){
        printf("enter the a value of a greater than zero");
         n=-1;
    }
    else if(b<5){
        printf("enter the a value of b greater than zero");
         n=-1;
        }
     else{
          int c;
          c=a*b;
        printf("the multiplication of a and b=%d",c);
         n=1;
    }
}
int division(int a,int b){ 
    if(a<0){
        printf("enter the a value of a greater than zero");
         n=-1;
    }
    else if(b<0){
        printf("enter the a value of b greater than zero");
        n=-1;
        }
     else{
         int c;
        c=a/b;
        printf("the division of a and b=%d",c);
         n=1;
        }
}
void main(){
    int a,b,c;
do{
    printf("\nenter the value of a and b\n");
    scanf("%d%d",&a,&b);
    printf("choose the arithmetic operation\nfor addition=1\nfor subraction=2\nfor multiplication=3\nfor divion=4\n");
    scanf("%d",&c);
    switch(c){
        case 1:
        additon(a,b);
        break;
        case 2:
        subraction(a,b);
        break;
        case 3:
        multiplication(a,b);
        break;
        case 4:
        division(a,b);
        break;
        default:
        printf("enter the value between 1 to 4");
    }
}
    while (n==-1);
  
    getch();
 }

