void main()

{
      int s=0,n,r,t;
      clrscr();
      printf("Palindrome b/w 1-2000 = ");
      for(n=1;n<=2000;n++)
      {       t=n;
	      s=0;
	       while(t!=0)
	     {  r=t%10;
	       s=10*s+r;
	       t=t/10;
	     }
	     if(n==s)
	     printf("%d,",n);

      }
      getch();

}