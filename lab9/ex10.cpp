#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

long double f(long double x) {return pow(M_E, x)*pow(cos(x), 2);}

int main(){
	cout<<fixed<<setprecision(4.2)<<f(M_PI)-f(0)<<endl;
}
