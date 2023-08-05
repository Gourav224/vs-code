/*
Kth smallest element in array
array.h include gen_array(array, size) for new array
		print_array(array, size) to print the array

*/

#include"array.h"



void kth_smallest(int *a, int k){
	int i;
	int min;
	for(i=0;i<size;i++){
		if(k>size/2){

		}
		else{
			if(a[i]<min)
				min=a[i];

		}
	}

}

#define size 6
void main(){
	int a[size],k=4,i;
	clrscr();
	gen_array(a,size);
	print_array(a,size);

	kth_smallest(a,k);

	getch();
}