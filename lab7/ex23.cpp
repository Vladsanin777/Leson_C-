#include <iostream>
#include <cmath>

using namespace std;

long double formula(long long N){ long double result = 0, arg_for_comparison; for (long k = 1; N > k; k++) { arg_for_comparison = sin(k)*cos(k); result += (0.5>arg_for_comparison ? (2.6-0.39)/(pow(M_E, k)+cos(k)) : (arg_for_comparison>0.8 ? pow(M_E, k)+sin(k) : /*(a+b)*/1/(k+1) ) );} return result;}

int main(){
	long long N;
	cin>>N;
	cout<<"Ответ = "<<formula(N)<<endl;
}
