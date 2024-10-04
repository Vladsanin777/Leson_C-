#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

long double f(long double x) {return (1+2*pow(x, 2))/x;}

int main(){
	cout<<fixed<<setprecision(3)<<f(2)-f(1)<<endl;
}
