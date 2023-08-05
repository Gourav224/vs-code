#include<stdlib.h>
#define s 10
void main()
{
	int a[s],i,max;
	clrscr();
	randomize();
	printf("Array is:\n");
	for(i=0;i<s;i++)
	{
		a[i]=random(30);
		printf(" %d ",a[i]);
	}
	max=a[0];
	for(i=0;i<s;i++)
	{
		if(a[i]>max)
			max=a[i];
	}
	printf("\n maximum number : %d",max);
	getch();
}