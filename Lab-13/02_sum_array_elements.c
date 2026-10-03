#include <stdio.h>
int main(void)
{
  int n,a[100],sum=0; 
  printf("Enter number of elements: "); 
  scanf("%d",&n); 
  printf("Enter %d elements: ",n); 
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]); sum+=a[i];
  } 
  printf("Sum of array elements = %d\n",sum); 
  return 0;
}


