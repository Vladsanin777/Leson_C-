#include <iostream>
#include <cmath>
using namespace std;

long double formula(double a, long n) {long double result = a; for (long n_result = 1; n_result <= n; ++n_result) {result *= a+n_result;}; return result;}

int main(){
	double a;
	long n;
	cin>>a>>n;
	cout<<"Ответ: "<<formula(a, n)<<endl;
}
