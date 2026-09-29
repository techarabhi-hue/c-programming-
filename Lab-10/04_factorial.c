#include <stdio.h>
int main(void){int n,i; unsigned long long f=1; printf("Enter a number: "); scanf("%d",&n); if(n<0) puts("Factorial of a negative number doesn't exist."); else {for(i=1;i<=n;i++)f*=i;printf("Factorial of %d is: %llu\n",n,f);} return 0;}
