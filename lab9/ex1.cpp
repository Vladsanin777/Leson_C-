#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

long double f(long double x) {return pow(log(x), 2)/x;}

int main(){
	cout<<fixed<<setprecision(3)<<f(4)-f(1)<<endl;
}
