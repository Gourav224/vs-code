#include<math.h>

void main()
{
	int a=10,b=2,temp;
	float f;
	clrscr();
	f=(float)5/2;
	printf("%f\n",f);
	printf("\n%d\n",sizeof(7.5f));
	//using third variable
	/*temp=a;
	a=b;
	b=temp;
	*/

	/*
	//without using third variable
	a=a+b;
	b=a-b;
	a=a-b;
	*/
	/*
	a=a^b;
	b=a^b;
	a=a^b;
	*/
	//temp = a^b;
	/*b=1;
	temp=a>>b;
	*/


	printf("a=%d, b=%d, temp = %d",a,b,temp);
	getch();
}

/*
void main()
{
	int a,b,c;
	clrscr();
	printf("Enter the value of a and b (a to the power b) : ");
	scanf("%d%d",&a,&b);
	c=pow(a,b);
	printf("result = %d",c);
	getch();
}
*/
/*
// sqrt function
void main()
{
	float a,b;
	clrscr();
	printf("Enter a number to calculate square root : ");
	scanf("riya%f",&a);
	b=sqrt(a);
	printf("Square root of %f is %.2f",a,b);
	getch();
}
*/