#include <iostream>
#include <cmath>
using namespace std;

long double formula(long double x, long n) {long double result = cos(x); for (long n_result = 2; n > n_result; ++n_result) {result += cos(n*x);}; return result;}

int main(){
	long double x;
	long n;
	cin>>x>>n;
	cout<<"Ответ: "<<formula(x, n)<<endl;
}
