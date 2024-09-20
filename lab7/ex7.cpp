#include <iostream>
#include <cmath>

using namespace std;

long double formula(long long N){ long double result = 1; for (long k = 1; N > k; k++) { result *= (k>4 ? cos(k+sqrt(k)) : cos(pow(M_E, k)+1) );} return result;}

int main(){
	long long N;
	cin>>N;
	cout<<formula(N)<<endl;
}
