#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

long double f(long double x) {return 2/(sin(2)*x);}

int main(){
	cout<<fixed<<setprecision(3.5)<<f(M_PI/3)-f(M_PI/4)<<endl;
}
