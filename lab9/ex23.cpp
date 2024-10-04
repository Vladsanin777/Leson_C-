#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

long double f(long double x) {return 1.0/pow(pow(x, 2), 1.0/3);}

int main(){
	cout<<fixed<<setprecision(3)<<f(27)-f(1)<<endl;
}
