#ifndef QUADRATIC_H
#define QUADRATIC_H
#include <functional>

class Quadratic{
public:
	Quadratic(int a, int b, int c);
	int GetOne() const;
	int GetTwo() const;
	int GetThree() const;
	void operator+(const Quadratic &s);
	int Eval(int x);
	void Cal();
	friend std::ostream& operator<<(std::ostream& os, const Quadratic& s);
	//friend std::istream& operator>>(std::istream& is, const Quadratic& s); 
private:
	int one, two, three;
};

#endif 