#include "COMPLEX.h"

int main()
{
	char t = ' ';
	complex *c1 = new complex;
	complex *c2 = new complex;
	complex *c3 = new complex;
	double *mod = new double;
	print_menu(t);
	cin >> t;
	switch(t)
	{
	    case'+': 
	    {


		   c1, c2->Enter_complex(c1, c2);
		   c3->Sum(c1, c2);
		   break;
	    }
		case'-':
		{
			c1, c2->Enter_complex(c1, c2);
			c3->Sub(c1, c2);
			break;
		}
		case'*':
		{
			c1, c2->Enter_complex(c1, c2);
			c3->Multi(c1, c2);
			break;

		}
		case'/': 
		{
			c1, c2->Enter_complex(c1, c2);
			c3->Div(c1, c2);
			break;
		}
		case'm': 
		{
			c1->Enter_complex(c1);
			c1->Moduly(c1);
			break;
		}
		default:
			
			    cout << t << "does not fit";
			    break;
			
	}
	system("pause");
	delete c1;
	delete c2;
	delete c3;
	delete mod;
	
	 

}
