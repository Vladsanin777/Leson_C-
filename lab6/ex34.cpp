#include <iostream>
#include <cmath>
using namespace std;

long double formula(long double x) {long double result = 0; short r = 1; while ( r != 12) {result += (float)pow(x, 2*r)/(r*(r+2)*(r+3)); ++r;} return result;}

int main() {
	long double x;
	cin>>x;
	cout<<formula(x)<<endl;
}
