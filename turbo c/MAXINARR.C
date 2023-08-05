#include"array.h"
#define size 10
int id=0;
int maxbyrec(int *a,int max)
{
	int maxx=a[id];

	if(id!=size)
		if(maxx<a[id++]){
			//max=a[id++];
			maxbyrec(a,maxx);
		}
	return maxx;

}
void main()
{
	int a[size],max;
	clrscr();
	gen_array(a,size);
	a[size-1]=90;
	max=a[0];
	print_array(a,size);
	max=maxbyrec(a,max);
	printf("Max is %d",max);
	getch();
}