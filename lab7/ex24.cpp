#include <iostream>
#include <cmath>

using namespace std;

long double formula(long long N){ long double result = 0, arg_for_comparison; for (long k = 1; N > k; k++) { arg_for_comparison = sqrt(k+2); result += (3>arg_for_comparison ? (log(k)+pow(k, 2)/arg_for_comparison) : (arg_for_comparison>6 ? cos(k)+2.2*pow(sin(k), 2) : sqrt(k+2.2)+1/k ) );} return result;}

int main(){
	long long N;
	cin>>N;
	cout<<"Ответ = "<<formula(N)<<endl;
}
