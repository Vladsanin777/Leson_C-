#include <iostream>
#include <cmath>

using namespace std;

long double formula(long long N){ long double result = 1, arg_for_comparison; for (long k = 1; N > k; k++) { result *= ( k<4 ? log(pow(M_E, k)+sqrt(k)) : pow(M_E, sqrt(k)) );} return result;}
 
int main(){
	long long N;
	cin>>N;
	cout<<"Ответ = "<<formula(N)<<endl;
}
