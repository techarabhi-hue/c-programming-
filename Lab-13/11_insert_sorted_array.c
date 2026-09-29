#include <stdio.h>
int main(void){int n,a[101],x,i; printf("Enter number of elements: "); scanf("%d",&n); printf("Enter sorted elements: "); for(i=0;i<n;i++) scanf("%d",&a[i]); printf("Enter element to insert: "); scanf("%d",&x); i=n-1; while(i>=0 && a[i]>x){a[i+1]=a[i];i--;} a[i+1]=x;n++; printf("Array after insertion: "); for(i=0;i<n;i++)printf("%d ",a[i]); printf("\n"); return 0;}
