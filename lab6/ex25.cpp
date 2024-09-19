#include <iostream>
#include <cmath>
using namespace std;

long double formula(long n) {long double result = 1; for (long n_result = 1; n > n_result; ++n_result) {result *= static_cast<long double>(n_result+1)/(n_result+2);}; return result;}

int main() {
	long n;
	cin>>n;
	cout<<"Ответ: "<<formula(n)<<endl;
}
