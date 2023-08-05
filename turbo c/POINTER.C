int fact(int n)
{
	int f;
	if(n==1)
	return(1);
	else
	{  while(n>0)
	 { f=n*fact(n-1);
	  n++; }
	  return(f);
	}
}
void main()
{
	int n,f;
	clrscr();
	printf("Enter the number : ");
	scanf("%d",&n);
	f=fact(n);
	printf("Factorial of %d is %d",n,f);
	getch();
}