#ifndef RECTANGLE_H
#define RECTANGLE_H

using namespace std;

class Rectangle{
public:
	Rectangle(int x, int y, int h, int w);
	//~Rectangle();
	int GetHeight();
	int GetWidth();
	bool operator==(const Rectangle &s);
	bool operator<(const Rectangle &s);
	friend std::ostream& operator<<(std::ostream& os, Rectangle &r)

private:
	int xLow, yLow, height, width;

};
#endif
