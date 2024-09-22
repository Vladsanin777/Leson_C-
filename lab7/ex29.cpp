#include <iostream>
#include <cmath>

using namespace std;

long double formula(long long N){ long double result = 0, arg_for_comparison; for (long k = 1; N > k; k++) { arg_for_comparison = pow(k, 2); result += sqrt(arg_for_comparison+(k<arg_for_comparison ? -sin(k) : sin(k) ) );} return result;}
 
int main(){
	long long N;
	cin>>N;
	cout<<"Ответ = "<<formula(N)<<endl;
}
