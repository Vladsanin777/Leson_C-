#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

long double f(long double x) {return pow(x, 3)/(3+x);}

int main(){
	cout<<fixed<<setprecision(2)<<f(2)-f(1)<<endl;
}
