#define n 105
#include<stdlib.h>
void main()
{
	int t,a[]={40,30,6,7,8,3},i,j,min;
	long c=0;
	clrscr();
	randomize();
	for(i=0;i<n;i++)
	{
		a[i]=random(45);
	}
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			c++;
			if(a[j]<a[min])
			{	min=j;
			}
		}
		if(min!=i)
		{
			t=a[i];
			a[i]=a[min];
			a[min]=t;

		}
	}
	for(i=0;i<n;i++)
		printf("\t%d",a[i]);
		printf("\nTotal count %ld\n",c);
	getch();

}