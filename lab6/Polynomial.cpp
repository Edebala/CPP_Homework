#include "Polynomial.h"

Polynomial::Polynomial(int degree, const double coefficients[]){
	coefficients = new double[degree];
	capacity = degree;
}

Polynomial::Polynomial(const Polynomial &that){
	capacity = that.capacity;
	coefficients = new double[capacity];
	for(int i=0;i<capacity;i++)
		coefficients[i] = that.coefficients[i];
}

Polynomial::~Polynomial(){
	delete []coefficients;
}
