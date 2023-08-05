void main()
{
	int ch,r;
	clrscr();
	printf("Enter your choice: \n1 for Area\n2 for Volume\n\t");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
		printf("\t\tArea: ");
		printf("\nEnter your choice: \n1 for Circle\n2 for Square\n3 for Rectangle\n\t\t");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			printf("\nEnter radius of circle: \n");
			scanf("%d",&r);
			printf("\nArea of circle is (ãrý)%f\n",3.14*r*r);
			getch();
		}
		break;
		case 2:
		printf("\tVolume");
		break;
		case 3:
		printf("Exit");
		break;
		default:
		printf("Wrong input");
	}
	getch();
}