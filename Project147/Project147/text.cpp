#include  <iostream>
using namespace std;



int fun(int a=2, int b=4)
{

	int c = a + b;
	return c;

}
int main()
{

	//int a, b;
	//a = 1; b = 2;
	int result=fun(1);
	cout << result << endl;

	int a(10);
	


	return 0;
}