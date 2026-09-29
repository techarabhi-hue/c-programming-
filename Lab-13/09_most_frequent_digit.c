#include <stdio.h>
int main(void){long long n; int count[10]={0},digit,maxDigit=0; printf("Enter an integer number: "); scanf("%lld",&n); if(n<0)n=-n; if(n==0)count[0]=1; while(n>0){digit=n%10;count[digit]++;n/=10;} for(int i=1;i<10;i++) if(count[i]>count[maxDigit]) maxDigit=i; printf("Most frequent digit = %d\nIt occurs %d times.\n",maxDigit,count[maxDigit]); return 0;}
