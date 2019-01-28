#include "Complex.hpp"

using namespace std;

int Complex::GetInteger(){return integer;}
int Complex::GetComplexnum(){return complexnum;}
Complex::Complex(int i, int c){
	integer=i;
	complexnum=c;
}

void Complex::operator+(const Complex &s){
	int a;
	a= integer+ s.integer;
	int b;
	b= complexnum+s.complexnum;

	if(b>0)
		cout<<a<<"+"<<b<<"i"<<endl;
	else
		cout<<a<<b<<"i"<<endl;
}

void Complex::operator-(const Complex &s){
	int a;
	a= integer - s.integer;
	int b;
	b= complexnum - s.complexnum;

	if(b>0)
		cout<<a<<"+"<<b<<"i"<<endl;
	else
		cout<<a<<b<<"i"<<endl;
}

void Complex::operator*(const Complex &s){
	int a;
	a=integer*s.integer;
	int b;
	b=integer*s.complexnum;
	int c;
	c=complexnum*s.integer;
	int d;
	d=complexnum*s.complexnum;

	if(c>0)
		cout<<a-d<<"-"<<b+c<<"i"<<endl;
	else{
		c=c*-1;
		cout<<a-d<<"+"<<b+c<<"i"<<endl;
	}
}