#include<stdlib.h>

/*
#define sqr(a) a*a
void main()
{
	int n=7;
	clrscr(),
	printf("%d",sqr(5+4)),      // 5+4*5+4
	getch();
}


*/
#define m 9
void main(){
	int a[m],b[m],i,t=0;
	clrscr();
	randomize();

	for(i=0;i<m;i++){
		a[i]=random(15);
		printf("%d ",a[i]);
	}

	printf("\nNew Array is \n");
	for(i=0;i<m/2;i++)                  //a->  6 16 8 7 6 8 9 9 8 7 4 2 30
	{
		t=a[i];
		a[i]=a[m-i-1];
		a[m-i-1]=t;

		//printf("%d ",b[i]);

	}
	for(i=0;i<m;i++){

		printf("%d ",a[i]);
	}



	getch();


}
