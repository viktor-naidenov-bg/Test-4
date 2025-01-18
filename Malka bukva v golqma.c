#include<stdio.h>
void main()
{
    char c;
    printf("Enter random symbol pro max");
    scanf("%c",&c);
    if(c>='a'&&c<='z'){c=c-32;printf("%c",c);}
    else printf("%c",c);}

