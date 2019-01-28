#include "CppArray.hpp"

using namespace std;

int CppArray::GetSize()const{return s;}
float CppArray::GetInit()const{return iv;}
int CppArray::GetElement(int i)const{return elements[i];}

CppArray::CppArray(int size, float initvalue){
	elements= new float[size];

	s=size;
	iv=initvalue;

	for(int i=0; i<size; i++)
	{
		elements[i] = initvalue;
	//	cout<<elements[i]<<" ";
	}
	//cout<<endl;

}

CppArray::CppArray(const CppArray &cp2){
	/*(this->GetSize() = cp2.GetSize();
	this->GetInit() = cp2.GetInit();
	*/
	s= cp2.s;
	iv= cp2.iv;
	elements=new float[s];

	for(int i=0; i<s; i++)
	{
		elements[i] = iv;
	}
}

void CppArray::operator=(const CppArray& cp2){
	delete elements;
	s=cp2.s;	
	iv=cp2.iv;

	for(int i=0; i<cp2.s; i++){
		elements[i] = iv;
	}
	
}

float& CppArray::operator[](int i){
	float a= 0.5;

	if(i>=s || i<0)
	{
		cout<<"ERROR DUMB"<<endl;
		exit(1);
	}
	else
	return elements[i];
}

ostream& operator<<(ostream& os, const CppArray& cp2){ 
	cout<<cp2.s<<" "<<cp2.iv<<endl;

	for(int i=0; i<cp2.s; i++){
		cout<<cp2.elements[i]<<" ";
	}
	cout<<endl; 
	return os; 
}
