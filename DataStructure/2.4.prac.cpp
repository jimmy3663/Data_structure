#include <iostream>
#include "Complex.hpp"
#include "Complex.cpp"

using namespace std;

int main(){
	Complex r(1,1);
	Complex *s= new Complex(2,2);

	r.operator+(*s);
	r.operator-(*s);
	r.operator*(*s);
}