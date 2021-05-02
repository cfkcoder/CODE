#include <iostream>
using namespace std;
#pragma warning(disable:4996)


class Test{
public:

	Test(int d=9) :m_data(d)
	{

	}

private:

	int m_data;


};
int main()
{

	Test a;
	Test a1 = Test();




	return 0;
}