#include <iostream>
#include <cmath>
using namespace std;
// Определение функции y = ln(x)-x+1.8
double func(double x) { return log(x)- x + 1.8; }

void formula(long a, long b) {long double result = 1; for (a; a <= b; ++a) {cout<<"X = "<<a<<", Y = "<<func(a)<<endl;}}

int main() {
	long a, b;
	cin>>a>>b;
	formula(a, b);
}
