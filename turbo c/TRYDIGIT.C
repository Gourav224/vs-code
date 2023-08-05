#include<string.h>
void main()
{
	char a[20];
	char *single[] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
	char *doublee[] = {"","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
	char *triple[] = {"","","twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninty"};
	clrscr();
	printf("enter a number");
	scanf("%s",&a);
	{
		int len = strlen(a);
		int num;
		if (len==1)
		{
			num = a[0]-48;
			printf("%s",single[num]);
		}
		if (len==2)
		{
			num = (a[0]-48)+(a[1]-48);
			printf("%s",doublee[num]);
		}
		if (len==3)

		{
			num = (a[0]-48)+(a[1]-48)+(a[2]-48);
			printf("%s",triple[num]);
		}
	}
getch();
}