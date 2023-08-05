#include<stdlib.h>
#define size 5
void fun(char *str)
{
	strcpy(str,"cm sharma");
}

void main()
{
	char *s;
	clrscr();
	printf("Enter your name :");
	gets(s);
	fun(s);
	puts(s);
	getch();
}

/*
void main()
{
	int *a[size],i,j;
	clrscr();
	randomize();
	for(i=0;i<size;i++)     {
		for(j=0;j<size;j++)

		a[i][j]=random(70);
	}
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}
	getch();
}
*/
