#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

unsigned long long factorial(long long n){long long result = 1; for (unsigned long long i = 2; n>i;i++) {result *= i;} return result;}

int main() {
    long double accuracy = 1e-4, sum = 0.0, term;
	int n = 1;
	do{
		term = (float)n/factorial(n+1);
        sum += term;
		++n;
    } while (abs(term) > accuracy);
    cout << fixed << setprecision(4) << "Сумма ряда: " << sum << endl;
}
