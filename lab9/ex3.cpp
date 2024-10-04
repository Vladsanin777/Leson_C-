#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

long double f(long double x) {return pow(x, x)*(1+log(x));}

int main(){
	cout<<fixed<<setprecision(3.5)<<f(3)-f(1)<<endl;
}
