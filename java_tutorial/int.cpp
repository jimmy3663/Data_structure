#include <iostream>

using namespace std; 

int DivZero(int a, int b, int c)
{
	if(a<=0||b<=0||c<=0)
		throw "All parameters should be >0";

	return a+b*c+b/c;
}

int main()
{
	try{cout<<DivZero(2,0,4)<<endl;}
	catch(char *e)
	{
		cout<< "The parameter to DivZero were 2,0,4"<<endl;
		cout<<"An expection has been thrown"<<endl;
		cout<<e<<endl; 
		return 1;
	}

	return 0; 
}