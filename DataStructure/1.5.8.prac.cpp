#include <iostream>

using namespace std;

int factorial(int n){
	if(n==0)
		return 1;
	else 
		return n*factorial(n-1);
}

int _binary(int a, int b){
	if(b==0)
		return 1;
	else if(a==b)
		return 1;

	return factorial(a)/factorial(b)*factorial(a-b);
}

int main(){
	cout<<_binary(2,0)<<endl;
	cout<<_binary(2,2)<<endl;
	cout<<_binary(3,2)<<endl;
	
}