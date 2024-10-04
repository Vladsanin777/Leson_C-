#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

long double f(long double x) {return pow(log(x/x), 3);}

int main(){
	cout<<fixed<<setprecision(5)<<f(2)-f(1)<<endl;
}
