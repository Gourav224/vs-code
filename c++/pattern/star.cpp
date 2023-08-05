#include<iostream>
using namespace std;
int main()
{
    int i,j,n=4;
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < i; j++)
        {
            cout<<"  ";
        }
        for (j = i; j < n; j++)
        {
            cout<<"* ";
        }
        for (j = i+1; j < n; j++)
        {
            cout<<"* ";
        }
        
        cout<<"\n";        
    }
    for ( i = 1; i < n; i++)
    {
        for ( j = i; j < n-1; j++)
        {
            cout<<"  ";
        }
        for (j = 0; j < i+1; j++)
        {
            cout<<"* ";
        }
        for (j = 0; j < i; j++)
        {
            cout<<"* ";
        }       
        cout<<"\n";        
    }
    
    return 0;
}