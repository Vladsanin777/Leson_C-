#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

class Bisection{
private:
	static constexpr long double EPSILON = 1e-5;
	// Изначальное выражение
	static long double f(long double x) {return sin(M_PI-2*x)+M_PI/6;}
	// Метод половинного деления Бисекции
public:
	static long double bisectionMethod(long double a, long double b) {
		long double mid = a, *a_or_b;
		while ((b - a) >= EPSILON && EPSILON > abs(f(mid = (a + b) / 2.0))) *(a_or_b = f(mid) * f(a) < 0 ? &b : &a) = mid;
		return mid;
	}
};

int main() {
	cout<<fixed<<setprecision(5)<<Bisection::bisectionMethod(0, 1)<<endl;
}
