#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

long double f(long double x) {return pow(x, 2)*sin(2)*x;}

int main(){
	cout<<fixed<<setprecision(3.5)<<f(2)-f(1)<<endl;
}
