#include "Currency.hpp"

float Currency::Getcents(){return cents;}
float Currency::Getdollar(){return dollar;}
Currency::Currency(float c,	float d){
	cents=c;
	dollar=d;
}
float Currency::operator+(const Currency &s){
	float ce;
	ce = cents+s.cents;
	float dol;
	dol=dollar+s.dollar;
	return dol+ce/100;

}

float Currency::operator-(const Currency &s){
	float ce;
	ce= cents-s.cents;
	float dol;
	dol=dollar-s.dollar;

	return dol+ce/100;
}

float Currency::operator*(const Currency &s){
	float one;
	one = dollar + cents/100;
	float two;
	two = s.dollar+s.cents/100;

	return one*two;
}