#ifndef COMPLEX_H
#define COMPLEX_H

class Complex{
public:
	Complex(int i, int c);
	int GetInteger();
	int GetComplexnum();
	void operator+(const Complex &s);
	void operator-(const Complex &s);
	void operator*(const Complex &s);

private:
	int integer;
	int complexnum;
};

#endif