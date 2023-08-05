#include<stdlib.h>
#define size 10
void main()
{
	int a[size],i,j,f=0;
	clrscr();
	randomize();
	printf("Array is : ");
	for(i=0;i<size;i++)
	{
		a[i]=random(11);
		printf("%d ",a[i]);
	}
	for(i=0;i<size-3;i++)
	{
		if(a[i]+a[i+1]+a[i+2]==20)
		{
			f=1;
			printf("\n%d+%d+%d =20 ",a[i],a[i+1],a[i+2]);
		}
	}
	if(f==0)
		printf("\n No triplet found");
	getch();

}