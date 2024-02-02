#include <stdio.h>

void calculate_the_maximum(int n, int k) {
 int and=0,or = 0,xor =0,max1 =0,max2 =0,max3 =0;
    for(int i =1;i<n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            and = i&j;
            or = i|j;
            xor = i^j;
            if(max1<and&&k>and)  
                max1=and;
            if(max2<or&&k>or)
                max2=or;
            if(max3<xor&&k>xor)
                max3=xor;
        }
    }
    printf("%d\n%d\n%d\n",max1,max2,max3);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
