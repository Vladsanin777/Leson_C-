#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

long double f(long double x) {return pow(sin(x), 2);}

int main(){
	cout<<fixed<<setprecision(3)<<f(M_PI/2)-f(0)<<endl;
}
