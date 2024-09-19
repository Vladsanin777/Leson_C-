#include <iostream>
#include <cmath>
using namespace std;

long double formula(long n) {long double result = 0; for (long n_result = 1; n > n_result; ++n_result) {result += (long double)1/pow(2*n_result+1, 2);}; return result;}

int main() {
	long n;
	cin>>n;
	cout<<"Ответ: "<<formula(n)<<endl;
}
