#include<conio.h>
#include<stdio.h>
int main()
{
	char ch;
	printf("Enter a Character:");
	scanf("%c",&ch);
	if(64<ch && 91>ch)
	printf("Now %c is %c",ch,ch+32);
	else if(96<ch && 122>ch)
	     printf("Now %c is %c",ch,ch-32);
	return 0;
}