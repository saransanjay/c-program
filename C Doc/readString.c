//read a String with white space
#include<stdio.h>
void main()
{
    char sen[50];
    scanf("%[^\n]%*c",&sen);
    printf("%s",sen);
}
