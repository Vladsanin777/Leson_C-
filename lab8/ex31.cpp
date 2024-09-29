#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    long double accuracy = 1e-4, sum = 0.0, term;
	int n = 1;
	do{
		term = pow(-1, n+1)*1.0/(n*pow(2, n-3));
        sum += term;
		++n;
    } while (abs(term) > accuracy);
    cout << fixed << setprecision(4) << "Сумма ряда: " << sum << endl;
}
