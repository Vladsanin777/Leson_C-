#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

class Newton{
private:
	static constexpr long double EPSILON = 1e-5;
	// Диффиренцированное выражение
	static long double df(long double x) {return 0.1*pow(tan(x), 2)+0.3/(0.2*x+0.1*tan(x));}
	// Изначальное выражение
	static long double f(long double x) {return log(0.1*tan(x)+0.2*x);}
	// Метод касательных Ньютона
public:
	static long double newtonMethod(long double x) {
		long double fx = 1.0, dfx = 1.0;
		for (long long i = 0; (EPSILON<abs(fx)||EPSILON<abs(dfx))&&i<100; i++) x = x-(fx = f(x))/(dfx = df(x));
		return x;
	}
};

int main() {
	cout<<fixed<<setprecision(5)<<Newton::newtonMethod(5.0)<<endl;
}
