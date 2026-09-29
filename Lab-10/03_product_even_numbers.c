#include <stdio.h>
int main(void){int n,i,found=0; unsigned long long product=1; printf("Enter the value of n: "); scanf("%d",&n); for(i=1;i<=n;i++) if(i%2==0){product*=i;found=1;} if(found) printf("Product of even numbers from 1 to %d is: %llu\n",n,product); else puts("No even numbers found in the range."); return 0;}
