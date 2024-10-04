#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

long double f(long double x) {return x*1/atan(x);}

int main(){
	cout<<fixed<<setprecision(3)<<f(3)-f(0)<<endl;
}
