#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main(void)
{
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;
   int midx, midy;
   int radius = 1;

   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "c:\\turboc3\\bgi");
   midx = getmaxx() / 2;
   midy = getmaxy() / 2;
   setcolor(getmaxcolor());

   /* draw the circle */
   randomize();
   while(!kbhit()) {
	sound(random(490));

	setcolor(random(50));
	circle(random(500), random(300), random(100));
	delay(20);
   }
   /* clean up */
   getch();
   closegraph();
   nosound();
   return 0;
}



/*
void main()
{
	int i,n,t,j=11;
	clrscr();
	//printf("Enter a number : ");
	//scanf("%d",&n);
	while(j++<=1000)
	for(i=1;i<=10;i++)
	{
		t=j*i;
		printf("%d\t",t);
	}
	getch();

}

*/




/*
void main()
{
char c;
clrscr();
printf("enter any charcater");
scanf("%c",&c);
if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
{
printf("%c is an alphabet",c);
}
else if(c>='0'&&c<='9')
{
printf("%c is a digit",c);
}
else
{
printf("%c is a special character",c);
}
getch();
}
*/