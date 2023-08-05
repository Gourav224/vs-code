void main()
{
	int t,a[]={40,309,226,7,8,32},i,j,min,n=6,max;
	clrscr();
	for(i=0;i<=n-i;i++)
	{       max=i;
		min=i;
		for(j=i+1;j<n;j++)
		{	if(a[j]<a[min])
			{	min=j;
			}
			else
				max=j;
		}
		if(min!=i)
		{
			t=a[i];
			a[i]=a[min];
			a[min]=t;

		}
		if(max!=i)
		{
		       t=a[n-1-i];
		       a[n-i-1]=a[max];
		       a[max]=t;
		}

	}
	for(i=0;i<n;i++)
		printf("\t%d",a[i]);
	getch();

}