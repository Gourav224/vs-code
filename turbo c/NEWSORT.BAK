#include"array.h"
#define size 50
void main()
{
	int a[size],i,j,c=6,f=0;
	clrscr();
	gen_array(a,size);
	sort(a,size);
	print_array(a,size);
	for(i=0;i<size;i++){
		if(a[i]==c){
			f++;
			//break;
		}
	}
	if(f!=0)
		printf("%d Found %d times in array",c,f);
	else
		printf("%d Not found in array",c);

	getch();
}
/*
void main()
{
	int a[size]={2,3,5,7,8},i,j,temp,c=0;
	clrscr();
	//gen_array(a,size);
	print_array(a,size);
	for(i=0;i<size;i++){
		for(j=0;j<size-1-i;j++){
			printf("%d ",++c);
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	print_array(a,size);

	getch();

}
*/

/*
void main(){
	int a[size]={7,6,11,15,17},i,j,m,mp=0,count=0;
	clrscr();
	//gen_array(a,size);
	print_array(a,size);

	for(j=0;j<size;j++)
	{
		m=a[0];
		mp=0;
		for(i=0;i<size-j;i++)
		{

			//printf("%d ",++count);
			if(a[i]>m){
				m=a[i];
				mp=i;
			}
		}

			printf("%d ",++count);
			a[mp]=a[size-1-j];
			a[size-1-j]=m;

	}
	print_array(a,size);


	getch();
}
*/