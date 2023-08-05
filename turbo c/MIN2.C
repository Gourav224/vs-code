#include<stdlib.h>
void main()
{
	int a[10],min,i;
	clrscr();
	randomize();
	printf("given numbers are = ");
	for(i=0;i<10;i++)
	{
		a[i]=random(10)+1;
		printf("%d ",a[i]);
	}
	min=a[0];

	for(i=0;i<10;i++)
	{
		if(a[i]<min)
		 min=a[i];
	}
	 printf("\n\nMinimum number = %d",min);
       getch();
}