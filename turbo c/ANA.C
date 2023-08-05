#include <stdio.h>
#include <string.h>
#include <conio.h> 
#include<stdlib.h>
int main()
{
  	char str1[100], str2[100], ch,temp;
  	int i, len1,len2, j;
 
  	printf("Please Enter first String :  ");
  	gets(str1);
	printf("\n");
  	printf("Please Enter second String :  ");
  	gets(str2);
  
	len1 = strlen(str1);
	len2 = strlen(str2); 
	 
	 if(len1 != len2){
	    printf("given strings are not anagram");
	    exit(0);
	 }
	    
	 for (i = 0; i < len1-1; i++) {
      for (j = i+1; j < len1; j++) {
         if (str1[i] > str1[j]) {
            temp  = str1[i];
            str1[i] = str1[j];
            str1[j] = temp;
         }
         if (str2[i] > str2[j]) {
            temp  = str2[i];
            str2[i] = str2[j];
            str2[j] = temp;
         }
      }
   }   
	    
	for(i = 0; i<len1; i++) {
      if(str1[i] != str2[i]) {    
         printf("Strings are not anagram \n", str1, str2);
         return 0;
      }
   }    
	   	
  	printf("Given Strings are anagram \n");
  	getch();
} 