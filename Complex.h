#ifndef COMPLEX_H
#define COMPLEX_H

#include <string>
#include <iostream>

using namespace std;

struct Complex {
	double im = 0;
	double re = 0;

	Complex sum(Complex cmp1);

	Complex sub(Complex cmp1);

	Complex mult(Complex cmp1);

	Complex div(Complex cmp1);

	static void print(Complex n1);
};


#endif
