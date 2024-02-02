#include<stdio.h>
int main()
{
    char *dataset[] ={"one","two","three","four","five","six","seven","eight","nine"};
    int input = 0;
    scanf("%d",&input);
   if(input>=10)
    printf("Greater than 9");
   else
   printf("%s",dataset[input-1]);
}