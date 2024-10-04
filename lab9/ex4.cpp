#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

long double f(long double x) {return pow(cos(x), 2);}

int main(){
	cout<<fixed<<setprecision(5)<<f(M_PI/2)-f(0)<<endl;
}
