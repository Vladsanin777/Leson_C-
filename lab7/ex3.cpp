#include <iostream>
#include <cmath>

using namespace std;

long double formula(long long N){ long double result = 0; for (long k = 1; N > k; k++) {result += (k<8 ? tan(pow(k, 2)) : sqrt(log(k+5)));} return result;}

int main(){
	long long N;
	cin>>N;
	cout<<formula(N)<<endl;
}
