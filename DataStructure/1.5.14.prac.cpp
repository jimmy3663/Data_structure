#include <iostream>

using namespace std;

void powerset(char *list, int n, int len){ // 세개까지는 잘 나오나 4개부터는 원하는 결과값 안나옴 ㅅㅂ
     int i, j;
     
     if(n == -1){
          cout<<"{} ";
          powerset(list,1,len);
     }
     else if(n == 1){
          for(i = 0; i < len; i++){
                cout<<list[i]<<" ";
          }
          powerset(list,n+1,len);
     }
     else if(n == len){
          for(i = 0; i < len; i++){
                cout<<list[i];
          }
          
          cout<<endl;
     }
     else{
          for(i = 0; i < len; i++){
                for(j = 0; j < n; j++){
                      cout<< list[(i+j)%len];
                }
                cout<<" ";
          }
          
          powerset(list,n+1,len);
     }
}

int main(){

	char list[]={'a','b','c','d','e'};
	int len = sizeof(list)/sizeof(char);

	powerset(list,-1,len);

}
