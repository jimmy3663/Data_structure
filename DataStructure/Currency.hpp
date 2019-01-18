#ifdef CURRENCY_H
#define CURRENCY_H

class Currency{
public:
	Currency();
	int Getcents();
	int Getdollar();
	Currency::Currnecy(int c, int d);
private: 
	int cents, dollar;

}