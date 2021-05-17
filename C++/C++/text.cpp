#include <iostream>
using namespace std;


class Complex{


	friend ostream& operator<<(ostream &out, const Complex &c);
	friend Complex  operator+(Complex &c1, Complex &c2);
public: 

	Complex(int _real, int _imag) :m_real(_real), m_imag(_imag)
	{}


	Complex(const Complex &c)
	{
		m_real = c.m_real;
		m_imag = c.m_imag;
	}
	~Complex()
	{

	}
	
public:
	/*Complex operator+(const Complex &c)
	{
		Complex tmp(m_real + c.m_real, m_imag + c.m_imag);
		return tmp;
	}
*/
	
private:

	int m_real;
	int m_imag;

};



Complex operator+(Complex &c1, Complex &c2)
{
	Complex tmp(c1.m_real + c2.m_real, c1.m_imag + c2.m_imag);
     return tmp;




}

ostream& operator<<(ostream &out, const Complex &c)
{


	out << "(" << c.m_real << "," << c.m_imag << ")";
	return out;


}

int main()
{


	Complex c1(1, 2);
	Complex c2(2, 4);


	Complex c3 = c1+c2;
	cout << c3 << endl;



	return 0;

}


