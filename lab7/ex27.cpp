#include <iostream>
#include <cmath>

using namespace std;

long double formula(long long N){ long double result = 1, arg_for_comparison; for (long k = 1; N > k; k++) { arg_for_comparison = 1.3*k; result *= (7>arg_for_comparison ? arg_for_comparison+1.29 : ( arg_for_comparison>12 ? pow(M_E, arg_for_comparison)*cos(1.3)*k : cos(1.3)*k ) );} return result;}
 
int main(){
	long long N;
	cin>>N;
	cout<<"Ответ = "<<formula(N)<<endl;
}
