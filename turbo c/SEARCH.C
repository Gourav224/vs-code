#include<stdlib.h>
#define s 10
void main()
{
	int a[s],i,n,f=0;
	clrscr();
	randomize();
	printf("\nenter a no. to find:");
	scanf("%d",&n);
	printf("array A is:\n");
	for(i=0;i<s;i++)
	{
		a[i]=random(10);
		printf("%d ",a[i]);
	}
	for(i=0;i<s;i++)
	{
		if(a[i]==n)
		{
			printf("\n%d found at %d\n ",a[i],i+1);
			f=1;
		}
	}
	if(f==0)
	printf("\nelement not found");
	getch();
}