#include <iostream>
#include <math.h>
using namespace std;

int main()
{

	int x, n;
	double y = 0;
	//Putting n-1>2 which is x>3

	cout << "Input n>=3, n=";
	cin >> n;
	cout << "Input x= ";
	cin >> x;

	if (x <= 0)
	{
		for (int i = 2; i <= n - 1; i++)
		{
			y += (x / i);
		}
	}
	else if (x > 0)
	{
		int sum = 0;
		for (int i = 0; i <= n - 1; i++)
		{
			for (int j = 0; j < i; j++)
			{
				y += sum + (i / (j + x));
			}
		}

	}
	cout << "x= " << x << "; " << "y=" << y << endl;
	return 0;
}
