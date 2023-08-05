#include<dos.h>
void main()
{
	union REGS i,o;
	i.x.ax=1;
	int86(51d,&i,&o);
	getch();
}