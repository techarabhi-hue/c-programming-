#include <stdio.h>
#include <limits.h>
int main(void){int n,a[100],largest=INT_MIN,second=INT_MIN; printf("Enter number of elements: "); scanf("%d",&n); printf("Enter elements: "); for(int i=0;i<n;i++){scanf("%d",&a[i]); if(a[i]>largest){second=largest;largest=a[i];} else if(a[i]>second && a[i]<largest) second=a[i];} if(second==INT_MIN)printf("No second largest element\n"); else printf("Second largest element = %d\n",second); return 0;}
