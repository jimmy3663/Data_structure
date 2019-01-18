#include <iostream>

using namespace std; 

/*int swap(int a, int b)
{
	int temp;

	temp=a;
	a=b;
	b=temp;

	return a, b; 
}*/

int main(){

	int arr[] = {4,3,5,1,2};

	for(int i = 0; i<5 ; i++)
	{
		for(int j = 0 ; j<5 ; j++)
		{
			if(arr[i] > arr[j])
				{
					int temp; 
					temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp; 
				}
		}
	}

	for(int i=4; i>= 0; i--)
	{
		cout<<arr[i]<< " ";
	}

	cout<<endl<<sizeof(arr)<<endl;
}