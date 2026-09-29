#include <stdio.h>
int main(void){int d; printf("Enter a number (1-7): "); scanf("%d",&d); switch(d){case 1:puts("Monday");break;case 2:puts("Tuesday");break;case 3:puts("Wednesday");break;case 4:puts("Thursday");break;case 5:puts("Friday");break;case 6:puts("Saturday");break;case 7:puts("Sunday");break;default:puts("Invalid input! Please enter a number between 1 and 7.");} return 0;}
