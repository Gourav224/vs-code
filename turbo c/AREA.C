#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{	int n;
	clrscr();
	printf(" press 1 for perimeter\n press 2 for area\n press 3 for vloume");
	scanf("%d",&n);
	switch(n)
	{	case 1:
	       { float P,a,b,c,l,r,s;
	       clrscr();
		printf("/nPress 1 for rectangle  \n press 2 for square \n Press 3 for Circle \n press 4 for triangle \n press 5 for mainmenu");
		scanf("%d",&n);
		{
		if(n==1)
		{ printf("Perimeter of Rectangle = 2x(l+b) \n Enter the Length and breadth");
		scanf("%f%f",&l,&b);
		P=2*(l+b);
		printf("\nPerimeter = %.2f",P); }
		else if(n==2)
		{ printf("Perimeter of square = 4*s \n Enter a side of square");
		  scanf("%f",&s);
		  P=4*s;
		  printf("\nPerimeter = %.2f",P);
		}
		else if(n==3)
		{ printf("circumference  of circle = 2ãr \n Enter the radius of circle");
		  scanf("%f",&r);
		  P=2*3.14*r;
		   printf("\nCircumference = %.2f",P);	}
		 else if(n==4)
		 { printf("Perimeter of triangle = a+b+c /n Enter the three side of triangle");
		   scanf("%f%f%f",&a,&b,&c);
		   P=a+b+c;
		   printf("\nPerimeter = %.2f",P);

		 }
	       }
		 break;
		}
		}
		getch();
		getch();
		getch();

}
