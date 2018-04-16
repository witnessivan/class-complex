#include "COMPLEX.h"

void print_menu(char t)
{
	cout << "Hey, this is a complex number sorbulator " << endl;
	cout << "Select operation" << endl;
	cout << "[" << "-" << "]" << endl;
	cout << "[" << "+" << "]" << endl;
	cout << "[" << "*" << "]" << endl;
	cout << "[" << "/" << "]" << endl;
	cout << "[" << "/" << "]" << endl;
	cout << "[" << "M" << "]" << endl;

}
complex complex::Enter_complex(complex *a) 
{
	cin >> a->real >> a->imag;
	return *a;
}
complex complex::Enter_complex(complex *a, complex *b)
{
	cout << "Enter the first complex number: real?imag" << endl;
	cin >> a->real >> a->imag;
	cout << "Enter the second complex number: real?imag" << endl;
	cin >> b->real >> b->imag;
	return *a, *b;
		
}
complex complex::Sum(complex *a, complex *b)
{
	a->real = a->real + b->real;
	b->imag = a->imag + b->imag;
	return Print(a, b);
}
complex complex::Sub(complex *a, complex *b)
{
	a->real = a->real - b->real;
	b->imag = a->real - b->imag;
	return Print(a, b);
}
complex complex::Multi(complex *a, complex *b) 
{
	a->real = (a->real*b->real - a->imag *b->imag);
	b->imag = (a->real*b->imag + b->real*a->imag);
	return Print(a, b);
}
complex complex::Div(complex *a, complex *b) 
{
	a->real = ((a->real*b->real + -a->imag *b->imag) / (b->real*b->real + b->imag*b->imag));
	b->imag = ((b->real*a->imag - a->real *b->imag) / (b->real*b->real + b->imag*b->imag));
	return Print(a, b);
}
double complex::Moduly(complex *a)
{
	mod = sqrt(pow(a->real, 2) + pow(a->imag, 2));
		cout << mod << endl;
		return mod;

}
complex complex::Print(complex *a, complex *b)
{
	cout << a->real << "real" << endl;
	cout << b->imag << "image" << endl;
	return *a, *b;
}
