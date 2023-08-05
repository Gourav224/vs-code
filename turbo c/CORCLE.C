#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main(void)
{
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;
   int midx=0, midy=0;
   int radius = 100;
   clrscr();
   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, C:\\MinGW\\BGI");

   /* read result of initialization */
   errorcode = graphresult();
   if (errorcode != grOk)  /* an error occurred */
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1); /* terminate with an error code */
   }
   while(midx!=100)
   {
   midx = getmaxx() / 2;
   midy = getmaxy() / 2;
   setcolor(getmaxcolor());
 //  setcolor(midx+midy);
   /* draw the circle */
   circle(midx, midy, radius);
    }
   /* clean up */
   getch();
   closegraph();
   nosound();
   return 0;
}

