#include <iostream>
#include <cmath>

using namespace std;

long double formula(long long N){ long double result = 1; for (long k = 1; N > k; k++) {result *= (k<6 ? pow(sin(k), 2)+cos(k) : (k>10 ? pow(cos(k), 2)+sin(k) : 0 ));} return result;}

int main(){
	long long N;
	cin>>N;
	cout<<formula(N)<<endl;
}
