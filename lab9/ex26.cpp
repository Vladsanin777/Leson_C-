#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

long double f(long double x) {return 1.0/(3*pow(cos(3), 2)*x);}

int main(){
	cout<<fixed<<setprecision(3)<<f(M_PI/12)-f(M_PI/9)<<endl;
}
