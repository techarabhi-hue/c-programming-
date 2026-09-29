#include <stdio.h>
#include <ctype.h>
int main(void){char ch; printf("Enter a character: "); scanf(" %c",&ch); if(isalpha((unsigned char)ch)){if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') printf("The character '%c' is a vowel.\n",ch); else printf("The character '%c' is a consonant.\n",ch);} else printf("Error: '%c' is not a valid alphabetic letter.\n",ch); return 0;}
