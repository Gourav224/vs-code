void main(){
	char s[40],t;
	int i=0,l=0;
	puts("Enter your name: ");
	gets(s);
	while(s[l]){
		l++;
	}
	l--;
	while(i<l){
		t=s[i];
		s[i]=s[l];
		s[l]=t;
		i++;
		l--;
	}
	printf("Reverse Name is %s",s);
	getch();
}

/*
void main(){
	char pas[30],repas[30];
	int i=0,dif=0;
	clrscr();

	puts("Enter password : ");
	gets(pas);
	puts("Re enter password : ");
	gets(repas);

	while(pas[i]!='\0'){
		dif=pas[i]-repas[i];
		i++;
		if(dif!=0)
			break;
	}
	if(dif==0)
		printf("\nPassword changed suceessfully");
	else
		printf("\nPassword not correct");
	getch();

} */