#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

long double f(long double x) {return 1.0/pow(x, 2)*sin(1/x);}

int main(){
	cout<<fixed<<setprecision(2)<<f(2.5)-f(1)<<endl;
}
