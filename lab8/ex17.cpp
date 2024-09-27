#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    long double accuracy = 1e-4, sum = 0.0, term;
	int n = 1;
	do{
		term = 1/pow(3, n);
        sum += term;
		++n;
    } while (abs(term) > accuracy);
    cout << fixed << setprecision(4) << "Сумма ряда: " << sum << endl;
}
