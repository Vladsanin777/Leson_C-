#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

long double f(long double x) {return sqrt(x+1)*log10(x+3);}

int main(){
	cout<<fixed<<setprecision(3.5)<<f(0.6)-f(0.15)<<endl;
}
