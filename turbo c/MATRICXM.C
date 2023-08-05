#include<stdlib.h>
#define r 3
#define c 3
void main()
{
	int a[r][c],b[r][c],d[r][c],i,k,j;
	clrscr();
	randomize();
	printf("Matrix A is : \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			a[i][j]=random(9)+1;
			d[i][j]=0;
			printf("%d ",a[i][j]);
		}
	   printf("\n");

	}
	printf("Matrix B is : \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			b[i][j]=random(9)+1;
			printf("%d ",b[i][j]);
		}
	   printf("\n");

	}
	printf("\nMultiplication of matrices \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{     for(k=0;k<r;k++)
			{
				d[i][j]=d[i][j]+a[i][k]*b[k][j];

			 }
			 printf("%3d ",d[i][j]);
		}
	   printf("\n");

	}


	getch();

}