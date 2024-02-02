#include <stdio.h>

int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
    char *dataset[] ={"zero","one","two","three","four","five","six","seven","eight","nine"};
    for(int i =a;a<=b;a++)
    {
        if(a<10)
        {
            printf("%s\n",dataset[a]);
        }
        else if(a%2==0)
        {
            printf("even\n");
        }
        else{
            printf("odd\n");
        }
    }

    return 0;
}

