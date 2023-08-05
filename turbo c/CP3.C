#include<stdlib.h>
#include<string.h>

void captcha(char *a)
{
	int i=0;
		randomize();
		a[i]=random(26)+65;
		i++;
		a[i]=random(10)+48;
		i++;
		a[i]=random(26)+97;
		i++;
		a[i]=random(15)+33;
		i++;
		a[i]='\0';


}

void captcha2(char *a)
{
	int i=0;
		randomize();
		a[i]=random(10)+48;
		i++;
		a[i]=random(26)+65;
		i++;
		a[i]=random(26)+97;
		i++;
		a[i]=random(26)+65;
		i++;
		a[i]=random(15)+33;
		i++;
		a[i]=random(10)+48;
		i++;
		a[i]='\0';

}




void main()
{
	int i=1;
	char *cap,*b;
	clrscr();
	do
	{
		printf("\nCaptcha :  ");
		captcha(cap);
		if(i>4)
		captcha2(cap);
		puts(cap);
		printf("\nEnter captcha : ");
		gets(b);
		textcolor(i);
		if(!strcmp(cap,b))
		{
			i=0;
			cprintf("\n----------Not a Bot--------");
		}
		else
		{	i++;
			cprintf("\n********You are a Bot*********");
		}


	}while(i);

	getch();
}