#include <iostream>
#include <cmath>
using namespace std;

double h(const double x, const double y, const double z); // Function prototype

int main()
{
    double p, q;

    cout << "p = ";
    cin >> p;
    cout << "q = ";
    cin >> q;
    
    double c = (pow(h, 2)((abs(p - q)), (sqrt(abs(p - q)))) + h(1, pow(q, 2) - pow(p, 2));

    cout << "c = " << c << endl;

    return 0;
}

double h(const double x, const double y, const double z) // Function definition
{
    return (y * y - sqrt(x * x + y * y)) / (1 + (x * x) * (y * y));
}

