#include<stdlib.h>
#define s 5
void main()
{
	int a[s],i,r,n,sum=0,c=0;
	clrscr();
	printf("array is:\n");
	for(i=0;i<s;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<s;i++)
	{
		sum=0;
		n=a[i];
		while(a[i]!=0)
		{
			r=a[i]%10;
			sum=sum*10+r;
			a[i]=a[i]/10;
		}
		if(sum==n)
		{
			c++;
		}
	}
	printf("\nno. of palindrome no.:%d",c);
	getch();
}