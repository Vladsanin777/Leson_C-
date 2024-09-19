#include <iostream>
#include <cmath>
using namespace std;

unsigned long long factorial(int n) { unsigned long long result = 1; for (int i = 2; i <= n; ++i) { result *= i; } return result; }

long double formula(long n) {long double result = 0; for (long n_result = 2; n > n_result; ++n_result) {result += static_cast<long double>(pow(n_result, 2))/factorial(n_result);}; return result;}

int main() {
	long n;
	cin>>n;
	cout<<"Ответ: "<<formula(n)<<endl;
}
