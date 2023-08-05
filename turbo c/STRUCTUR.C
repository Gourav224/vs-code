#include<stdio.h>
#include<stdlib.h>
#include<time.h>
struct student
{
	int rn;
	int marks[5];
}stt;
struct student st[3];
int main()
{
	int i,j;
	srand(time(0));
	printf("**********Enter records of five students*********\n");
	for(i=0;i<1;i++)
	{
		printf("Enter Roll no and marks of %d student ",i+1);
		scanf("%d",&st[i].rn);
		fflush(stdin);
		printf("Enter marks of hindi,eng,maths,phy,computer\n");
		for(j=0;j<5;j++)
		{
			//printf("");
			st[i].marks[j]=1+rand()%30+60;
			fflush(stdin);
			//scanf("%d",&st[j].marks[j]);
		}
	}
	printf("\nEntered records are \n\tRoll No.\tTotal Marks\tHindi\tEng\tMaths\tPhy\tComp\n");
	for(i=0;i<1;i++)
	{
		printf("\t%d\t",st[i].rn);
		for(j=0;j<5;j++)
			printf("\t%d",st[i].marks[j]);
		printf("\n");
	}
	return 0;

}