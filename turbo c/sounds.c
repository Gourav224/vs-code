#include <conio.h>
#include <graphics.h>
#include <stdio.h>
#include <stdlib.h>

// Driver Code
void main()
{
	int gd = DETECT, gm, i;
	int font = 7, direction = 0;
	int font_size = 4, r;
	char press, key, num[1];
	char value[6] = "624531";

	// Initialize the graphics path
	initgraph(&gd, &gm, "C:\\TC\\BGI");

	// Heading
	setcolor(WHITE);
	settextstyle(font, direction,
				font_size);

	outtextxy(100, 10,
			"-----DICE SIMULATOR-----");

	setcolor(2);
	settextstyle(10, 0, 1);
	outtextxy(120, 180,
			"\"enter (space) to"
			" throw dice\"");
	press = ' ';

	// Iterate until ask to throw
	// the dice
	while (1) {
		key = getch();
		if (press == key) {

			// Beep sound after
			// throwing dice
			sound(3000);
			delay(10);
			nosound();
			cleardevice();
			for (i = 0; i < 40; i++) {
				delay(5);

				// Rectangle
				rectangle(270 + i, 190 + i,
						350 - i, 270 - i);
			}

			setcolor(WHITE);
			settextstyle(font, direction,
						font_size);
			outtextxy(100, 10,
					"-----DICE SIMULATOR-----");

			setcolor(10);
			settextstyle(10, 0, 1);

			// Print the message to
			// display the game
			outtextxy(5, 60,
					"\"press 0 (zero) "
					"for exit.\"");
			outtextxy(
				5, 100,
				"\"enter (space) to "
				"throw dice again.\"\n");

			for (i = 1; i < 40; i++) {
				delay(5);
				setcolor(1);

				// Rectangle
				rectangle(310 - i, 230 - i,
						310 + i, 230 + i);
			}

			// Generate a random number
			// between 1 to 6
			r = random(6);
			num[1] = value[r];

			setcolor(6);

			// Update the style of text
			settextstyle(1, 0, 6);

			// Print the number
			outtextxy(300, 200, num);
		}
		else if (key == '0') {
			break;
		}
		else {

			// Clear the device
			cleardevice();

			// Update background color
			setcolor(WHITE);
			settextstyle(font, direction,
						font_size);

			// Print the message
			outtextxy(100, 10,
					"-----DICE SIM"
					"ULATOR-----");

			setcolor(4);
			settextstyle(10, 0, 1);

			// For wrong key pressed
			outtextxy(170, 110,
					"\"you enter wrong key\"");
			setcolor(14);

			// Exiting the code
			outtextxy(170, 170,
					"\"Enter 0 (zero)"
					" for exit\"");
			setcolor(9);
			outtextxy(300, 220, "(or)");
			setcolor(5);

			// For starting the dice
			// roll again
			outtextxy(
				90, 270,
				"\"Enter (space) to"
				" throw dice again\"");
		}
	}
	closegraph();
}