#include<stdio.h>
void main()
{   
  int arr[] = {5,4,3,2,1};
  int value = arr[0];
  int temp =0;
  for(int i = 0;i<5;i++)
  {
    for(int j = i ;j<5;j++)
    {
        if(arr[i]>arr[j])
        {
            temp = arr[i];
            arr[i]= arr[j];
            arr[j] = temp;
            
        }
    }
  }
  for(int n =0;n<5;n++)
  {
    printf("%d ",arr[n]);
  }
}
