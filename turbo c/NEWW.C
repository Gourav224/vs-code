#include<stdio.h>
void main()
{
	long n,r,s=0;
	clrscr();
	printf("enter a no.");
	scanf("%ld",&n);
	for(n;n>9;)
		{
			s=0;
			while(n!=0)
			{
				r=n%10;
				s=s+r;
				n=n/10;
			}
			n=s;
		}

	printf("sum is %ld",s);
	getch();
}