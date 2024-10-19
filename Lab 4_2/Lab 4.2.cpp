#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, xp, xk, dx, A, B, y;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(4) << "x" << " |"
		<< setw(6) << "y" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	A = abs(pow(x, 3));
	while (x <= xk)
	{
		if (x < -1)
			B = abs(2 + x) + pow(sin(x), 2);
		else
			if (x >= 0.1)
				B = atan(pow(x, 3)+1)+1;
			else
				B = exp(cos(x))+log10((1/x)+1);
		y = A + B;
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}