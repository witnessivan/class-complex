#ifndef COMPLEX_H
#define COMPLEX_H
#include <cmath>
#include <string>
#include <iostream>
using namespace std;

void print_menu(char t);

class complex
{
      private:
	          double real;
	          double imag;
			  double mod;
      public:
		      
			  complex Enter_complex(complex *a);
			  complex Enter_complex(complex *a, complex *b);
			  complex Sum(complex *a, complex *b);
			  complex Sub(complex *a, complex *b);
			  complex Multi(complex *a, complex *b);
			  complex Div(complex *a, complex *b);
			  double Moduly(complex *a);
			  complex Print(complex *a, complex*b);
};


#endif 

