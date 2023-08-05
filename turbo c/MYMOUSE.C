// C program to restrict the mouse
// pointer
#include <conio.h>
#include <dos.h>
#include <graphics.h>
#include <stdio.h>
union REGS in, out;

// Function to initialize the mouse
// pointer using graphics
int initMouse()
{
	in.x.ax = 0;
	int86(0X33, &in, &out);

	return out.x.ax;
}

// Function to display the mouse
// pointer using graphics
void showMouse()
{
	in.x.ax = 1;
	int86(0X33, &in, &out);
}

// Function to restrict the mouse
// pointers
void restrictMouse(int x1, int y1,
				int x2, int y2)
{
	// Set Horizontal limit
	in.x.ax = 7;
	in.x.cx = x1;
	in.x.dx = x2;
	int86(0X33, &in, &out);

	// Set Vertical limit
	in.x.ax = 8;
	in.x.cx = y1;
	in.x.dx = y2;
	int86(0X33, &in, &out);
}

// Driver Code
void main()
{
	int status, i, gd = DETECT, gm;

	// Initialize graphics
	initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

	// Get the status of the mouse
	status = initMouse();

	// Check if mouse is available or not
	if (status == 0)
		printf("Mouse support "
			"not available.\n");
	else {
		showMouse();

		// Draw rectangle for displaying
		// the boundary
		rectangle(100, 70, 400, 200);
		restrictMouse(100, 70, 400, 200);
	}
	getch();

	// Close the graphics
	closegraph();

	return 0;
}
