#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

long double f(long double x) {return pow(tan(x), 3)/pow(cos(x), 2);}

int main(){
	cout<<fixed<<setprecision(3)<<f(M_PI/3)-f(M_PI/4)<<endl;
}
