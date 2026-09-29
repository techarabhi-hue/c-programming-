#include <stdio.h>
int main(void){float u,b=0; printf("Enter total units consumed: "); scanf("%f",&u); if(u<0){puts("Units cannot be negative.");return 0;} if(u<=100)b=u*5; else if(u<=200)b=100*5+(u-100)*7; else if(u<=300)b=100*5+100*7+(u-200)*10; else b=100*5+100*7+100*10+(u-300)*12; printf("Total Electricity Bill: Rs %.2f\n",b); return 0;}
