#include<stdlib.h>
#define s 10
void main()
{
	int i,j,k,a[s],t=0;
	clrscr();
	randomize();
	printf("Array is : ");
	for(i=0;i<s;i++)
	{
		a[i]=random(9)+1;
		printf("%d ",a[i]);
	}
	for(i=0;i<s;i++)
	{
		for(j=0;j<s;j++)
		{
			for(k=0;k<s;k++)
			{      if(a[i]+a[j]+a[k]==20)
					{
						printf("\n %d+%d+%d = 20",a[i],a[j],a[k]);
					}

			}

		}

	}
	getch();

}