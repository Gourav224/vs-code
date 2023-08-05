#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int i;
	char *a,b[20];
	clrscr();
	do
	{
		i=1;
		printf("Enter ");
		randomize();
		b[0]=random(10)+48;
		b[1]=random(26)+65;
		b[2]=random(10)+48;
		b[3]=random(26)+97;
		b[4]=random(15)+33;
		b[5]='\0';
		puts(b);
		gets(a);
		if(!strcmp(a,b))
		{
			i=0;
			printf("hii");
		}

	}while(i);
	getch();
}