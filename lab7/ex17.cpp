#include <iostream>
#include <cmath>

using namespace std;

long double formula(long long N){ long double result = 0, arg_for_comparison; for (long k = 1; N > k; k++) { arg_for_comparison = log10(1.5)*k; result += (1.5>arg_for_comparison ? 1.5*k-arg_for_comparison : (arg_for_comparison>1.8 ? 1.5*k+arg_for_comparison : 1 ) );} return result;}

int main(){
	long long N;
	cin>>N;
	cout<<"Ответ = "<<formula(N)<<endl;
}
