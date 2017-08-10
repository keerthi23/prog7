#include<stdio.h>
int main()
{
char n;
scanf("%c",&n);
if(n>='a'&&n<='z'||n<='A'&&n>='Z')
{
printf("\n %c is an Alphabet");
}
else
{
printf("\n %c is not an Alphabet");
}
return 0;
}
