#include<stdlib.h>
#define r 4
#define c 4
void main()

{
	int a[r][c],t,i,j,k;
	clrscr();
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
		for(j=0;j<c/2;j++)
		{

			t=a[i][j];
			a[i][j]=a[r-1-i][c-1-j];
			a[r-1-i][c-1-j]=t;



		 }

	}
	printf("Sorted arry is \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		      //	a[i][j]=random(20)+1;
			printf("%d ",a[i][j]);
		 }
		 printf("\n");
	}


	getch();
}




























/*
void main()

{
	int a[r][c],m,i,j;
	clrscr();
	printf("Matrix A is : \n");
	randomize();
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			a[i][j]=random(20)+1;
			printf("%d ",a[i][j]);
		 }
		 printf("\n");
	}
	m=a[0][0];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(a[i][j]>m)
			m=a[i][j];
		 }
	 }

	 printf("Maximum number is %d",m);
	 for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(a[i][j]<m)
			m=a[i][j];
		 }
	 }

	 printf("Minimum number is %d",m);


	getch();

}
  */



























/*
void main()

{
	int a[r][c],b[r][c],d[r][c],i,j;
	clrscr();
	printf("Matrix A is : \n");
	randomize();
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			a[i][j]=random(20)+1;
			printf("%d ",a[i][j]);
		 }
		 printf("\n");
	}
	printf("Matrix B is : \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			b[i][j]=random(20);
			printf("%d ",b[i][j]);
		 }
		 printf("\n");
	 }
	 printf("Sum of two matrices A+B = \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			d[i][j]=b[i][j]+a[i][j];
			printf("%d ",d[i][j]);
		 }
		 printf("\n");
	}
	getch();
}         */