#include <iostream>
#include <cmath>

using namespace std;

long double formula(long long N){ long double result = 1, arg_for_comparison; for (long k = 1; N > k; k++) { arg_for_comparison = M_PI*k; result *= ( 5>arg_for_comparison ? M_PI*pow(k, 2)-7/pow(k, 2) : (arg_for_comparison>8 ? log10(k+7*sqrt(k)) : 1.5*pow(k, 3)+7*sqrt(k) ) );} return result;}
 
int main(){
	long long N;
	cin>>N;
	cout<<"Ответ = "<<formula(N)<<endl;
}
