#define size 9
//#include"sdtlib.h"
void merging(int *a, int lb, int mid, int ub)
{
	int b[100],i,j,k;
	i=lb;
	j=mid+1;
	k=lb;
	while(i<=mid && j<=ub)
	{
		if(a[i]<=a[j])
		{
			b[k]=a[i];
			i++;
		}
		else
		{
			b[k]=a[j];
			j++;
		}
		k++;
	}
	while(i<=mid)
	{
		b[k]=a[i];
		k++,i++;
	}
	while(j<=ub)
	{
		b[k]=a[j];
		k++,j++;
	}
	k=0;
	while(k<=ub)
	{
		a[k]=b[k];
		k++;
	}
}

void mergeSort(int a[], int lb, int ub)
{
	int mid;
	if(lb<ub)
	{
		mid=(lb+ub)/2;
		mergeSort(a,lb,mid);
		mergeSort(a,mid+1,ub);
		merging(a,lb,mid,ub);
	}
}

void main()
{
	int a[size]={5,7,8,9,2,3,8,2,1},lb=0,ub=size-1,i;
	clrscr();
	printf("Unsorted Array is : ");
	//randomize();
	for(i=0;i<=ub;i++)
	{
		//a[i]=random(100)%20;
		printf("%d ",a[i]);
	}
	mergeSort(a,lb,ub);

	printf("\nSorted Array is : ");
	//randomize();
	for(i=0;i<=ub;i++)
	{

		printf("%d ",a[i]);
	}
	getch();
}

