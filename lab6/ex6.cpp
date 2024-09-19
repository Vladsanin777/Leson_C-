#include <iostream>
#include <cmath>
using namespace std;

long double formula(long n) {long double result = 1; for (long n_result = 1; n_result <= n; ++n_result) {result *= 1+(1/pow(n_result, 2));}; return result;}

int main(){
	long n;
	cin>>n;
	cout<<"Ответ: "<<formula(n)<<endl;
}
