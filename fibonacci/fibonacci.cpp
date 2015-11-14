#include <iostream>
#include <string>

using namespace std;

//int 

int main()
{
	int a = 0;
	int old_a = 0;
	int b = 1;
	int i = 0;
	while(i <= 10)
	{
		cout << a << endl;
		a = b;
		b = old_a + b;
		old_a = a;
		i++;
	}
	cin.get();
	return 0;
}