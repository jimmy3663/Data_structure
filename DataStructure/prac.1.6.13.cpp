#include <iostream>
#include <algorithm>

using namespace std;

void Permutations(char *a, const int m){

	do{
		copy(a,a+m+1,ostream_iterator<char>(cout," "));
		cout<<endl;
	}
	while(next_permutation(a,a+m+1));
	
}

int main(){

	char arr[]={'a','b','c'};
	Permutations(arr,2);

	return 0;
}