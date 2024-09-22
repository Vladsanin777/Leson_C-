#include <iostream>
#include <cmath>

using namespace std;

long double formula(long long N){ long double result = 0, arg_for_comparison; for (long k = 1; N > k; k++) { arg_for_comparison = pow(k, 2); result += (50>arg_for_comparison ? arg_for_comparison+4*k+k : (arg_for_comparison>200 ? arg_for_comparison+4*k+5 : 1) );} return result;}

int main(){
	long long N;
	cin>>N;
	cout<<"Ответ = "<<formula(N)<<endl;
}
