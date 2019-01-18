#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
template <typename Iter>

void print(Iter begin, Iter end)
{
    while(begin!=end)
    {
        cout<<*begin<<" ";
        begin++;
    }cout<<endl;
}

int main(){
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(1);
    
    cout<<"array: "<<endl;
    print(arr.begin(), arr.end());
    
    cout<<"Value의 출현빈도: ";
    //cin>>value;
    
    //count(arr.begin(),arr.end(),arr.begin());
}
