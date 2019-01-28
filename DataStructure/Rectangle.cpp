#include "Rectangle.hpp"
#include <iostream>

using namespace std;

int Rectangle::GetHeight(){return height;}
int Rectangle::GetWidth(){return width;}
Rectangle::Rectangle(int x, int y, int h, int w){
		xLow = x; yLow=y;
		height=h; width=w;
	}

bool Rectangle::operator == (const Rectangle &s){
	if(this == &s) return true;
	if((xLow==s.xLow) &&(yLow ==s.yLow) && (height==s.height) && (width==s.width))
	 return true;
	else return false;
}

bool Rectangle::operator<(const Rectangle &s){
	if(height*width < s.height*s.width)
	{
		cout << "r is smaller than s"<<endl;
		return true;
	}
	else 
	{
		cout<< "r is bigger than s "<<endl;
		return false;
	}
}

ostream& operator<<(ostream& os, Rectangle &r){
	os<< "Position is : "<<r.xLow<<" ";
	os << r.yLow<< endl;
	os<<"Height is : "<<r.height<<endl;
	os<<"Width is : "<<r.width<<endl;
	return os;
}