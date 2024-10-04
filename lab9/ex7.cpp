#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

long double f(long double x) {return pow(log(x/x), 2);}

int main(){
	cout<<fixed<<setprecision(3.5)<<f(2.5)-f(1)<<endl;
}
