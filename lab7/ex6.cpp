#include <iostream>
#include <cmath>

using namespace std;

long double formula(long long N){ long double result = 1; for (long k = 1; N > k; k++) { result *= (tan(k)>3.5 ? sin(k)*tan(k) : pow(cos(k), 2) );} return result;}

int main(){
	long long N;
	cin>>N;
	cout<<formula(N)<<endl;
}
