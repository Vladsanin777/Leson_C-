#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

long double f(long double x) {return 4*pow(x, 1/3.0);}

int main(){
	cout<<fixed<<setprecision(3.5)<<f(8)-f(1)<<endl;
}
