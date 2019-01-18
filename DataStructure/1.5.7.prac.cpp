#include <iostream>

using namespace std;

int Fibonacci(int n){
	if(n==1)
		return 1;
	else if(n==0)
		return 0;
	else 
		return Fibonacci(n-1)+Fibonacci(n-2);
}

int main(){
	cout<<Fibonacci(5)<<endl;
}
