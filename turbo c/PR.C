#include<stdio.h>
void main()
{
	float side,area;
	clrscr();
	printf("Enter side of square ");
	scanf("%d",&side);
	area=side*side;
	printf("Area of square %f",area);
	getch();
}