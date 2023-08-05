#include<stdio.h>
#include<conio.h>
int main()
{

	int  a[]={2000,500,100,50,20,10,5,2,1},m,temp,i;
	printf("Enter the amount:");
	scanf("%d",&m);
	temp=m;
	for(i=0;i<9;i++)
	{
		printf("\n%d notes is:%d",a[i],temp/a[i]);
		temp=temp%a[i];
	}
	return 0;
}