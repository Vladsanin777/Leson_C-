#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

class Secant{
private:
	static constexpr long double EPSILON = 1e-5;
	// Изначальное выражение
	static long double f(long double x) {return log(pow(x, 2)+1)-1;}
	// Метод хорд
public:
	static long double secantMethod(long double x0, long double x1) {
		long double x2, fx0, fx1; short i = 0;
		do {
			x2 = x1 - (fx1 = f(x1)) * (x1 - x0) / (fx1 - (fx0 = f(x0)));
			if (std::abs(fx1) < EPSILON) return x1;
			x0 = x1, x1 = x2; ++i;
		} while(i < 100 && EPSILON < abs(f(x2))); return x2;
	}
};

int main() {
	cout<<fixed<<setprecision(5)<<Secant::secantMethod(0.0, 3.0)<<endl;
}
