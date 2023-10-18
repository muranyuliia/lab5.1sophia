#include <iostream>
#include <cmath>
using namespace std;

double h(const double x, const double y, const double z); // Function prototype

int main()
{
    double x, y, p, q;

    cout << "p = ";
    cin >> p;
    cout << "q = ";
    cin >> q;

    double c = h(abs(p - q), sqrt(abs(p - q)), 1 + q * q - p * p);

    cout << "c = " << c << endl;

    return 0;
}

double h(const double x, const double y, const double z) // Function definition
{
    return (y * y - sqrt(x * x + y * y)) / (1 + (x * x) * (y * y));
}
