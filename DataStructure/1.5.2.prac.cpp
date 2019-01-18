#include <iostream>

using namespace std; 

void permutations(char *a, const int k, const int m) {
	for(int i=k; i<=m; i++)
	{
		for(int j=k; j<=m; j++)
		{
			a[j]=a[i];

			for(int l=0; l<=m; l++)
				cout<<a[l]<<" ";
		
		}
	}
}

int main(){
	char arr[] = {'a','b','c'}; 
	permutations(arr,0,2);
}