#include "Quadratic.hpp"
#include <iostream>
#include <math.h>
using namespace std; 

int Quadratic::GetOne() const {return one;}
int Quadratic::GetTwo() const {return two;}
int Quadratic::GetThree() const {return three;}
//Quadratic::Quadratic(int a=0, int b=0, int c=0)
//	:one(a),two(b),three(c){}
Quadratic::Quadratic(int a, int b, int c){
	one = a; 
	two = b;
	three = c;
}
void Quadratic::operator+(const Quadratic &s){
	int first;
	first= one + s.one;
	int second;
	second= two + s.two;
	int third;
	third= three + s.three;

	if(second>=0 && third>=0)
		cout<<first<<"x^2"<<"+"<<second<<"x"<<"+"<<third<<endl;
	else if(second<=0 && third>0)
		cout<<first<<"x^2"<<second<<"x"<<"+"<<third<<endl;
	else if(second>=0 && third<0)
		cout<<first<<"x^2"<<"+"<<second<<"x"<<third<<endl;
}

int Quadratic::Eval(int x){
	int eval;
	eval = one * x * x + two * x + three;

	return eval;
}

void Quadratic::Cal(){

	int x1= (-two + sqrt(pow(two,2)-4*one*three))/2*one;
	int x2= (-two - sqrt(pow(two,2)-4*one*three))/2*one;

	cout<<x1<< " "<< x2<<endl;
}

ostream& operator<<(ostream& os, const Quadratic& s){
	cout<<s.GetOne()<<"x^2+"<<s.GetTwo()<<"x+"<<s.GetThree()<<endl;
	return os; 
}

/*istream& operator>>(istream& is, Quadratic& s){
	cout<<"2차 항의 계수를 입력: ";
	cin>>s.GetOne();
	cout<<"1차 항의 계수를 입력: ";
	cin>>s.GetTwo();
	cout<<"상수항의 계수를 입력: ";
	cin>>s.GetThree();

}*/