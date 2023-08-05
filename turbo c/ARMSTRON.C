
#include<math.h>

void main()
{
int n,r,sum,temp,d,t;
clrscr();


	for(n=1;n<=3000;n++)
	{  t=n;
	  d=0;
		while(t!=0)
		{ t=t/10;
		d++;
		}

	 sum=0;
	 temp=n;
		while(temp!=0)
		{
		r=temp%10;
		sum=sum+pow(r,d);
		temp=temp/10;
		}
	if(n==sum)
	printf("%d\t ",n);
	  }
getch();
}