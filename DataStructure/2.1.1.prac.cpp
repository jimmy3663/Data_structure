#include <iostream>
#include "CppArray.hpp"
#include "CppArray.cpp"

using namespace std;

int main(){
	CppArray cp1(5,2.5);
	CppArray *cp2= new CppArray(3, 3.2);

	cout<<cp1;
	cout<<*cp2;

	CppArray cp3(cp1);
	cout<<cp1;
	cout<<endl;
	cp1=*cp2;
	cout<<cp1;

	cout<<endl;
	cout<< cp1[2]<<endl;
}