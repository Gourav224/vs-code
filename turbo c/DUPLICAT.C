#include<stdlib.h>
#define s 10
void main()
{
	int a[s],i,ts=0,m,c=0;
	clrscr();
	printf("Array is : ");
	randomize();
	for(i=0;i<s;i++)
	{
		a[i]=random(5)+1;
		printf("%d,",a[i]);
	}
	for(i=0;i<s-c;i++)
	{     m=2;
		if(a[i]==m)
		{       ts++;
			a[i]=a[i+1];
		}
		else if(ts)
			a[i]=a[i+1];

	}

	if(ts==1)
	   c=1;
	printf("\nArray is : ");
	for(i=0;i<s-ts;i++)
	{
		printf("%d,",a[i]);
	}
	getch();
}