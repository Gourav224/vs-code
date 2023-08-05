#include<stdio.h>
#include<conio.h>
void main()
{
	   float h,e,m,s,c,t,p,Grade,A,B,C,D,E;
	   clrscr();
	   printf("enter number of five subject:");
	   scanf("%f%f%f%f%f",&h,&e,&m,&s,&c);
	   t=h+e+m+s+c;
	   p=t/5;
	   printf("total number out of 500=%.1f \n Percentage=%.2f",t,p);
	   if (p>90)
	      printf("\nGrade=A");
	       else if(p<91 && p>70)
		 printf("\nGrade=B");
		 else if(p>50 && p<71)
		  printf("\nGrade = C");
		  else if(p<51 && p>33)
		  printf("\nGrade=D");
		       else
		       printf("\nGrade=E") ;
		       getch();
}