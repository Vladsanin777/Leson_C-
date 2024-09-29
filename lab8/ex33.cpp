#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    long double pi = 0.0, term = 1.0;
    int n = 0;
    while (fabs(term) > 1e-4) {
        term = pow(-1, n) / ((2*n + 1) * pow(3, n));  // Формула Шарпа
        pi += term;
        n++;
    }
    pi *= sqrt(12);
	cout << fixed << setprecision(4) << "Приближенное значение pi: " << pi << endl;
}

