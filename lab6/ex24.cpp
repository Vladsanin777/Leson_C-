#include <iostream>
#include <cmath>
using namespace std;

long double formula(long n) {long double result = sqrt(n); for (long n_result = n-1; 0 != n_result; --n_result) {result += sqrt(n_result+result);}; return result;}

int main() {
	long n;
	cin>>n;
	cout<<"Ответ: "<<formula(n)<<endl;
}
