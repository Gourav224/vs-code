#include <stdio.h>
void toh(int d, char beg, char temp, char end)
{
	if(d>=1)
	{
		printf("\nMove disk %d from %c to %c",d,beg,end);
		toh(d-1,beg,end,temp);
		printf("\nMove disk %d from %c to %c",d,beg,end);
		toh(d-1,temp,beg,end);
	}
}
void main()
{
	int disks=3;
	clrscr();
	toh(disks,'A','B','C');
	getch();
}
