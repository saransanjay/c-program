  #include<stdio.h>
  #include<conio.h>
  void main(){
  int a,b,*x,*y,temp;
  printf("enter the value a and b");
  scanf("%d%d",&a,&b);
  printf("before swaping \na=%d\nb=%d\n",a,b);
  x=&a;
  y=&b;
  temp=*y;
  *y=*x;
  *x=temp;
  printf("after swaping\na=%d\nb=%d\n",a,b);
  getch();
  }