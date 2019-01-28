#include <iostream>
#include "Currency.hpp"
#include "Currency.cpp"

using namespace std;

int main(){
	Currency r(60,5);
	float c, d;

	cout<<"input currenct: cent and dollar"<<endl;
	cin>>c;
	cin>>d;

	Currency *s= new Currency(c,d);


	cout<<r.operator+(*s)<<endl;
	cout<<r.operator-(*s)<<endl;
	cout<<r.operator*(*s)<<endl;
}