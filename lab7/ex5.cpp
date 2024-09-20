#include <iostream>
#include <cmath>

using namespace std;

long double formula(long long N){ long double result = 1; for (long k = 1; N > k; k++) { result *= (k>3 ? cos(pow(M_E, k)) : cos(pow(k, 3)) );} return result;}

int main(){
	long long N;
	cin>>N;
	cout<<formula(N)<<endl;
}
