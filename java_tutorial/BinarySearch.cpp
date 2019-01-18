#include <iostream>

using namespace std;

int BinarySearch(int *a, const int x, const int left, const int right)
{
	if(left<=right){
		int middle = (left+right)/2;
		if(x<a[middle])
			return BinarySearch(a,x,left,middle-1);
		if(x>a[middle])
			return BinarySearch(a,x,middle+1,right);

		return middle+1;
	}

	return -1;
}

int main()
{
	int left=0;
	int right=4;
	int a[5]= {1,2,3,4,5};

	cout<<BinarySearch(a,6,left,right)<<endl;

}