#include <iostream>
using namespace std;

class Test{

	friend ostream& operator<<(ostream &out, Test& d);
	friend istream& operator>>(istream &in, Test& d);
	
public:
	Test(int data = 0) :_data(data)
	{

	}
	~Test()
	{

	}

public:

	Test(const Test& d)
	{

		_data = d._data;
		
	}

private:
	int _data;
};


 ostream& operator<<(ostream &out, Test& d)
{
	out << d._data;
	return out;

}

 istream& operator>>(istream &in, Test&d)
 {

	 in >> d._data;
	 return in;

 }

int main()
{

	Test a;
	Test a1(a);

	cout << a << endl;
	


	return 0;
}




//
//int main()
//{
//
//    int a = 10;
//	int b(a);
//
//	cout << b << endl;
//
//	return 0;
//}