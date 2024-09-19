#include <iostream>
#include <cmath>
using namespace std;

long double formula(long n) {long double result = 1; for (long n_result = 2; n > n_result; ++n_result) {result += static_cast<long double>(1)/(n_result);}; return result;}

int main() {
	long n;
	cin>>n;
	cout<<"Ответ: "<<formula(n)<<endl;
}
