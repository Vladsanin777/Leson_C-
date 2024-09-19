#include <iostream>
#include <cmath>
using namespace std;

long double formula(long double a, long n) {long double result = pow(a, n); for (long n_result = 1; n > n_result; n_result++) {result += n_result*pow(a, n-n_result+1);}; return result;}

int main(){
	long double a;
	long n;
	cin>>a>>n;
	cout<<"Ответ: "<<formula(a, n)<<endl;
}
