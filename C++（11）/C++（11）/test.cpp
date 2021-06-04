#include <iostream>
using namespace std;




int fun(int *a)
{

	*a += 10;
	return *a;


}

int main()
{


	int a = 10;
	int b = 20;
	int k=fun(&a);
	cout << a<< endl;



	return 0;
}