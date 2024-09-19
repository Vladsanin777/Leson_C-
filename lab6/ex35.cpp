#include <iostream>
#include <cmath>
using namespace std;

long double formula(long double x) {long double result = 0; short r = 1; while ( r != 6) {result += pow(x, 2*r+1)/(long double)(2*r-1); ++r;} return result;}

int main() {
	long double x;
	cin>>x;
	cout<<formula(x)<<endl;
}
