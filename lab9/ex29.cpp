#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

long double f(long double x) {return cos(x)/pow(sin(x), 3);}

int main(){
	cout<<fixed<<setprecision(5)<<f(M_PI/4)-f(M_PI/2)<<endl;
}
