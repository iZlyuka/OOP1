#include "Complex.h"

Complex Complex::sum(Complex cmp1)
{
	 Complex sum{ cmp1.im + this->im, cmp1.re + this->re };
	 return sum;
}

Complex Complex::sub(Complex cmp1)
{
	Complex sub{ this->im - cmp1.im, this->re - cmp1.re };
	return sub;
}

Complex Complex::mult(Complex cmp1)
{
	Complex mult{ (cmp1.im * this->im) - (cmp1.re * this->re), (cmp1.im * this->re) + (cmp1.re * this->im) };
	return mult;
}

Complex Complex::div(Complex cmp1)
{
	Complex div{ ((cmp1.im * this->im) + (cmp1.re * this->re)) / ((cmp1.im * cmp1.im) + (cmp1.re * cmp1.re)), (((this->re * cmp1.im) - (this->im * cmp1.re)) / ((cmp1.im * cmp1.im) + (cmp1.re * cmp1.re))) };
	return div;
}

void Complex::print(Complex n1) {
	string sign = (n1.re >= 0) ? "+" : "";
	cout << n1.im << sign << n1.re << 'i';
}
