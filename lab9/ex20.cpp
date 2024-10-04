#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

long double f(long double x) {return cos(x)+sin(x);}

int main(){
	cout<<fixed<<setprecision(4.2)<<f(M_PI/2)-f(0)<<endl;
}
