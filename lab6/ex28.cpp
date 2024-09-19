#include <iostream>
#include <cmath>
using namespace std;

long double formula(long n, long double x) {long double result = 0; for (long n_result = 1; n > n_result; ++n_result) {result += x-cos(n_result*x);} return result;}

int main() {
	long double x;
	long n;
	cin>>x>>n;
	cout<<"Ответ: "<<formula(n, x)<<endl;
}
