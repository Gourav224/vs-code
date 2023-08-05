#include<string.h>
void main()
{
	char a[100];
	int i;
	clrscr();
	printf("enter a string\n");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(i==0)
		{
			if(a[i]>='a' && a[i]<='z')
			{
				a[i]=a[i]-32;
			}
		}
		else if(a[i]==' ')
		{
			i++;
			if(a[i]>='a' && a[i]<='z')
			{
				a[i]=a[i]-32;
			}
		}
	}
	printf("new string is:\n%s",a);
	getch();

}