#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

class Newton{
private:
	static constexpr long double EPSILON = 1e-5;
	static short sign(long double x) {return (x > 0) - (x < 0);}
	// Диффиренцированное выражение
	static long double df(long double x) {return -0.5*pow(x, 4)*sin(pow(0.2*x, 5));}
	// Изначальное выражение
	static long double f(long double x) {return 0.5*cos(0.2*pow(x, 5))+0.2;}
	// Метод касательных Ньютона
public:
	static long double newtonMethod(long double x) {
		long double fx = 1.0, dfx = 1.0;
		for (long long i = 0; (EPSILON<abs(fx)||EPSILON<abs(dfx))&&i<100; i++) x = x-(fx = f(x))/(dfx = df(x));
		return x;
	}
};

int main() {
	cout<<fixed<<setprecision(5)<<Newton::newtonMethod(1.5)<<endl;
}
