#include <stdio.h>

#define max 10

int a[11] = { 10, 14, 19, 26, 27, 31, 33, 35, 42, 44, 0 };
int b[10];

void merging(int lb, int mid, int ub) {
   int l1, l2, i;

   l1 = lb, l2 = mid + 1, i = lb;
      while(l1<=mid && l2<=ub)
      {
	if(a[l1] <= a[l2])
	 b[i] = a[l1++];
	else
	 b[i] = a[l2++];
	 i++;
      }

   while(l1 <= mid)
      b[i++] = a[l1++];

   while(l2 <= ub)
      b[i++] = a[l2++];

   for(i = lb; i <= ub; i++)
      a[i] = b[i];
}

void sort(int lb, int ub) {
   int mid;

   if(lb < ub) {
      mid = (lb + ub) / 2;
      sort(lb, mid);
      sort(mid+1, ub);
      merging(lb, mid, ub);
   } else { 
      return;
   }   
}

int main() { 
   int i;

   printf("List before sorting\n");
   
   for(i = 0; i <= max; i++)
      printf("%d ", a[i]);

   sort(0, max);

   printf("\nList after sorting\n");
   
   for(i = 0; i <= max; i++)
      printf("%d ", a[i]);
}