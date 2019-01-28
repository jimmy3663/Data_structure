#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H

class Polynomial{
public: 
	Polynomial();
	Polynomial Add(Polynomial poly);
	Polynomial Mult(Polynomial poly);
	float Eval(float f);

private:
	int degree;
	float *coef;
};

#endif 