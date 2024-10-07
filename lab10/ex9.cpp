#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

class Newton{
private:
	static constexpr long double EPSILON = 1e-5;
	static short sign(long double x) {return (x > 0) - (x < 0);}
	// Диффиренцированное выражение
	static long double df(long double x) {return 3*pow(x, 2)-0.75*2*x*sign(pow(x, 2)-1)/abs(pow(x, 2)-1);}
	// Изначальное выражение
	static long double f(long double x) {return pow(x, 3)-0.75*abs(pow(x, 2)-1);}
	// Метод касательных Ньютона
public:
	static long double newtonMethod(long double x) {
		long double fx = 1.0, dfx = 1.0;
		for (long long i = 0; (EPSILON<abs(fx)||EPSILON<abs(dfx))&&i<100; i++) x = x-(fx = f(x))/(dfx = df(x));
		return x;
	}
};

int main() {
	cout<<fixed<<setprecision(5)<<Newton::newtonMethod(0.0)<<endl;
}
