#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

long double f(long double x) {return sin(x)+2.0/pow(cos(x), 2);}

int main(){
	cout<<fixed<<setprecision(5)<<f(M_PI/3)-f(0)<<endl;
}
