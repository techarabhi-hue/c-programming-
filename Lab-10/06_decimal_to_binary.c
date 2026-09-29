#include <stdio.h>
int main(void){unsigned int n,t;int bits[32],i=0,j; printf("Enter a decimal number: "); scanf("%u",&n); if(n==0){puts("Binary representation: 0");return 0;} t=n;while(t>0){bits[i++]=t%2;t/=2;} printf("Binary representation of %u is: ",n);for(j=i-1;j>=0;j--)printf("%d",bits[j]);printf("\n");return 0;}
