#include <iostream>
#include <cmath>

using namespace std;

long double formula(long long N){ long double result = 1, argument_for_comparison; for (long k = 1; N > k; k++) { argument_for_comparison = sqrt(pow(k, 2)+1); result *= (5>argument_for_comparison ? 2.8*pow(k, 2)-0.3*k+4 : (argument_for_comparison>8 ? (2.8-0.3*k)/sqrt(pow(k, 2)+1) : 2.8/k+sqrt(pow(k, 2)+1)) );} return result;}

int main(){
	long long N;
	cin>>N;
	cout<<"Ответ = "<<formula(N)<<endl;
}
