#include<stdlib.h>
void sort(int *a, int size){

	int i,j,temp;
	for(i=0;i<size;i++){
		for(j=0;j<size-1-i;j++){

			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}


void gen_array(int *a, int size){
	int i;
	randomize();
	for(i=0;i<size;i++)
		a[i]=random(20);
	//print_array(a,size);
}


void print_array(int *a, int s)
{
	int i;
	printf("\n");
	for(i=0;i<s;i++){
		printf("%d ",a[i]);
	}
	printf("\n");

}
