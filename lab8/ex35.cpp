#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    long double pi = 0.0, term = 1.0;
	int n = 1;
    while (fabs(term) > 1e-4) {
        term = 1.0 / pow(n, 2); //формула Эйлера
        pi += term;
        n++;
    }
	cout << fixed << setprecision(4) << "Сумма ряда: " << sqrt(6*pi) << endl;
}
