#ifndef CPPARRAY_H
#define CPPARRAY_H

const int defaultSize = 10;
const float defaultValue = 0;

class CppArray{
public:
	CppArray(int size=defaultSize, float initvalue=defaultValue);
	/*CppArray(const CppArray& cp2){
		s = cp2.s;
		iv= cp2.iv;
	};*/
	CppArray(const CppArray& cp2);
	int GetSize()const;
	float GetInit()const;
	int GetElement(int i)const;
	void operator=(const CppArray& cp2);
	float &operator[](int i);
	friend std::ostream& operator<<(std::ostream &os, const CppArray &cp2);

private:
	int s;
	float iv;
	float *elements;

};

#endif