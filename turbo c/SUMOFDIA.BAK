#include<stdlib.h>
#define r 3
#define c 3
void main()
{
	int a[r][c],i,j,s=0;
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
			     /*
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		    if(i==j)
		    s+=a[i][j];
		    else if(c-1 == i+j)
			s+=a[i][j];
		}
	}                   */
	for(i=0;i<r;i++)
	{     s+=a[i][i];
	      s+=a[i][r-1-i];
	}
	if(r%2)
	s-=a[r/2][c/2];
	printf("\n Sum of diagonals = %d ",s);
	getch();
}
