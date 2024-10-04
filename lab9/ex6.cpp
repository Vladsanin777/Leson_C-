#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

long double f(long double x) {return x*pow(M_E, x)*sin(x);}

int main(){
	cout<<fixed<<setprecision(4.2)<<f(1)-f(0)<<endl;
}
