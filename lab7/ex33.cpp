#include <iostream>
#include <cmath>

using namespace std;

long double formula(long long N){ long double result = 0, arg_for_comparison; for (long k = 1; N > k; k++) { result += ( 3>k ? 1 : (k>8 ? pow(M_E, k)*cos(2)*k : -0.5*pow(k, 2)*log(k)) );} return result;}
 
int main(){
	long long N;
	cin>>N;
	cout<<"Ответ = "<<formula(N)<<endl;
}
