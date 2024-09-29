#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    long double pi = 0.0, term = 1.0;
	int n = 0;
    while (fabs(term) > 1e-4) {
        term = (long double)pow(-1, n) / (2 * n + 1); //формула Лейбница
        pi += term;
        n++;
    }
	cout << fixed << setprecision(4) << "Сумма ряда: " << 4*pi << endl;
}
