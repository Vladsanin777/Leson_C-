#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

long double f(long double x) {return (sqrt(x)+1)/pow(x, 2);}

int main(){
	cout<<fixed<<setprecision(3.5)<<f(4)-f(1)<<endl;
}
