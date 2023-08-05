void main()
{
	int i,j,n;
	clrscr();
	printf("Enter number of rows: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)           //number of rows
	{
		//printf("%d->",i);
		//textcolor(9);
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++)                   //number of columns
		{
			//textcolor(j+1);
			cprintf("*");
		}
		/*
		for(j=1;j<=n-i+1;j++)
		{
			//textcolor(j+1);
			cprintf("*");
		}
		*/
		printf("\n");
	}
	for(i=1;i<=n;i++)           //number of rows
	{
		//printf("%d->",i);
		//textcolor(9);
		for(j=1;j<=i;j++)
		{
			printf(" ");
		}
		for(j=1;j<=2*n-i*2-1;j++)                   //number of columns
		{
			//textcolor(j+1);
			cprintf("*");
		}

		/*
		for(j=1;j<=n-i+1;j++)
		{
			//textcolor(j+1);
			cprintf("*");
		}
		*/
		printf("\n");
	}
	//printf("*");

	getch();
}



/*
i
1    ----*                i<=n-i   ->  i<=5-1 = 4        2*i-1=1
2    ---***                            i<=5-2 = 3              3
3    --*****                                    2              5
4    -*******                                   1              7
5    *********                                  0              9




*/