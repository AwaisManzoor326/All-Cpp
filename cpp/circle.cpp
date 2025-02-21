
#include "msoftcon.h"
class circle
{
	private:
		int xCo, yCo, radius; 
		color fillcolor;
		fstyle fillstyle;
	public:
		void setdetails(int x, int y, int r, color c, fstyle s)
		{
			xCo = x;
			yCo = y;
			radius = r;
			fillcolor = c;
			fillstyle = s;
		}
		void draw()
		{
			set_color(fillcolor);
			set_fill_style(fillstyle);
			draw_circle(xCo, yCo, radius);
		}
};
int main()
{
	init_graphics();
	circle c1, c2;
	c1.setdetails(30, 25, 10, cGREEN, X_FILL);
	c2.setdetails(60, 45, 20, cBLACK, O_FILL);
	c1.draw();
	c2.draw();
	set_cursor_pos(20, 20);
	return 0;
}
