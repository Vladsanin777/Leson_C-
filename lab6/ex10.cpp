#include <iostream>
#include <cmath>
using namespace std;

long double formula(long double x, long n) {long double result = sin(x); for (long n_result = 2; n > n_result; ++n_result) {result += sin(pow(x, 2));}; return result;}

int main(){
	long double x;
	long n;
	cin>>x>>n;
	cout<<"Ответ: "<<formula(x, n)<<endl;
}
