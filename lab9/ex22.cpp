#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

long double f(long double x) {return 2/sqrt(1-pow(x, 2));}

int main(){
	cout<<fixed<<setprecision(3)<<f(1/2)-f(0)<<endl;
}
