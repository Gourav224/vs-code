#include"array.h"
void main(){

	int a[10]={2,2,2,2,2,2,2,2,2,2},size=10,i;
	int mf=0,ms=0;
	clrscr();
	//gen_array(a,size);
	print_array(a,size);

	for(i=0;i<size;i++){
		if(a[i]>mf){
			ms=mf;
			mf=a[i];
		}
		else if(a[i]!=mf && a[i]>ms)
			ms=a[i];
	}
	if(ms!=0)
		printf("\nsecond largest element in array is %d\n",ms);
	else
		printf("\nAll elements are same in array\n");
	getch();
}