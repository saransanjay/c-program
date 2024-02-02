#include <stdio.h>
void main()
{
  int input =0;
  scanf("%d",&input);
  int value = input;
  int size = input + (input - 1);
  int len = size;
  int arr[size][size];
  int ul = 0, rd = size - 1;
  
  for (int i = 1; i < input; i++)
  {
    ul = i - 1;
    for (int j = i - 1; j < len; j++)
    {
      arr[ul][j] = value;
      arr[j][ul] = value;
      // printf("%d ",j);
    }
    for (int k = i - 1; k < len; k++)
    {
      arr[rd][k] = value;
      arr[k][rd] = value;
      //printf("%d ", rd);
    }
    len--;
    value--;
    rd--;
  }
  arr[input-1][input-1]=value;
  // printing
  for(int n = 0;n<size;n++)
  {
    for(int m =0 ;m<size;m++)
    {
      printf("%d ",arr[n][m]);
    }
     printf("\n");
  }
}