#include<stdlib.h>
#define m 100
void main()
{
	int a[m],i,j,t,ub=m,lb=0,s,mid,f=0;
	clrscr();
	printf("Array is :");
	randomize();
	for(i=0;i<m;i++)
	{
	     a[i]=random(20)+1;
	     printf("%d ",a[i]);
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<m-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	printf("\nSoretd array is : ");
	for(i=0;i<m;i++)
	printf("%d ",a[i]);
	printf("\nEnter a no.");
	scanf("%d",&s);
	while(lb<ub)
	{
		mid=(lb+ub)/2;
		if(a[mid]==s)
	       {        f=1;
			printf("number found");
			break;
	       }
		if(a[mid]<s)
		lb=mid+1;
		else
		ub=mid-1;
	 }
	 if(f==0)
	 printf("Not found");
	getch();

}