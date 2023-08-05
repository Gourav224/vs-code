struct student
{
	int rn;
	int per;
};
void st_det(struct student st)
{
	st.per=st.per+10;
	printf("\nRoll number = %d\nPercentage = %d\n",st.rn,st.per);
}
void main()
{
	struct student s;
	clrscr();
	printf("\nEnter roll number and percentage : \n");
	scanf("%d%d",&s.rn,&s.per);
	st_det(s);
	printf("\nMain Fun Per = %d\n",s.per);
	getch();
}