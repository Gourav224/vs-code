
#include<stdio.h>
int fun()
{
	static int i=0;
	printf("\n %d ",i);
	i++;

}
int main()
{
	fun();
	fun();
	fun();
	fun();
	
}