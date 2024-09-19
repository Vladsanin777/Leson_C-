#include <iostream>
#include <cmath>
using namespace std;

long double formula(long n) {long double result = 0.5; for (long n_result = 3; n > n_result; n_result+=2) {result *= (long double)n_result/(n_result+1);}; return result;}

int main() {
	long n;
	cin>>n;
	cout<<"Ответ: "<<formula(n)<<endl;
}
