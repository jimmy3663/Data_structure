#include <iostream>

using namespace std; 

/*int finder(int *a, const int k, const int x)
{
	for(int i=0; i<k; i++)
	{
		if(a[i] == x)
			return a[0];
	}

	return -1;
}*/

//////////////////BinarySearch는 항이 홀수개 일 때만 실행됨. 원래 이런건가?

int BinarySearch(int *a, const int left, const int right, const int x){

	if(left<=right)
	{
		int middle = (left+right)/2;
		if(a[middle]<x)
			return BinarySearch(a,middle+1,right,x);
		else if(a[middle]>x)
			return BinarySearch(a,left,middle-1,x);

		return a[0];
	}

	return -1;
}

int main(){
	int arr[]={4,3,5,2,7};
	int left=0;
	int right=sizeof(arr)/4;
	int x;

	cout<<"input number :";
	cin>>x;
	//cout<<finder(arr,sizeof(arr)/4,x)<<endl;
	cout<<sizeof(arr)/4<<endl;
	cout<<BinarySearch(arr,0,right,x)<<endl;

}