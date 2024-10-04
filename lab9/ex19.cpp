#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

long double f(long double x) {return (double long)pow(1-x, 2)/pow(x, 2);}

int main(){
	cout<<fixed<<setprecision(2)<<f(2)-f(1)<<endl;
}
