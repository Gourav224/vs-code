#include<stdlib.h>
#define s 10
void main()
{
	int a[s],i,min;
	clrscr();
	randomize();
	printf("Array is:\n");
	for(i=0;i<s;i++)
	{
		a[i]=random(30);
		printf(" %d ",a[i]);
	}
	min=a[0];
	for(i=0;i<s;i++)
	{
		if(a[i]<min)
			min=a[i];
	}
	printf("\n minimum number : %d",min);
	getch();
}