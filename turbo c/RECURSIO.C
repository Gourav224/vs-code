int revrse()
{
	int n,r,s=0;
	if(n>9&&n<-9&&n!=0)
	{   r=n%10;
	    s=s*10+r;
	    n=n/10        ;
	}
	return(revrse(n));

}
void main()
{
	int r,n;
	clrscr();
	printf("Enter a number : ");
	scanf("%d",&n);
	r=revrse(n);
	printf("Reverse number is %d ",r);
	getch();
}