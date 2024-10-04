#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

long double f(long double x) {return pow(x, 2)/(2*pow(x, 3)+3);}

int main(){
	cout<<fixed<<setprecision(3.5)<<f(1)-f(-1)<<endl;
}
