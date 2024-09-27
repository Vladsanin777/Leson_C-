#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    long double x, accuracy = 1e-3, sum = 0.0, term;
	int n = 1;
	cin>>x;
	do{
		term = pow(-1, n)*1/((2*n+1)*pow(x, 2*n+1));
        sum += term;
		++n;
    } while (abs(term) > accuracy);
    cout << fixed << setprecision(3) << "Сумма ряда: " << sum << endl;
}
