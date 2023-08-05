#include<iostream>
using namespace std;
int main()
{
    int map[5];
    for (int i = -5; i < 5; i++)
    {
        cin>>map[i];
    }
    for (int i = -5; i < 5; i++)
    {
        cout<<map[i];
    }
    
    return 0;
}