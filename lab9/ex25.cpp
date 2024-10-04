#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

long double f(long double x) {return (1+log(x))/x;}

int main(){
	cout<<fixed<<setprecision(2)<<f(M_E)-f(1)<<endl;
}
