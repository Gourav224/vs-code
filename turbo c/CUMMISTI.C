void main()

{
	float sale,com;
	clrscr();
	printf("Enter the total sale :");
	scanf("%f",&sale);
	if(sale>500000)
	  com=10;                     //com. in %
		  else if(sale>250000 && sale<500000)
		       com=7;
		      else if(sale>100000 && sale<250000)
			   com=5;
				else if(sale>50000 && sale<100000)
					com=2;
					else if(sale<50000)
						com=0 ;
		 com=(sale*com)/100;
	   printf("total commission = %.2f",com);
	getch();
}