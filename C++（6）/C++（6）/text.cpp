#include <iostream>
using namespace std;



void fun(int * const p)
{
	int a = 20;
	p = &a;
	*p = 10;
	cout << a << endl;

}
int main()
{



	int a=11;
	fun(&a);
	cout << a << endl;


	return 0;
}