#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{     float a,b;
	int c;
		do
	{       clrscr();
		printf("Enter two numbers : ");
		scanf("%f%f",&a,&b);
		printf(" sum = %.2f",a*b);
		printf("\n For adding again press 1 or exit press 0\n ");
		scanf("%d",&c);

	}       while(c==1);


}