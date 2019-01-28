#include <iostream>
#include "Quadratic.hpp"
#include "Quadratic.cpp"
#include <functional>

using namespace std;

int main(){
	Quadratic r(1,-6,9);
	Quadratic *s= new Quadratic(4,-5,6); 

	//r.operator+(*s);
	r+*s;
	cout<<r.Eval(2)<<endl;
	cout<<s->Eval(1)<<endl;
	r.Cal();
	cout<<r;
	//cin>>r;
} 