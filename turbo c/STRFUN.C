char length(char *s)
{      int n=0,i=0;
       char t;
       while(s[n]!='\0')
	n++;
       n--;
       while(i<n)
       {
	 t=s[i];
	 s[i]=s[n];
	 s[n] =t;
	 n--,i++;
       }
       return(*s);
}
void main()
{
	char s[20],*a;
	int l;
	clrscr();
	printf("Enter the name  ");
	gets(s);
	a=length(s);
	printf("Length of string %s ",a);
	getch();

}