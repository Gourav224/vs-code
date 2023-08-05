#include<stdio.h>
#include<conio.h>
#include<math.h>
 int main()
{
	int n,r,sum=0,temp,t,d=0;
	
	printf("enter the number=");
	scanf("%i",&n);
	temp=n;
	t=n;
	while(t>0)
	{ t=t/10;
	d++;
	}
	while(n>0)
	{
	r=n%10;
	sum=sum+pow(r,d);
	n=n/10;
	}
	if(temp==sum)
	printf("armstrong  number ");
	else
	printf("not armstrong number");
	getch();
}   
