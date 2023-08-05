void onedigit(int a)
{
	switch(a)
	{
		case 1:
		printf(" One ");
		break;
		case 2:
		printf(" Two ");
		break;
		case 3:
		printf(" Three ");
		break;
		case 4:
		printf(" four ");
		break;
		case 5:
		printf(" five ");
		break;
		case 6:
		printf(" six ");
		break;
		case 7:
		printf(" seven ");
		break;
		case 8:
		printf(" eight ");
		break;
		case 9:
		printf(" nine ");
		break;
		case 0:
		printf("");
	}
}
void teendigit(int a)
{
	switch(a)
	{
		case 11:
		printf(" eleven ");
		break;
		case 12:
		printf(" Twelve ");
		break;
		case 13:
		printf(" Thirteen ");
		break;
		case 14:
		printf(" fourteen ");
		break;
		case 15:
		printf(" fifteen ");
		break;
		case 16:
		printf(" sixteen ");
		break;
		case 17:
		printf(" seventeen ");
		break;
		case 18:
		printf(" eighteen ");
		break;
		case 19:
		printf(" nineteen ");
		break;
	   }
}
void twodigit(int b)
{
	switch(b)
	{
		case 10:
		printf(" Ten ");
		break;
		case 20:
		printf(" Twenty ");
		break;
		case 30:
		printf(" Thirty ");
		break;
		case 40:
		printf(" fourty ");
		break;
		case 50:
		printf(" fifty ");
		break;
		case 60:
		printf(" sixty ");
		break;
		case 70:
		printf(" seventy ");
		break;
		case 80:
		printf(" eighty ");
		break;
		case 90:
		printf(" ninty ");
		break;
	}
}
void threedigit(int n)
{
	switch(n)
	{
		case 100:
		printf(" Hundred ");
		break;
		case 1000:
		printf(" Thousand ");
		break;
		case 100000:
		printf(" lac ");
		break;
		case 10000000:
		printf(" crore ");
		break;
	}
}
int reverse(int n)
{       int s=0,r;
	while(n!=0)
	{
		r=n%10;
		s=s*10+r;
		n=n/10;
	}
	return s;
}
void main()
{
	int n,t,a,c;
	clrscr();
	printf("Enter number:");
	scanf("%d",&a);
		n=a;
		if(n>0 && n<11)
		{
			onedigit(n);
			twodigit(n);
		}
		if(n>10 && n<21)
		{
			teendigit(n);
			twodigit(n);
		}
		if(n>20 && n<100)
		{
			int m;
			t=reverse(n);
			c=0;
//			printf("%d\n",t);

			while(t!=0)
			{

				if(c==0)
				{
					m=t%10;
					twodigit(m*10);
				}
				if(c==1)
				{
					m=t%10;
					onedigit(m);
				}
				t=t/10;
				c++;
			}
		}
			if(n>99 && n<1000)
		{
			int m;
			t=reverse(n);
			c=0;
  //			printf("%d",t);
			while(t!=0)
			{
				if(c==1)
				{
					m=t%10;
					twodigit(m*10);
				}
				if(c==2)
				{
					m=t%10;
					onedigit(m);
				}
				if(c==0)
				{
				    m=t%10;
				    onedigit(m);
				    threedigit(100);
				}
				t=t/10;
				c++;
			}
		}
	   if(n>999 && n<10000)
	      {
			int m;
			t=reverse(n);
			c=0;
		      //	printf("%d",t);
			while(t!=0)
			{
				if(c==2)
				{
					m=t%10;
					twodigit(m*10);
				}
				if(c==3)
				{
					m=t%10;
					onedigit(m);
				}
				if(c==1)
				{
				    m=t%10;
				    onedigit(m);
				    if(m!=0)
				    threedigit(100);
				}
				if(c==0)
				{
					m=t%10;
					onedigit(m);
					threedigit(1000);
				}
				t=t/10;
				c++;
			}
	      }

getch();
}
