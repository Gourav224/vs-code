#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],b[100],c[100];
	int i,k,j,n,s,size;
	clrscr();
	printf("Enter the size of first  array ");
	scanf("%d",&n);
	printf("Enter the sorted array ");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Enter the size of second array ");
	scanf("%d",&s);
	printf("Enter the sorted array ");
	for(i=0;i<s;i++)
	scanf("%d",&b[i]);
	size=n+s;

	printf("Third array is " );
	for(i=0,j=0,k=0;k<size;)
	{
		if(i<n && j<s)
		{
			if(a[i]<=b[j])
			{
				c[k++]=a[i++];
			}
			else
				c[k++]=b[j++];
		}
		else if(i<n)
			{
				c[k++]=a[i++];
			}
			else
				c[k++]=b[j++];





	}
	for(k=0;k<size;k++)
	printf("  %d",c[k]);
	getch();


}
