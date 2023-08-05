#include<iostream>
using namespace std;
int main()
{
    int n,s=0;
    for ( n = 1; n < 101; n++)
    {
        s+=n;
    }
    cout <<"sum = "<<s;
    return 0;
}