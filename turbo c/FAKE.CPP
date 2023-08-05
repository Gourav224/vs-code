#include<iostream.h>
#include<conio.h>
struct node
{
	int i;

	public:
	node(){cout<<"cout";}
	void fun()
	{
		i=10;
		cout<<"Hi "<<i;
	}
};
void main()
{
	struct node n;
	//clrscr();
	n.fun();
	getch();
}