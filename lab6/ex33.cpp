#include <iostream>
#include <cmath>
using namespace std;

long double formula(long double x) {long double result = 1; short r = 1; while ( r != 10) {result *= 1+pow(x, 2*r+1)/(float)pow(r, 2); ++r;} return result;}

int main() {
	long double x;
	cin>>x;
	cout<<formula(x)<<endl;
}
