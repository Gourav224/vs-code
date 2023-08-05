void main()
{
	char *str[45];
	int i;
	clrscr();
	for(i=0;i<15;i++)
		gets(str[i]);

	for(i=0;i<15;i++)      {
		//puts(str[i]);
		printf("\t%d->%u",i+1,&str[i]);
	}
	getch();

}