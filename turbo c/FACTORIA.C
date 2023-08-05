void main ()
{
	double  n,i;
	clrscr();
       for(n=1;n<=10;n++)
	{    int f=1;
	  for(i=1;i<=n;i++)
	  {

		f=f*i;

	  }
	  printf("Factorial of %d is %d \n",n,f);

       }
	getch();

	}
