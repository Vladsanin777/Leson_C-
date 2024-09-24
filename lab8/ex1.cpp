#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

unsigned long long factorial(long long n){long long result = 1; for (unsigned long long i = 2; n>i;i++) {result *= i;} return result;}

int main() {
    long double x, accuracy = 1e-5, sum = 0.0, term;
    short sign = -1;
	int n = 1;
	cin>>x;
    do {
        term = sign * pow(2 * x, 2*n) / factorial(2 * n);
        sum += term;
        sign *= -1;
		n++;
    } while (abs(term) > accuracy);
	cout << fixed << setprecision(5) << "Сумма ряда: " << sum << endl;
}
