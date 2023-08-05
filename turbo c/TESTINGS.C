#define M 50
#include<stdlib.h>
void main()
{
	int i,size=10,a[M];
	int n=90;
	clrscr();
	randomize();
	for(i=0;i<=size;++i);
	{
		a[i]=random(40);
		printf("%d\t",a[i]);

	}
	// insert at begining
	size++;
	for(i=1;i<=size;++i);
	{
		a[size-i+1]=a[size-i-1];
	}
	a[size-i]=n;
	printf("\n");

	for(i=0;i<=size;++i);
		printf("%d\t",a[i]);

		//printf("%d ",i);
	getch();
}