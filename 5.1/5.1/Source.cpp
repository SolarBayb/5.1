// Lab 5_1
#include <iostream>
#include <cmath>
using namespace std;
double g(const double x, const double y, const double l ); // ��������
int main()
{
	double s, r, l;
	cout << "r = "; cin >> r;
	cout << "s = "; cin >> s;
	cout << "l = "; cin >> l;
	double c = (g(l, r, 0 ) + g(s * s - l, r * r, 0)) / g(s, l + r, 0) ;
	cout << "c = " << c << endl;
	return 0;
}
double g(const double x, const double y, const double l) // ����������
{
	return (x * x + y * y + sin(x*y)) / (1 + abs(x * y));
}