#include <iostream>
#include <cmath>
using namespace std;
// Определение функции y = 2x^2 - 3x + 5
double func(double x) { return 2*pow(x, 2) - 3*x + 5; }

void formula(long a, long b) {long double result = 1; for (a; a <= b; ++a) {cout<<"X = "<<a<<", Y = "<<func(a)<<endl;}}

int main() {
	long a, b;
	cin>>a>>b;
	formula(a, b);
}
