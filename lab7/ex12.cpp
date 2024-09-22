#include <iostream>
#include <cmath>

using namespace std;

long double formula(long long N){ long double result = 1, argument_for_comparison; for (long k = 1; N > k; k++) {argument_for_comparison = k*sqrt(k); result *= (5>argument_for_comparison ? 0 : (argument_for_comparison>8 ? pow(k, 2)-sin(M_PI)*pow(k,2) : pow(k, 2)-k) );} return result;}

int main(){
	long long N;
	cin>>N;
	cout<<"Ответ = "<<formula(N)<<endl;
}
