#include<stdio.h>
#include<conio.h>
void main(){
    int n;
    printf("enter the row of the right roate triangle");
    scanf("%d",&n);
    int space=n-1;
    for (int i = 0; i < n; i++){    
    
        printf("*");
          
            for(int j=0;j<space;j++){
              printf("1\n");
             }     
   }
   getch();
}
  