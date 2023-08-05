void main()
{
	int a=10,b;
	clrscr();
	b=a++ + ++a + a++;
	printf("a = %d, b = %d",a,b);
	getch();
}