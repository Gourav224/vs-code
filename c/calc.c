#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int n;
   // clrscr();
    printf("Menu:\nPress 1 for Perimeter.\nPress 2 for Area.\nPress 3 for Volume\n");
    scanf("%d",&n);
    switch (n)
    {
        case 1:
        {
            printf("Menu \nPress 1 for circle.\nPress 2 for Rectangle.\nPress 3 for square.\nPress 4 for Triangle");
            scanf("%d",&n);
            {
                switch (n)
                {
                case 1:
                {
                    float r,a;
                    printf("Enter The radius of circle : ");
                    scanf("%f",&r);
                    printf("circumfrence of circle = %.3f",3.14*2*r);     
                    break;
                }
                case 2:
                {
                    float l,b;
                    printf("Enter length and breadth of Rectangle ");

                }
                default:
                    break;
                }
            } 
            break;
        }
        case 2:
        {
            printf("Press 1 for 2D shapes\nPress 2 fr 3D Shapes\n");
            scanf("%d",&n);
            break;    
        }   
        case 3:
        {
            printf("Press 1 for circle\nPress 2 for Cube\nPress 3 for Cuboid\nPress 4 for cone \nPress 5 for cylider ");
            scanf("%d",&n);
        }
        default:
        break;
    }
    getch();

}