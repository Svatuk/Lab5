#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double h(const double x);
int main()
{
	double rp, rk, z;
	int n;
	cout << "rp = "; cin >> rp;
	cout << "rk = "; cin >> rk;
	cout << "n = "; cin >> n;
	cout << "-------------------------" << endl;
	cout << "|" << setw(8) << "r" << " |" << setw(12) << "z" << " |" << endl;;
 	double dr = (rk - rp) / n;
	double r = rp;
	while (r <= rk)
	{
		z = h(r+1)+ pow(h(r * r + 1), 2) + 1;
		cout << "|" << setw(8) << setprecision(2) << r << " |"
			<< setw(12) << setprecision(5) << z << " |" << endl;
		r += dr;
	}
	cout << "-------------------------" << endl;
	return 0;
}
double h(const double x)
{
	if (abs(x) >= 1 || x == 0)
		return (cos(x) + 1) / exp(x);
	else
	{
		double S = 0;
		int n = 0;
		double a = x*x;
		S = a;
		do
		{
			n++;
			double R = x * x * x * x / ((2 * n) * (2 * n + 1));
			a *= R;
			S += a;
		} while (n < 6);
		return ((1 / (sin(x)*sin(x))) * S);
	}
	
}