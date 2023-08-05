void main()
{
	int n,r,s=0,t;
	clrscr();
	printf("Enter a number : ");
	scanf("%d",&n);
	t=n;
	while(n>0)
	{ r=n%10;
	  s=(r*r*r)+s;
	  n=n/10;
	}
	if(t==s)
	printf("Number is Armstrong");
	else
	printf("Number is not Armstrong");
	getch();
}























/*
void main()
{
	int n,s=0,r,t;
	clrscr();
	printf("Enter a number: ");
	scanf("%d",&n);
	t=n;
	while(n!=0)
	{   r=n%10;
	    s=10*s+r ;
	    n=n/10;

	}
	if(t==s)
	printf("Numbre is palindorme");
	else
	printf("Number is not  palindrome");
	printf("\nReverse Number = %d",s);
	getch();

}

  */


















/*
void main()
{
	  int n,s=0,m,c=0;
	  float f;
	   clrscr();
	   printf("Enter a number to get total of a number : ");
	   scanf("%d",&n);
	   while(n>0)
	   {
		m=n%10;
		s=m+s;
		n=n/10;
		c++;
		}
	      f=(float)s/c;
	   printf("The sum of number of digits = %f",f
	   );
	   getch();
}
  */





















/*
 void main()
 {
	int n,s=0;
	clrscr();
	printf("Enter a number to get no. of digits: ");
	scanf("%d",&n);
	while(n!=0)
	{
		n=n/10;
		s++;

	}
	printf("Total digits is %d",s);
	getch();
 }


void main()
{
	int n,f=1;
	clrscr();
	printf("Enter a number to get fatorial : ");
	scanf("%d",&n);
	while(n!=1)
	{
	  f=f*n;
	  n--;
	 }
	printf("factorial = %d",f);
	getch();
}
   */