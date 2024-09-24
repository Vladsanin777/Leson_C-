#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    long double x, accuracy = 1e-3, sum = 0.0, term;
    short sign = 1;
	int n = 1;
	cin>>x;
	do{
		term = sign * pow(x, 2*n+1) / (4*pow(n, 2)-1);
        sum += term;
        sign *= -1;
		++n;
    } while (abs(term) > accuracy);
    cout << fixed << setprecision(3) << "Сумма ряда: " << sum << endl;
}
