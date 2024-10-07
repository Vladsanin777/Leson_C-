#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

class Newton{
private:
	static constexpr long double EPSILON = 1e-5;
	// Диффиренцированное выражение
	static long double df(long double x) {return sin(M_PI/12*x-M_PI/3)+M_PI/12*x*cos(M_PI/12*x-M_PI/3);}
	// Изначальное выражение
	static long double f(long double x) {return x*sin(M_PI/12*x-M_PI/3)-2.13;}
	// Метод касательных Ньютона
public:
	static long double newtonMethod(long double x) {
		long double fx = 1.0, dfx = 1.0;
		for (long long i = 0; (EPSILON<abs(fx)||EPSILON<abs(dfx))&&i<100; i++) x = x-(fx = f(x))/(dfx = df(x));
		return x;
	}
};

int main() {
	cout<<fixed<<setprecision(5)<<Newton::newtonMethod(-4.0)<<endl;
}
