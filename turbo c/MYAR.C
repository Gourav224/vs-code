#include<stdlib.h>
#define M 50
void main()
{
	int a[M],size=8,n=100,i;
	clrscr();
	randomize();
	printf(" Array is : \n");

	for(i=0;i<size;i++)
	{
		a[i]=random(90);
		printf("\t%d",a[i]);
	}
	size++;
	/*
	for(i=0;i<=size;i++)
	{
		a[size-i+1]=a[size-i];
		printf("[%d],",size-i);
	}
	*/

	for(i=size;i>0;i--)
	{
		a[i]=a[i-1];
	}

	a[0]=n;
	printf("\nNew array is : \n");
	for(i=0;i<size;i++)
	{
		printf("\t%d",a[i]);
	}
	getch();
}