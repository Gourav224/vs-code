#include<stdio.h>
struct book
{
char book_name[30];
char author[30];
int book_id;
float price;
};

int main()
{

struct book b[3]; // Here b is a variable of structure book
int i;
printf("Welcome to DataFlair tutorials!\n\n");

printf("Enter the record of 5 books:\n");
for(i = 0; i < 3; i ++)
{
printf("Enter the book name: ");
scanf("%s",b[i].book_name);
fgets(b[i].book_name, 80, stdin);
printf("Enter the author name: ");
fgets(b[i].author, 80, stdin); 
printf("Enter the book ID: ");
scanf("%d",&b[i].book_id);
printf("Enter the book price: ");
scanf("%f",&b[i].price);
fflush(stdin);
}
printf("\nThe details of the book are:\n\n");
for(i = 0; i < 3; i++)
{
printf("The book name is: ");
puts(b[i].book_name);
printf("The author name is: ");
puts(b[i].author);
printf("The book ID is: %d\n",b[i].book_id);
printf("The book price is: %0.2f\n",b[i].price);
}
return 0;
}