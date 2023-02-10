#include<stdio.h>
void main()
{
    //read character only 
    char ch = getchar();
    //write character only 
    putchar(ch);     
    getchar();

    //read String only
    char str[100];
    gets(str);
    //write String only
    puts(str);

    //read all DataType
    int a;
    scanf("%d",&a);
    //write all DataType
    printf("%d",a);
}