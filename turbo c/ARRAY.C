#include<stdlib.h>
void main()
{
	int a[15],i,j,f=0;
	clrscr();
	printf("Numbers in array are   ");
	randomize();
	for(i=0;i<15;i++)
	{ a[i]=random(2000);
	printf("%d,",a[i]);
	}

	for(i=0;i<15;i++)
       {    a[j]=a[i];

	for(i=0;i<15;i++)
	 {
	   if( a[j]>a[i] || a[j]<a[i])
	       f=1;
	}

	  }  if(f==1)
	    printf("\nGreater number is %d" ,a[i]);
	 getch();

	 }




























/*
#include<stdlib.h>
void main()
{
	int a[10],i,s=0;
	clrscr();
	printf("Numbers are\n");
	randomize();

	for(i=0;i<10;i++)
	{
	  a[i]=random(1000)+1;
	  printf("a[%d] = %d\n,",i,a[i]);
	}
	for(i=0;i<10;i++)
	{
	   s=s+a[i];
	}
	printf("\nsum = %d",s);
	getch();
} */