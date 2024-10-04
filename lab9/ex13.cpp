#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

long double f(long double x) {return pow(sin(x), 2)/(1+cos(x));}

int main(){
	cout<<fixed<<setprecision(3)<<f(M_PI)-f(0)<<endl;
}
