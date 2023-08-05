#include<stdio.h>
int main()
{
    int a[]={1,2,2,4,6,8,9};
    int b[]={-2,2,3,4,8,9,10};
    int count=sizeof(a)/sizeof(a[0]),size=sizeof(b)/sizeof(b[0]);
    int i,j,c[100],k=0;
    // intersection of two array
    for ( i = 0; i < count;i++ )
    {
        for ( j = 0; j < size; j++)
        {
            if (a[i]==b[j])
            {
                c[k++]=b[j];
            }
            
        }
        
    }
    printf("\nintersection Array is ");
    for ( i = 0; i < k; i++)
    {
        printf(" %d ",c[i]);
    }
    

}