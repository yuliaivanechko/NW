#include <iostream>
#include <conio.h>    //for _getche
#include "msoftcon.h"

using namespace std;
struct Circle
{
	int x;
	int y;
	int radius;
	color fillcolor;
	fstyle fillstyle;
};

void CircDraw(Circle c)
{
	set_color(c.fillcolor);
	set_fill_style(c.fillstyle); //set fill pattern
	draw_circle(c.x, c.y, c.radius);
};

int main)
{
	init_graphics();
	Circle c1 = { 15, 7, 5, cBLUE, X_FILL };
	Circle c2 = { 41, 12, 7, cRED, O_FILL };
	Circle c3 = { 65, 18, 4, cGREEN, MEDIUM_FILL };

	CircDraw(c1); //draw circles
	CircDraw(c2);
	CircDraw(c3);
	set_cursor_pos(1, 25); //cursor to lower left corner



	system("pause");
	return 0;
}


