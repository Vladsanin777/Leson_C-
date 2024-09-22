#include <iostream>
#include <cmath>

using namespace std;

long double formula(long long N){ long double result = 1, arg_for_comparison; for (long k = 1; N > k; k++) { result *= ( k<5 ? 1.0/tan(sqrt(k)) : pow(k, tan(k)) );} return result;}
 
int main(){
	long long N;
	cin>>N;
	cout<<"Ответ = "<<formula(N)<<endl;
}
