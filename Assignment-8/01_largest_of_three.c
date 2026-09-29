#include <stdio.h>
int main(void){double a,b,c,largest; printf("Enter three numbers: "); scanf("%lf %lf %lf",&a,&b,&c); largest=a; if(b>largest) largest=b; if(c>largest) largest=c; printf("The largest number is: %.2f\n",largest); return 0;}
