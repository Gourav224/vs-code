/*
void main()
{
	int a[100],i,n,min,max;
	clrscr();
	printf("enter size of an array");
	scanf("%d",&d\n);
	printf("enter an elements of an array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	min=max=a[0];
	for(i=1;i<n;i++)
	{
		if(min<a[i])
		min=a[i];
		else if(max>a[i])
		max=a[i];
	}
	printf("min array=%d",min);
	printf("max array=%d",max);
getch();
}
*/

 // copy
/*
void main()
{
	int a[50],b[50],t,i,n;
	clrscr();
	printf("enter size of an array");
	scanf("%d",&n);
	printf("enter elements of first array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter size of an second array");
	scanf("%d",&n);
	printf("enter elements of second array");
	for(i=1;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	a[i]=t;
	t=b[i];
	printf("copied array is=%d",b[i]);
getch();
}
*/
/*
//odd no.
void main()
{
	int a[50],i,n;
	clrscr();
	printf("enter size of an array");
	scanf("%d",&n);
	printf("enter elements of an array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++)
	{
		if(a[i]%3==0)
		{
				printf(" %d",a[i]);
		}
	}
getch();
}
*/
/*
//sum of even no in array
void main()
{
	int a[40],n,i,sum=0;
	clrscr();
	printf("enter size of an array");
	scanf("%d",&n);
	printf("enter elements of an array");
	for(i=1;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++)
	{
		if(a[i]%2==0)
		{
		    sum=a[i]+sum;
		}
	}
	printf("sum=%d",sum);
getch();
}
*/
/*
//reverse
void main()
{
	int a[30],i,n,r=0,t;
	clrscr();
	printf("enter size of an array");
	scanf("%d",&n);
	printf("enter elements of an array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	r=0;
	while(a[i]!=0)
	{
		t=a[i]%10;
		r=r*10+t;
		a[i]=a[i]/10;
	}

	printf("%d ",r);
	}
	getch();
}
 */
 /*
 //sepreate out +ve ,-ve and 0's
 void main()
 {
	int a[100],i,n;
	clrscr();
	printf("enter sizr of an array");
	scanf("%d",&n);
	printf("enter elements of an arrray");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>0)
		{
			printf("positive no.=%d\n",a[i]);
		}
		if(a[i]<0)
		{
			printf("negetive no.=%d\n",a[i]);
		}
		if(a[i]==0)
		{
			 printf("zero's =%d\n",a[i]);
		}
	}
getch();
*/














































































































































































































































































































































































































































































































