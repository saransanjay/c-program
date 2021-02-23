#include <stdio.h>
#include<conio.h>

void main() {
   int a[5] ;
   int largest, second;
   printf("enter the  any five number\n");
   for(int i=0;i<5;i++){
       scanf("%d",&a[i]);
   }
   if(a[0]>a[1]){
      largest=a[0];
      second=a[1];
   }
   else{
      largest=a[1];
      second=a[0];
       }
       for(int i=2;i<5;i++){
          if(largest<a[i]){
             second=largest;
             largest=a[i];
          }else if(second<a[i]){
             second=a[i];
              }
       }
       printf("largest=%d\nsecond=%d\n",largest,second);
       getch();
}
