#include <stdio.h>
int main(void){int n,a[100],pos=0,neg=0,zero=0; printf("Enter number of elements: "); scanf("%d",&n); printf("Enter %d elements: ",n); for(int i=0;i<n;i++){scanf("%d",&a[i]); if(a[i]>0) pos++; else if(a[i]<0) neg++; else zero++;} printf("Positive = %d\nNegative = %d\nZero = %d\n",pos,neg,zero); return 0;}
