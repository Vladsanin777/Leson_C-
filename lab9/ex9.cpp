#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

long double f(long double x) {return 1.0/sqrt(9+pow(x, 2));}

int main(){
	cout<<fixed<<setprecision(3.5)<<f(2)-f(0)<<endl;
}
