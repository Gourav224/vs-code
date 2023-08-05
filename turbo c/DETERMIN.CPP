
#include<stdlib.h>
#define r 3
#define c 3
void main()
{
	int a[r][c],s,i,k,j;
	clrscr();
	randomize();
	printf("Matrix A is : \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			a[i][j]=random(9)+1;
			printf("%d ",a[i][j]);
		}
	   printf("\n");

	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		   s+=a[i][j]*(a[i+1][j+1]*a[i+1][j+1]-a[i+1][j+2]*a[i+2][j+1]);

		}


	}
	printf("\ndeterminate %d\n",s);'
	 getch();
}