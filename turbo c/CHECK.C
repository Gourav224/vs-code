/*
#include<stdlib.h>
#define s 10
void main()
{
	int a[s],i,c=0,t,j;
	clrscr();
	randomize();
	printf("Array is  ");
	for(i=0;i<s;i++)
	{
	   a[i]=random(10)+1;
	   printf(" %d ",a[i]);
	}

	for(i=0;i<s;i++)
	{
		t=a[i];
		c=0;
		    for(j=0;j<s;j++)
			{
				if(a[j]==t)
				c++;
			}

			printf("\nfrequency of %d is %d",a[i],c);


	}
	getch();
}




*/                     /*
#include<stdlib.h>
#define s 5
void main()
{
	int a[s],b[s],i,j,k,f,t;
	clrscr();
	randomize();
	printf("Array A is  ");
	for(i=0;i<s;i++)
	{
	   a[i]=random(5)+1;
	   printf(" %d ",a[i]);
	}
	printf("\n");
	printf("Array B is  ");
	for(i=0;i<s;i++)
	{
	   b[i]=random(5)+1;
	   printf(" %d ",b[i]);
	}
	printf("\n");
	printf("A union B :");
	for(i=0;i<s;i++)
	{
	  // for(j=0;j<s;j++)
	   {
	   if(a[i]==b[i])
	     printf("%d ",a[i]);
	    else
	     printf("%d %d",a[i],b[i]);
	    }

	}
	getch();
}
		      */
	    /*

#include<math.h>
#include<stdlib.h>
#define s 5
void main()
{
	int a[s],b[s],i,j,k,t;
	clrscr();
	randomize();
	printf("Array A is  ");
	for(i=0;i<s;i++)
	{
	   a[i]=random(5)+1;
	   printf(" %d ",a[i]);
	}
	printf("\n");
	printf("Array B is  ");
	for(j=0;j<s;j++)
	{
	   b[j]=random(5)+1;
	   printf(" %d ",b[j]);
	}
	printf("\n");
	printf("A intersection B :");
	for(i=0;i<s;i++)

		{
		      for(j=0;j<s;j++)
		      {
			if(a[i]==b[j])
			{       t=a[i];

			      printf(" %d ",a[i]);
				break;
			}
		      }

		}
	getch();
}
	   */
