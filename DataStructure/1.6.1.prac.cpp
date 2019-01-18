#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void print(int *a, int n){
	for(int i=0; i<n; i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

int main()
{
	int arr[]={4,3,5,1,7,2};
	int n= sizeof(arr)/sizeof(int);

	cout<<"Before : "<<endl;
	print(arr,n);
	sort(arr,n);

	cout<<"After : "<< endl;
	print(arr,n);
	
}