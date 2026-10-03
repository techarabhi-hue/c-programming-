#include <stdio.h>
int main(void)
{
  int n,a[100],key,pos=-1;
  printf("Enter number of elements: "); 
  scanf("%d",&n);
  printf("Enter %d elements: ",n); 
  for(int i=0;i<n;i++) 
  scanf("%d",&a[i]);
  printf("Enter element to search: ");
  scanf("%d",&key); 
  for(int i=0;i<n;i++) 
  if(a[i]==key){pos=i;break;
  } 
  if(pos!=-1)
  printf("Element found at position %d\n",pos+1);
  else printf("Element not found\n"); 
  return 0;
}





