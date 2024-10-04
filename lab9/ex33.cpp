#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

long double f(long double x) {return log10(pow(x, 2)+1)/(x+1);}

int main(){
	cout<<fixed<<setprecision(5)<<f(1.6)-f(0.8)<<endl;
}
