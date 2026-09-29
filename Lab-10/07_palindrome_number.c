#include <stdio.h>
int main(void){int n,original,rev=0,r; printf("Enter an integer: "); scanf("%d",&n); original=n; while(n>0){r=n%10;rev=rev*10+r;n/=10;} if(original==rev) printf("%d is a palindrome number.\n",original); else printf("%d is not a palindrome number.\n",original); return 0;}
