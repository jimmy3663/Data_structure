#ifndef CURRENCY_H
#define CURRENCY_H

class Currency{
public:
	Currency(float c, float d);
	float Getcents();
	float Getdollar();
	float operator+(const Currency &s);
	float operator-(const Currency &s);
	float operator*(const Currency &s);
private: 
	float cents, dollar;

};

#endif