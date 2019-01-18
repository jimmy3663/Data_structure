#include "Currency.hpp"

int Currency::Getcents(){return cents;}
int Currency::Getdollar(){return dollar;}
Currency::Currency(int c, int d){
	cents=c;
	dollar=d;
}
