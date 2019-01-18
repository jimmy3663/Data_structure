#include <iostream>
#include "Rectangle.hpp"
#include "Rectangle.cpp"

using namespace std;


int main(){
	//Rectangle *t=&s;
	Rectangle r(1,3,6,6);
	Rectangle *s= new Rectangle(0,0,9,5);

	r.operator<(*s);

	if(r.GetHeight() * r.GetWidth()>s->GetHeight()*s->GetWidth())
		cout<<"r";
	else cout<<"s";

	cout<< " has the greater area" <<endl; 
}