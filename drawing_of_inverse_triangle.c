#include<stdio.h>
#include<conio.h>
void main(){
    int n;
    int space=0;
    printf("enter the row of the triangle");
    scanf("%d",&n); 
    for (int i = n; i > 0; i--){
    for (int j = 0; j < space; j++) {
			printf(" "); 
            }
    
    	for (int j = 0;j<i;j++) {
			printf("* "); 
        }
    
		printf("\n"); 
		space++; 
}
  
   getch();
}