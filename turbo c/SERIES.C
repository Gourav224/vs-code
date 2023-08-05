#include<stdio.h>
#include<conio.h>
void main()
{
	int a=0,b=1;
	int i;
	clrscr();
	printf("Series is   0  1 ");
	for(i=1;i<23;i++)
	{
		printf(" %d ",a+b);
		if(i%2==0)
		a=a+b;
		else
		b=a+b;

	}
	getch();
}