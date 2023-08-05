void main()
{
	char fname[40],lname[40];
	int i,c;
	clrscr();
	printf("Enter first name : ");
	gets(fname);
	printf("Enter last name : ");
	gets(lname);
	//length
	i=strlen(fname);
	//string copy
	//strcpy(fname,lname);

	//string compare
	c=strcmp(fname,lname);
	printf("%d",c);

	//string concatenation
	//strcat(fname,lname);
	puts(fname);

	printf("Number of characters in first name: %d",i);
	getch();
}