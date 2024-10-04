#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

long double f(long double x) {return pow(tan(x), 4);}

int main(){
	cout<<fixed<<setprecision(2)<<f(M_PI/4)-f(0)<<endl;
}
