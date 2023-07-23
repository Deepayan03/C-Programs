#include <iostream>
using namespace std;
 main()
{
	int x, num, factorial = 1;
	cout << "Type positive number: ";
	cin >> num;
	for (x = 1; x <= num; ++x)
	{
		factorial *= x;   
	}
	cout << "Factorial of " << num << " = " << factorial;
}
