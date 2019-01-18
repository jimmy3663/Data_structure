#include <iostream>

using namespace std;

int proof(int x){

	if(x%2==0)
		return proof(x/2);
	else 
		return proof(proof(3x+1));
}

int main(){

	int x = 5;
	cout<<proof(5)<<endl;
}