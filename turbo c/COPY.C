#include<stdlib.h>
#include<time.h>
#define s 10
void main()
{
	int a[s],b[s],i;
	clrscr();
	randomize();
  //  srand(time(0));
	printf("Array A is:\n");
	for(i=0;i<s;i++)
	{
		a[i]=random(40);
		printf(" %d ",a[i]);
	}
	printf("\nCopied array is:\n");
	for(i=0;i<s;i++)
	{
		b[i]=a[i];
		printf(" %d ",b[i]);
	}
	getch();
}