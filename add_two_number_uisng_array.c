#include<stdio.h>
#include<conio.h>
void main(){
int i,j,a[3][3],b[3][3],c[3][3];
for(i=0;i<3;i++){
for(j=0;j<3;j++){
printf("\nenter the value for a[%d][%d]",i,j);
scanf("%d",&a[i][j]);
printf("a[%d][%d]=%d",i,j,a[i][j]);
printf("\nenter the value for b[%d][%d]",i,j);
scanf("%d",&b[i][j]);
printf("b[%d][%d]=%d",i,j,b[i][j]);
c[i][j]=a[i][j]+b[i][j];
printf("\nthe sum value of a[%d][%d]+b[%d][%d] = %d",i,j,i,j,c[i][j]);
}
}
getch();
}
